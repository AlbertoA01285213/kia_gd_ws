from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument, IncludeLaunchDescription, GroupAction
from launch.substitutions import LaunchConfiguration
import os

from ament_index_python.packages import get_package_share_directory
from launch_ros.actions import PushRosNamespace
from launch.launch_description_sources import PythonLaunchDescriptionSource

def generate_launch_description():
    pkg_share = get_package_share_directory('kia_gd')
    
    # URDFs personalizados
    urdf_file_ur5 = os.path.join(pkg_share, 'urdf', 'ur5.urdf')
    urdf_file_kia = os.path.join(pkg_share, 'urdf', 'kia.urdf')

    with open(urdf_file_ur5, 'r') as f:
        robot1_desc = f.read()
    with open(urdf_file_kia, 'r') as f:
        robot2_desc = f.read()

    rviz_config = os.path.join(pkg_share, 'rviz', 'visualizacion2.rviz')

    robot1_namespace = 'UR5'
    robot2_namespace = 'Kia'

    rviz_config_arg = DeclareLaunchArgument(
        name='rviz_config',
        default_value=rviz_config,
        description='Ruta al archivo RViz'
    )

    # --- DRIVER UR5 (solo publica joint_states y controla el robot físico) ---
    ur5_driver_group = GroupAction([
        PushRosNamespace(robot1_namespace),
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(
                os.path.join(
                    get_package_share_directory('ur_robot_driver'),
                    'launch',
                    'ur_control.launch.py'
                )
            ),
            launch_arguments={
                'ur_type': 'ur5',
                'robot_ip': '172.17.0.2',
                'tf_prefix': '',  # <---- SIN PREFIJO
                'launch_rviz': 'false',
                'use_fake_hardware': 'false',
                'launch_robot_state_publisher': 'false',  # lo manejamos nosotros
                'headless_mode': 'true',  # opcional
            }.items(),
        )
    ])

    return LaunchDescription([
        rviz_config_arg,

        # --- Transformaciones estáticas ---
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='world_to_ur5_base',
            arguments=['0', '0.5', '0', '0', '0', '0', 'world', 'UR5/Base']
        ),

        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='world_to_kia_base',
            arguments=['2', '-8', '0', '1.57', '0', '0', 'world', 'Kia/Kia']
        ),

        # --- Driver UR5 ---
        ur5_driver_group,

        Node(
            package='kia_gd',
            executable='joint_state_mapper',
            name='joint_state_mapper',
            output='screen',
        ),

        # --- Tu robot_state_publisher (usa tu URDF personalizado) ---
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher_ur5',
            namespace='',
            remappings=[('joint_states', '/UR5/joint_states_custom')],
            parameters=[{
                'use_sim_time': False,
                'robot_description': robot1_desc,
                'frame_prefix': robot1_namespace + '/'  # 'UR5/'
            }],
            output='screen'
        ),

        # --- KIA robot (sin cambios) ---
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher_kia',
            namespace=robot2_namespace,
            parameters=[{
                'use_sim_time': False,
                'robot_description': robot2_desc,
                'frame_prefix': robot2_namespace + '/'
            }],
            output='screen'
        ),

        Node(
            package='kia_gd',
            executable='controlador_kia',
            name='controlador_kia',
            namespace=robot2_namespace,
            output='screen',
        ),

        Node(
            package='kia_gd',
            executable='dashboard',
            name='dashboard',
            output='screen',
        ),

        # --- RViz ---
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', LaunchConfiguration('rviz_config')]
        ),
    ])
