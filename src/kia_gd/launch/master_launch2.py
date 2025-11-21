from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
import os

from ament_index_python.packages import get_package_share_directory

# --- INICIO DE MODIFICACIÓN ---
# Importaciones necesarias para lanzar OTRO launch file
from launch.actions import IncludeLaunchDescription
from launch.launch_description_sources import PythonLaunchDescriptionSource
# --- FIN DE MODIFICACIÓN ---


def generate_launch_description():
    pkg_share = get_package_share_directory('kia_gd')
    
    # --- INICIO DE MODIFICACIÓN ---
    # Path al driver que clonaste (asumiendo que está en tu carpeta src)
    ur_rtde_driver_pkg = get_package_share_directory('ur_ros_rtde')
    ur_rtde_launch_file = os.path.join(
        ur_rtde_driver_pkg,
        'launch',
        'robot_state_receiver.launch.py' # El launch que probaste
    )
    # --- FIN DE MODIFICACIÓN ---
    
    # (El resto de tus definiciones de paths y URDFs se quedan igual)
    # ...
    urdf_file_1 = os.path.join(pkg_share, 'urdf', 'ur5.urdf')
    # ... (leer archivos, etc.) ...
    with open(urdf_file_1, 'r') as f:
        robot1_desc = f.read()
    with open(os.path.join(pkg_share, 'urdf', 'kia.urdf'), 'r') as f:
        robot2_desc = f.read()
    default_rviz_config_path = os.path.join(pkg_share, 'rviz', 'visualizacion2.rviz')
    robot1_namespace = 'UR5'
    robot2_namespace = 'Kia'
    rviz_config_arg = DeclareLaunchArgument(
        name='rviz_config',
        default_value=default_rviz_config_path,
        description='Ruta absoluta al archivo de configuración de RViz2'
    )


    return LaunchDescription([
        
        rviz_config_arg,
        
        # --- (Tus TFs estáticos se quedan igual) ---
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='world_to_ur5_base',
            arguments=['0', '0.5', '0', '-1.57', '0', '0', 'world', 'UR5/Base']
        ),
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='world_to_kia_base',
            arguments=['2', '-8', '0', '1.57', '0', '0', 'world', 'Kia/Kia']
        ),

        # --- Nodos de Control y Dashboard (se quedan igual) ---
        # Node(
        #     package='kia_gd',
        #     executable='controlador_ur5', # Modo Manual
        #     name='controlador_ur5',
        #     namespace=robot1_namespace,
        #     output='screen',
        # ),
        Node(
            package='kia_gd',
            executable='recibidor_kia',
            name='recibidor_kia',
            namespace=robot2_namespace,
            output='screen',
        ),

        # Node(
        #     package='kia_gd',
        #     executable='ur_path_maker',
        #     name='ur_path_maker',
        #     namespace=robot1_namespace,
        #     output='screen',
        # ),
        # Node(
        #     package='kia_gd',
        #     executable='dashboard', # El switch
        #     name='dashboard',
        #     output='screen',
        # ),

        # --- INICIO DE MODIFICACIÓN ---
        
        # 1. Lanzar el driver ur_ros_rtde
        IncludeLaunchDescription(
            PythonLaunchDescriptionSource(ur_rtde_launch_file)
            # Aquí podrías pasarle argumentos, como el IP del robot, si el driver lo permite
            # launch_arguments={'robot_ip': '192.168.1.102'}.items() 
        ),

        # 2. Lanzar tu nuevo nodo Relay (Modo Gemelo)
        Node(
            package='kia_gd',
            executable='gemelo_ur_relay',
            name='gemelo_ur_relay',
            output='screen',
        ),
        
        # --- FIN DE MODIFICACIÓN ---

        # --- Robot State Publishers (se quedan igual) ---
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            namespace=robot1_namespace,
            output='screen',
            parameters=[{
                'use_sim_time': False,
                'robot_description': robot1_desc,
                'frame_prefix': robot1_namespace + '/' 
            }]
        ),
        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            namespace=robot2_namespace,
            output='screen',
            parameters=[{
                'use_sim_time': False,
                'robot_description': robot2_desc,
                'frame_prefix': robot2_namespace + '/'
            }]
        ),
        
        # --- RViz (se queda igual) ---
        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            output='screen',
            arguments=['-d', LaunchConfiguration('rviz_config')]
        ),
    ])