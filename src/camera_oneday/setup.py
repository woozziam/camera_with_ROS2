from setuptools import find_packages, setup
import os
import glob


package_name = 'camera_oneday'

setup(
    name=package_name,
    version='0.0.0',
    packages=find_packages(exclude=['test']),
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        ('share/' + package_name + '/launch', glob.glob(os.path.join('launch', '*.launch.py'))),
        ('share/' + package_name + '/param', glob.glob(os.path.join('param', '*.yaml'))),
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='wook',
    maintainer_email='leejungwook0211@gmail.com',
    description='TODO: Package description',
    license='TODO: License declaration',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'img_publisher = camera_oneday.img_publisher:main',
            'red_publisher = camera_oneday.red_publisher:main',
            'blue_publisher = camera_oneday.blue_publisher:main',
            'green_publisher = camera_oneday.green_publisher:main',
            'binary_publisher = camera_oneday.binary_publisher:main',
            'blur_publisher = camera_oneday.blur_publisher:main',
            'canny_publisher = camera_oneday.canny_publisher:main',
            'combined_publisher = camera_oneday.combined_publisher:main',
            'control_publisher = camera_oneday.control_publisher:main',
            'cartoon_publisher = camera_oneday.cartoon_publisher:main',
            'edge_publisher = camera_oneday.edge_publisher:main',
            'optical_publisher = camera_oneday.optical_publisher:main',
            'camera_server = camera_oneday.camera_server:main',
        ],
    },
)
