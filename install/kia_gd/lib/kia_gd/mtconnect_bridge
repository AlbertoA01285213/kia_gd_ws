#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
import requests
import xml.etree.ElementTree as ET # Para parsear la respuesta de MTConnect
import time

class MTConnectBridge(Node):

    def __init__(self):
        super().__init__('mtconnect_bridge')
        
        # --- Configuración ---
        # ¡CAMBIA ESTA IP! por la de tu Agente MTConnect
        self.agent_url = 'http://192.168.1.100:5000/current' 
        
        # Publicadores para cada robot
        self.ur5_pub = self.create_publisher(JointState, '/UR5/joint_states', 10)
        self.kia_pub = self.create_publisher(JointState, '/Kia/joint_states', 10)

        # Nombres de las articulaciones (DEBEN coincidir con los DataItems de MTConnect y el URDF)
        # ESTO ES SOLO UN EJEMPLO, necesitas mapear tus nombres
        self.ur5_joint_names = ['Base_J1', 'J1_J2', 'J2_J3', 'J3_J4', 'J4_J5', 'J5_J6']
        self.kia_joint_names = ['Kia_Deslizador']
        
        # Temporizador para sondear (polling) al agente cada 100ms (10 Hz)
        self.timer = self.create_timer(0.1, self.poll_mtconnect)
        self.get_logger().info('Nodo MTConnect Bridge iniciado. Sondeando a: ' + self.agent_url)

    def poll_mtconnect(self):
        try:
            # 1. Hacer la petición HTTP al agente
            response = requests.get(self.agent_url, timeout=0.5)
            response.raise_for_status() # Lanza un error si la petición falla

            # 2. Parsear la respuesta XML
            # MTConnect usa namespaces, lo cual complica el parseo. Esta es la forma de manejarlo.
            root = ET.fromstring(response.content)
            namespaces = {'mt': 'urn:mtconnect.org:MTConnectStreams:1.3'} # Ajusta la versión si es necesario

            # 3. Preparar los mensajes
            ur5_msg = JointState()
            ur5_msg.header.stamp = self.get_clock().now().to_msg()
            ur5_msg.name = self.ur5_joint_names
            ur5_msg.position = [0.0] * len(self.ur5_joint_names) # Inicializar con ceros

            kia_msg = JointState()
            kia_msg.header.stamp = self.get_clock().now().to_msg()
            kia_msg.name = self.kia_joint_names
            kia_msg.position = [0.0] * len(self.kia_joint_names)

            # 4. Encontrar y extraer los datos
            # Esta es la parte más difícil: debes encontrar los 'dataItemId' correctos
            # que corresponden a tus joints.
            # 
            # Ejemplo: <Position dataItemId="ur5_j1">1.234</Position>
            #
            # El path XML sería algo como: './/mt:Position[@dataItemId="ur5_j1"]'
            
            # --- EJEMPLO DE EXTRACCIÓN (DEBES ADAPTARLO) ---
            
            # UR5
            for i, name in enumerate(self.ur5_joint_names):
                # Debes encontrar el dataItemId que corresponde a 'name'
                # Ejemplo: data_item_id = "id_del_joint_" + name
                # data_item = root.find(f'.//mt:Position[@dataItemId="{data_item_id}"]', namespaces)
                # if data_item is not None:
                #    ur5_msg.position[i] = float(data_item.text)
                pass # Borra este 'pass' cuando implementes la lógica

            # Kia
            # Ejemplo: data_item_id = "id_del_kia_deslizador"
            # data_item = root.find(f'.//mt:Position[@dataItemId="{data_item_id}"]', namespaces)
            # if data_item is not None:
            #    kia_msg.position[0] = float(data_item.text)
            pass # Borra este 'pass'
            
            # 5. Publicar los mensajes
            self.ur5_pub.publish(ur5_msg)
            self.kia_pub.publish(kia_msg)
            
            self.get_logger().info('Datos de MTConnect publicados.', throttle_duration_sec=1.0)

        except requests.exceptions.RequestException as e:
            self.get_logger().warn(f'No se pudo conectar al Agente MTConnect: {e}')

def main(args=None):
    rclpy.init(args=args)
    node = MTConnectBridge()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()