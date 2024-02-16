import os
from glob import glob

from setuptools import find_packages, setup

package_name = 'rob599_hw2'

setup(
    name=package_name,
    version='0.0.0',
    packages=[package_name],
    data_files=[
        ('share/ament_index/resource_index/packages',
            ['resource/' + package_name]),
        ('share/' + package_name, ['package.xml']),
        (os.path.join('share', package_name, 'launch'), glob(os.path.join('launch', '*launch.[pxy][yma]*')))
    ],
    install_requires=['setuptools'],
    zip_safe=True,
    maintainer='Chelse VanAtter',
    maintainer_email='chelsevanatter@gmail.com',
    description='Package for receiving, modifying, and sending twist messages',
    license='BSD 3-Clause',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'speed_publisher = rob599_hw2.speed_publisher:main',
            'speed_limiter = rob599_hw2.speed_limiter:main',
            'twist_tester = rob599_hw2.twist_tester:main',
        ],
    },
)
