#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from geometry_msgs.msg import PoseStamped, Point
from visualization_msgs.msg import Marker
from rclpy.qos import QoSProfile

class TcpTrayectoriaNode(Node):
    def __init__(self):
        super().__init__('tcp_trayectoria_node')

        # 1. Suscripción (Usamos nombre RELATIVO, sin la barra inicial)
        # Al lanzarlo en el namespace 'UR5', esto se convierte en '/UR5/tcp_pose'
        self.sub = self.create_subscription(
            PoseStamped,
            'tcp_pose', 
            self.pose_callback,
            10
        )

        # 2. Publicador (Nombre RELATIVO)
        # Se convertirá en '/UR5/path_marker'
        self.marker_pub = self.create_publisher(
            Marker,
            'path_marker',
            10
        )

        # Configuración inicial del Marker
        self.marker = Marker()
        self.marker.ns = "tcp_path"
        self.marker.id = 0
        self.marker.type = Marker.LINE_STRIP
        self.marker.action = Marker.ADD
        self.marker.scale.x = 0.005  # 5mm de grosor
        self.marker.color.r = 1.0    # Rojo para que resalte
        self.marker.color.g = 1.0
        self.marker.color.b = 0.0
        self.marker.color.a = 1.0
        self.marker.pose.orientation.w = 1.0 # Importante: orientación neutra
        self.marker.points = []

        self.get_logger().info("Nodo trayectoria TCP iniciado. Esperando datos en 'tcp_pose'...")

    def pose_callback(self, msg: PoseStamped):
        # 3. Sincronización de Frames
        # El marker debe estar en el mismo frame que el punto que recibimos
        self.marker.header.frame_id = msg.header.frame_id
        self.marker.header.stamp = self.get_clock().now().to_msg()

        # Extraer punto
        p = Point()
        p.x = msg.pose.position.x
        p.y = msg.pose.position.y
        p.z = msg.pose.position.z

        # Evitar duplicados exactos para no saturar RViz (opcional)
        if self.marker.points:
            last_p = self.marker.points[-1]
            dist = (p.x - last_p.x)**2 + (p.y - last_p.y)**2 + (p.z - last_p.z)**2
            if dist < 0.000001: # Si no se ha movido casi nada, no agregamos
                return

        self.marker.points.append(p)

        # Limitar la cola para que no consuma memoria infinita (opcional, ej. últimos 5000 ptos)
        if len(self.marker.points) > 5000:
            self.marker.points.pop(0)

        self.marker_pub.publish(self.marker)

def main(args=None):
    rclpy.init(args=args)
    node = TcpTrayectoriaNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == "__main__":
    main()