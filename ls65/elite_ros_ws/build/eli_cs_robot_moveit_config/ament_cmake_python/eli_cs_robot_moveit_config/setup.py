from setuptools import find_packages
from setuptools import setup

setup(
    name='eli_cs_robot_moveit_config',
    version='0.0.0',
    packages=find_packages(
        include=('eli_cs_robot_moveit_config', 'eli_cs_robot_moveit_config.*')),
)
