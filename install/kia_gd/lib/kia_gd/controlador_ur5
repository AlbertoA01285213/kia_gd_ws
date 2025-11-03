#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
import math

class JointStatePublisherNode(Node):

    def __init__(self):
        super().__init__('controlador_ur5')
        
        self.publisher_ = self.create_publisher(JointState, '/UR5/joint_states', 10)
        self.modo_sub = self.create_subscription(Bool, '/modo', self.modo_callback, 10)

        self.modo_manual_activo = False      

        self.timer = self.create_timer(0.1, self.timer_callback)
        
        self.joint_names = [
            'Base_J1',
            'J1_J2',
            'J2_J3',
            'J3_J4',
            'J4_J5',
            'J5_J6'
        ]
        
        self.angle = 0.0

    def modo_callback(self, msg):
        self.modo_manual_activo = msg.data

    def timer_callback(self):
        if self.modo_manual_activo:  # Esto es lo mismo que 'if self.modo_manual_activo == True'

            msg = JointState()
            msg.header = Header()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.name = self.joint_names
            
            self.angle += 0.05 
            
            j3_j4_position = 1.5 * math.sin(self.angle)
            Base_J1_position = 1.5 * math.sin(self.angle)
            j5_j6_position = 1.5 * math.sin(self.angle)

            msg.position = [
                Base_J1_position,
                0.0,
                0.0,
                j3_j4_position,
                0.0,
                j5_j6_position
            ]
            
            self.publisher_.publish(msg)

        else: # Equivale a 'if self.modo_manual_activo == False'
            msg = JointState()
            msg.header = Header()
            msg.header.stamp = self.get_clock().now().to_msg()
            msg.name = self.joint_names
            
            msg.position = [
                0.0,
                0.0,
                0.0,
                0.0,
                0.0,
                0.0
            ]
            
            self.publisher_.publish(msg)

# ... (main sin cambios) ...
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