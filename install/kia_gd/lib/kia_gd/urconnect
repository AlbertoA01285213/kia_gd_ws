#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
from ur_rtde import RTDEReceiveInterface

class URJointReader(Node):
    def __init__(self):
        super().__init__('ur_joint_reader')
        self.publisher_ = self.create_publisher(JointState, '/UR5/joint_states', 10)

        self.rtde_r = RTDEReceiveInterface("127.0.0.1", 30004)

        self.angle = 0.0
        self.joint_names = [
            'Base_J1',
            'J1_J2',
            'J2_J3',
            'J3_J4',
            'J4_J5',
            'J5_J6'
        ]

        self.timer = self.create_timer(0.1, self.timer_callback)

        self.get_logger().info("Conectado al RTDE de URSim en 127.0.0.1:30004")

    def timer_callback(self):
        msg = JointState()
        msg.header = Header()
        msg.header.stamp = self.get_clock().now().to_msg()
        msg.name = self.joint_names
        actual_q = self.rtde_r.getActualQ()

        Base_J1_position = actual_q[0]
        J1_J2_position = actual_q[1]
        J2_J3_position = actual_q[2]
        J3_J4_position = actual_q[3]
        J4_J5_position = actual_q[4]
        J5_J6_position = actual_q[5]

        msg.position = [
            Base_J1_position,
            J1_J2_position,
            J2_J3_position,
            J3_J4_position,
            J4_J5_position,
            J5_J6_position
        ]

        self.publisher_.publish(msg)

def main(args=None):
    rclpy.init(args=args)
    node = URJointReader()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
