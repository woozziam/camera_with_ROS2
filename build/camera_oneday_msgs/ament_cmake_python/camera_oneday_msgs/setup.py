from setuptools import find_packages
from setuptools import setup

setup(
    name='camera_oneday_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('camera_oneday_msgs', 'camera_oneday_msgs.*')),
)
