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
  universalrobots/ursim_e-series
```

En google buscas: http://localhost:6080/vnc.html

IP del robot: 172.17.0.2

