from setuptools import find_packages
from setuptools import setup

setup(
    name='ur_ros_rtde_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('ur_ros_rtde_msgs', 'ur_ros_rtde_msgs.*')),
)
