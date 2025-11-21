# kia_gd_ws
 Este es un gemelo digital de mi proyecto. Ocupas Ubuntu 22 con ROS2 Humble.

Librerias que ocupas
```bash
pip install requests    # Para el MTConnect
sudo python3 -m pip install ur-rtde     # Para el URSIm
sudo apt install ros-humble-ur-robot-driver

```

```bash
ros2 launch kia_gd launch.py # Para correrlo
```

## Correr el ros
```bash
ros2 launch kia_gd master_launch2.py
```


## Correr UR en ubuntu
El proyecto ocupa de un brazo robotico UR para funcionar. Por lo tanto es necesario instalar el simulador de UR para tener datos.

Primero se instala docker:
```bash
sudo apt update
sudo apt install docker.io
sudo systemctl enable --now docker
sudo usermod -aG docker $USER
```

Una vez instalado docker, se descarga la imagen del URSIm
```bash
docker pull universalrobots/ursim_e-series
```

Finalmente, para correr URSim
```bash
docker run -it --rm \
  --name ursim \
  -e ROBOT_MODEL=UR5e \
  -p 6080:6080 \
  -p 5900:5900 \
  -p 29999:29999 \
  -p 30001-30004:30001-30004 \
  -v ~/Documents/kia_gd_ws/ursim_programs:/ur-sim/programs/ \
  universalrobots/ursim_e-series
```

En google buscas: http://localhost:6080/vnc.html

IP del robot: 172.17.0.2

https://github.com/SuperDiodo/ur_ros_rtde

https://github.com/SuperDiodo/ur_ros_rtde/tree/main/ur_ros_rtde_tutorials

Para mover el robot es necesario correr:
```bash
ros2 launch ur_ros_rtde command_server.launch.py
```

```bash
ros2 launch ur_ros_rtde robot_state_receiver.launch.py
```

```bash
ros2 run ur_ros_rtde_tutorials linear_movements
```

``` bash
ros2 run ur_ros_rtde_tutorials trajectory_execution
```




## Puente con Unity
El gemelo digital se puede unir con Unity para mostrarlo de mejor manera. Para hacer eso, primero se clono el repositorio
```bash
git clone --branch main-ros2 https://github.com/Unity-Technologies/ROS-TCP-Endpoint.git
```
Luego se debe de sourcear 2 veces.

Para correr un paquete:
```bash
ros2 run ros_tcp_endpoint default_server_endpoint --ros-args -p ROS_IP:=<your IP address> -p ROS_TCP_PORT:=10000
```
