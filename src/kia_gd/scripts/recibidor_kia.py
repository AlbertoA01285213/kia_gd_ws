#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Header
import paho.mqtt.client as mqtt

class JointStatePublisherNode(Node):

    def __init__(self):
        super().__init__('recibidor_kia')

        self.publisher_ = self.create_publisher(JointState, '/Kia/joint_states', 10)

        # MQTT -------------------------
        self.client = mqtt.Client()
        self.client.on_message = self.on_message
        self.client.connect("mqtt-dashboard.com", 1883, 60)
        self.client.subscribe("topic_deslizador")
        self.client.loop_start()
        # ------------------------------

        # Joint info
        self.joint_name = ['Kia_Deslizador']

        # Estados del deslizador
        self.pose = 0.0
        self.target = 0.0      # 0 o 1 según MQTT
        self.speed = 0.05      # metros por ciclo (~30 Hz)

        # Timer 30Hz para publicar
        self.timer = self.create_timer(0.033, self.update_joint)

    # Cuando llega un mensaje MQTT
    def on_message(self, client, userdata, msg):
        valor = msg.payload.decode()
        if valor == "1":
            self.target = 1.0
        elif valor == "0":
            self.target = 0.0

        self.get_logger().info(f'Mensaje de mqtt: {valor:.2f}')

    # Actualiza el deslizador sin bloquear ROS2
    def update_joint(self):
        # Movimiento suave hacia target
        if abs(self.pose - self.target) > 0.001:
            if self.pose < self.target:
                self.pose += self.speed
                if self.pose > self.target:
                    self.pose = self.target
            else:
                self.pose -= self.speed
                if self.pose < self.target:
                    self.pose = self.target

        # Construir JointState
        msg = JointState()
        msg.header = Header()
        msg.header.stamp = self.get_clock().now().to_msg()

        msg.name = self.joint_name
        msg.position = [self.pose]

        # Publicar
        self.publisher_.publish(msg)


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
