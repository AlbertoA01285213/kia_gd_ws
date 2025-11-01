#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
import math

class JointStatePublisherNode(Node):

    def __init__(self):
        super().__init__('controlador_kia')
        
        # IMPORTANTE: Publicar en el topic con el namespace
        self.publisher_ = self.create_publisher(JointState, '/Kia/joint_states', 10)
        
        # Crear un temporizador para publicar a 10 Hz
        self.timer = self.create_timer(0.1, self.timer_callback)
        
        # Nombres de las articulaciones del UR5 (de tu urdf ur5.urdf)
        self.joint_names = [
            'Kia_Deslizador'
        ]
        
        # Variable para animar el saludo
        self.angle = 0.0

    def timer_callback(self):
        # Crear el mensaje JointState
        msg = JointState()
        
        # ¡CRÍTICO! Debes ponerle un timestamp (marca de tiempo)
        msg.header = Header()
        msg.header.stamp = self.get_clock().now().to_msg()
        
        # ¡CRÍTICO! Los nombres deben coincidir con los del URDF
        msg.name = self.joint_names
        
        # --- Lógica del movimiento ---
        # Vamos a hacer que la articulación 'J3_J4' (el "codo") se mueva
        # Usamos una función seno para crear una ola
        self.angle += 0.05  # Incrementar el ángulo
        Deslizador = 1 * math.sin(self.angle) # Amplitud de 1.5 radianes
        if Deslizador < 0:
            Deslizador = 0.0  # El deslizador no puede ser negativo
        
        # Asegúrate de que la lista de posiciones tenga el mismo
        # tamaño que la lista de nombres.
        msg.position = [
            Deslizador,                   # Base_J1
        ]
        
        # Publicar el mensaje
        self.publisher_.publish(msg)
        self.get_logger().info(f'Publicando posición de Deslizador: {Deslizador:.2f}')


def main(args=None):
    rclpy.init(args=args)
    node = JointStatePublisherNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    finally:
        node.destroy_node()
        rclpy.shutdown()

if __name__ == '__main__':
    main()