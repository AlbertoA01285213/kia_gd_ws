from launch import LaunchDescription
from launch_ros.actions import Node
from launch.actions import DeclareLaunchArgument
from launch.substitutions import LaunchConfiguration
import os

from ament_index_python.packages import get_package_share_directory

def generate_launch_description():
    pkg_share = get_package_share_directory('kia_gd')
    
    # 1. Define las rutas a TUS archivos URDF
    urdf_file_1 = os.path.join(pkg_share, 'urdf', 'ur5.urdf')
    urdf_file_2 = os.path.join(pkg_share, 'urdf', 'kia.urdf') # Asumo que se llama kia.urdf

    # Lee el contenido de los archivos URDF
    with open(urdf_file_1, 'r') as f:
        robot1_desc = f.read()
        
    with open(urdf_file_2, 'r') as f:
        robot2_desc = f.read()

    # 2. Define la ruta a tu archivo de configuración de RViz
    default_rviz_config_path = os.path.join(pkg_share, 'rviz', 'visualizacion2.rviz')

    # 3. Define los namespaces para cada robot
    robot1_namespace = 'UR5'  # Cambiado a UR5
    robot2_namespace = 'Kia'  # Cambiado a Kia
    
    # Argumento de lanzamiento para RViz
    rviz_config_arg = DeclareLaunchArgument(
        name='rviz_config',
        default_value=default_rviz_config_path,
        description='Ruta absoluta al archivo de configuración de RViz2'
    )

    return LaunchDescription([
        
        rviz_config_arg,
        
        # --- INICIO DE MODIFICACIÓN ---
        # Publica la transformación ESTÁTICA desde el 'world' común al robot 1 (UR5)
        # Argumentos: [x, y, z, yaw, pitch, roll, frame_id_padre, frame_id_hijo]
        # Cambia los valores de x, y, z, yaw, pitch, roll para colocar tu robot donde quieras
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='world_to_ur5_base',
            arguments=['0', '0.5', '0', '0', '0', '0', 'world', 'UR5/Base']
        ),
        
        # Publica la transformación ESTÁTICA desde el 'world' común al robot 2 (Kia)
        # Lo colocaré en y = -0.5 para que no estén uno encima del otro
        Node(
            package='tf2_ros',
            executable='static_transform_publisher',
            name='world_to_kia_base',
            # arguments=['0', '0', '0', '1.57', '0', '0', 'world', 'Kia/Kia']
            arguments=['2', '-8', '0', '1.57', '0', '0', 'world', 'Kia/Kia']
        ),

        Node(
            package='kia_gd',  # El nombre de tu paquete
            executable='controlador_ur5', # El nombre que pusiste en setup.py
            name='controlador_ur5',
            namespace=robot1_namespace, # Opcional, pero bueno para ordenar
            output='screen',
        ),

        Node(
            package='kia_gd',  # El nombre de tu paquete
            executable='controlador_kia', # El nombre que pusiste en setup.py
            name='controlador_kia',
            namespace=robot2_namespace, # Opcional, pero bueno para ordenar
            output='screen',
        ),

        # --- ROBOT 1 (UR5) ---
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
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            name='joint_state_publisher_gui',
            namespace=robot1_namespace,
            output='screen',
            parameters=[{'robot_description': robot1_desc}]
        ),
        
        # --- ROBOT 2 (Kia) ---
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
        Node(
            package='joint_state_publisher_gui',
            executable='joint_state_publisher_gui',
            name='joint_state_publisher_gui',
            namespace=robot2_namespace,
            output='screen',
            parameters=[{'robot_description': robot2_desc}]
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