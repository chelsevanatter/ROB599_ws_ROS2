import os
from glob import glob

from setuptools import find_packages, setup

package_name = 'rob599_hw3'

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
    install_requires=['setuptools', 'rosidl_default_generators'],  # Added rosidl_default_generators
    zip_safe=True,
    maintainer='Chelse VanAtter',
    maintainer_email='chelsevanatter@gmail.com',
    description='Package for navigating turtlebot in simulation',
    license='BSD 3-Clause',
    tests_require=['pytest'],
    entry_points={
        'console_scripts': [
            'places = rob599_hw3.places:main',
            'places_client = rob599_hw3.places_client:main'  
        ],
    },
)
