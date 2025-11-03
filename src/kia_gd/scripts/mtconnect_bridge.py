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
        self.agent_url = 'http://192.168.1.100:5000/current' 
        
        self.ur5_pub = self.create_publisher(JointState, '/UR5/joint_states', 10)
        self.kia_pub = self.create_publisher(JointState, '/Kia/joint_states', 10)

        self.ur5_joint_names = ['Base_J1', 'J1_J2', 'J2_J3', 'J3_J4', 'J4_J5', 'J5_J6']
        self.kia_joint_names = ['Kia_Deslizador']
        
        self.timer = self.create_timer(0.1, self.poll_mtconnect)
        self.get_logger().info('Nodo MTConnect Bridge iniciado. Sondeando a: ' + self.agent_url)

    def poll_mtconnect(self):
        try:
            response = requests.get(self.agent_url, timeout=0.5)
            response.raise_for_status()

            root = ET.fromstring(response.content)
            namespaces = {'mt': 'urn:mtconnect.org:MTConnectStreams:1.3'} 

            ur5_msg = JointState()
            ur5_msg.header.stamp = self.get_clock().now().to_msg()
            ur5_msg.name = self.ur5_joint_names
            ur5_msg.position = [0.0] * len(self.ur5_joint_names)

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