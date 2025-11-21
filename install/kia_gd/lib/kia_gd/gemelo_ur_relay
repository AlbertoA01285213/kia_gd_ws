#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from sensor_msgs.msg import JointState
from std_msgs.msg import Bool
from geometry_msgs.msg import Pose, PoseStamped

class GemeloRelayNode(Node):
    def __init__(self):
        super().__init__('gemelo_ur_relay')

        # Modo: False = Espejo (relay), True = Manual (no relay)
        self.modo_manual_activo = False 
        self.modo_sub = self.create_subscription(Bool, '/modo', self.modo_callback, 10)

        # Publicador hacia robot_state_publisher (RViz espera /UR5/joint_states)
        # Puedes usar '/UR5/joint_states' absoluto o 'joint_states' si publicas en namespace UR5.
        self.publisher_ = self.create_publisher(JointState, '/UR5/joint_states', 10)
        # self.tcp_pub = self.create_publisher(PoseStamped, '/UR5/tcp_pose', 10)

        # Suscriptor al driver (que publica /joint_states)
        self.driver_sub = self.create_subscription(
            JointState,
            '/joint_states',
            self.driver_callback,
            rclpy.qos.qos_profile_sensor_data
        )

        # self.tcp_driver_sub = self.create_subscription(
        #     Pose,
        #     '/tcp_pose',
        #     self.tcp_driver_callback,
        #     rclpy.qos.qos_profile_sensor_data
        # )

        # Mapeo: nombre_del_driver -> nombre_en_tu_urdf
        self.map_names = {
            'shoulder_pan_joint': 'Base_J1',
            'shoulder_lift_joint': 'J1_J2',
            'elbow_joint': 'J2_J3',
            'wrist_1_joint': 'J3_J4',
            'wrist_2_joint': 'J4_J5',
            'wrist_3_joint': 'J5_J6'
        }

        self.get_logger().info('GemeloRelayNode iniciado - reenviando y mapeando joint_states')

    def modo_callback(self, msg: Bool):
        self.modo_manual_activo = msg.data

    def driver_callback(self, msg: JointState):
        # Solo reenviamos si NO estamos en modo manual
        if self.modo_manual_activo:
            return

        # Construir nuevo mensaje remapeado
        new_msg = JointState()
        # Pon timestamp actual (mejor para rviz/tf)
        new_msg.header.stamp = self.get_clock().now().to_msg()

        new_names = []
        new_positions = []
        new_velocities = []
        new_efforts = []

        # Recorremos las articulaciones del mensaje del driver
        for i, orig_name in enumerate(msg.name):
            mapped = self.map_names.get(orig_name)
            if mapped:
                new_names.append(mapped)

                # Añadir posición/vel/eff si existen en msg en el mismo índice
                if i < len(msg.position):
                    new_positions.append(msg.position[i])
                else:
                    new_positions.append(0.0)
                if i < len(msg.velocity):
                    new_velocities.append(msg.velocity[i])
                else:
                    new_velocities.append(0.0)
                if i < len(msg.effort):
                    new_efforts.append(msg.effort[i])
                else:
                    new_efforts.append(0.0)
            else:
                # Si hay joints que no queremos mapear, los ignoramos.
                # Puedes loggear para depurar:
                self.get_logger().debug(f'Joint no mapeado: {orig_name} (ignorando)')

        if not new_names:
            self.get_logger().warn('No hay joints mapeados en este mensaje; no publico nada')
            return

        new_msg.name = new_names
        new_msg.position = new_positions
        new_msg.velocity = new_velocities
        new_msg.effort = new_efforts

        self.publisher_.publish(new_msg)
        self.get_logger().debug(f'Publicado /UR5/joint_states con: {new_names}')

    # def tcp_driver_callback(self, msg: Pose):
    #     if self.modo_manual_activo:
    #         return

    #     # Convertir Pose -> PoseStamped
    #     tcp_msg = PoseStamped()
    #     tcp_msg.header.stamp = self.get_clock().now().to_msg()
    #     tcp_msg.header.frame_id = "UR5/base_link"   # Ajusta según tu URDF
    #     tcp_msg.pose = msg

    #     self.tcp_pub.publish(tcp_msg)


def main(args=None):
    rclpy.init(args=args)
    node = GemeloRelayNode()
    try:
        rclpy.spin(node)
    except KeyboardInterrupt:
        pass
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
