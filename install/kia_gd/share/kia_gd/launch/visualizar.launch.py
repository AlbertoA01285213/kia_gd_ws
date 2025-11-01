import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():

    # 1. Obtener la ruta al paquete
    pkg_path = get_package_share_directory('visualizar_figuras')

    # 2. Obtener la ruta al archivo URDF
    urdf_file_path = os.path.join(pkg_path, 'urdf', 'figuras.urdf')
    
    # 3. Leer el contenido del URDF
    # robot_state_publisher necesita el URDF como un string, no como un archivo
    with open(urdf_file_path, 'r') as f:
        robot_description_content = f.read()

    # 4. Configurar el nodo robot_state_publisher
    # Este nodo toma el URDF y publica los TFs (transformadas)
    node_robot_state_publisher = Node(
        package='robot_state_publisher',
        executable='robot_state_publisher',
        name='robot_state_publisher',
        output='screen',
        parameters=[{'robot_description': robot_description_content}]
    )

    # 5. Configurar el nodo joint_state_publisher_gui
    # Este nodo proporciona un GUI para mover las articulaciones 'revolute' o 'prismatic'
    node_joint_state_publisher_gui = Node(
        package='joint_state_publisher_gui',
        executable='joint_state_publisher_gui',
        name='joint_state_publisher_gui'
    )

    # 6. Configurar el nodo RViz
    # (Opcional) Puedes pre-configurar RViz y guardar el archivo .rviz
    # rviz_config_path = os.path.join(pkg_path, 'rviz', 'figuras.rviz')
    node_rviz = Node(
        package='rviz2',
        executable='rviz2',
        name='rviz2',
        output='screen',
        # arguments=['-d', rviz_config_path] # Descomenta esto si tienes un .rviz
    )

    # 7. Retornar la descripción del lanzamiento
    return LaunchDescription([
        node_robot_state_publisher,
        node_joint_state_publisher_gui,
        node_rviz
    ])