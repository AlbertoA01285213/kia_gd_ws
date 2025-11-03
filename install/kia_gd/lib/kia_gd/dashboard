#!/usr/bin/env python3
import rclpy
from rclpy.node import Node
from std_msgs.msg import Bool
from sensor_msgs.msg import JointState
import tkinter as tk
from tkinter import ttk

class DashboardNode(Node):
    def __init__(self):
        super().__init__('dashboard_ur5_node')
        self.create_subscription(JointState, '/UR5/joint_states', self.ur5_callback, 10)
        
        self.modo_publisher = self.create_publisher(Bool, '/modo', 10)
        
        self.J1 = 0.0
        self.J2 = 0.0
        self.J3 = 0.0
        self.J4 = 0.0
        self.J5 = 0.0
        self.J6 = 0.0
        
        self.root = tk.Tk()
        self.root.title("Dashboard UR5")
        self.root.geometry("400x300")

        frame = ttk.Frame(self.root, padding="10 10 10 10")
        frame.pack(expand=True, fill="both")

        self.label_angulos = ttk.Label(frame, text="Esperando datos del UR5...", font=("Arial", 12), justify="left")
        self.label_angulos.pack(pady=10)

        self.modo_gemelo_activo = tk.BooleanVar(value=False)

        self.switch_modo = ttk.Checkbutton(
            frame,
            text="Activar modo Automatico",  # Texto descriptivo
            variable=self.modo_gemelo_activo,       # Vinculado a la variable
            command=self.publicar_modo_switch,    # Función a llamar al hacer clic
            style="Switch.TCheckbutton"
        )
        self.switch_modo.pack(pady=5)
        
        # 3. Etiqueta adjacente para mostrar el modo actual
        self.label_modo_estado = ttk.Label(frame, text="Modo Actual: Alto", font=("Arial", 10, "bold"))
        self.label_modo_estado.pack(pady=2)

        # (Opcional: Configurar el estilo del Switch)
        style = ttk.Style(self.root)
        style.configure("Switch.TCheckbutton", font=("Arial", 10), padding=5)

        # --- FIN DE MODIFICACIÓN ---
        
        self.root.after(100, self.actualizar_gui_y_ros)
        
        # Publicar el estado inicial (Falso) al arrancar
        self.publicar_modo_switch()

    def ur5_callback(self, msg):
        try:
            self.J1 = msg.position[0]
            self.J2 = msg.position[1]
            self.J3 = msg.position[2]
            self.J4 = msg.position[3]
            self.J5 = msg.position[4]
            self.J6 = msg.position[5]
        except IndexError:
            self.get_logger().warn("Se recibió un JointState con menos de 6 joints.", throttle_duration_sec=5.0)

    def publicar_modo_switch(self):
        estado_actual = self.modo_gemelo_activo.get()

        msg = Bool()
        msg.data = estado_actual
        self.modo_publisher.publish(msg)

        if estado_actual:
            texto_modo = "Modo Actual: Automatico"
            self.get_logger().info("Cambiando a Modo Auto")
        else:
            texto_modo = "Modo Actual: Alto"
            self.get_logger().info("Cambiando a Modo Alto")
        
        self.label_modo_estado.config(text=texto_modo)

    def actualizar_gui_y_ros(self):
        rclpy.spin_once(self, timeout_sec=0.01)

        texto_resultado = (
            f"Ángulos del Robot UR5:\n\n"
            f"J1: {self.J1:.2f} rad\n"
            f"J2: {self.J2:.2f} rad\n"
            f"J3: {self.J3:.2f} rad\n"
            f"J4: {self.J4:.2f} rad\n"
            f"J5: {self.J5:.2f} rad\n"
            f"J6: {self.J6:.2f} rad\n"
        )
        self.label_angulos.config(text=texto_resultado)
        self.root.after(100, self.actualizar_gui_y_ros)

    def iniciar_app(self):
        self.root.mainloop()

def main(args=None):
    rclpy.init(args=args)
    dashboard_app = DashboardNode()
    dashboard_app.iniciar_app()
    dashboard_app.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()