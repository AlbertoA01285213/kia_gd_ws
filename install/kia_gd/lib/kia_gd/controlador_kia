#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
import math

class JointStatePublisherNode(Node):

    def __init__(self):
        super().__init__('controlador_kia')
        self.publisher_ = self.create_publisher(JointState, '/Kia/joint_states', 10)
        
        self.timer = self.create_timer(0.1, self.timer_callback)
        
        self.joint_names = [
            'Kia_Deslizador'
        ]
        
        self.angle = 0.0

    def timer_callback(self):
        msg = JointState()
        
        msg.header = Header()
        msg.header.stamp = self.get_clock().now().to_msg()
        
        msg.name = self.joint_names
        
        self.angle += 0.05
        Deslizador = 1 * math.sin(self.angle)
        if Deslizador < 0:
            Deslizador = 0.0
        
        msg.position = [
            Deslizador,                   # Base_J1
        ]
        
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