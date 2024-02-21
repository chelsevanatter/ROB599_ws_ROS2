from setuptools import find_packages
from setuptools import setup

setup(
    name='rob599_hw2_msgs',
    version='0.0.0',
    packages=find_packages(
        include=('rob599_hw2_msgs', 'rob599_hw2_msgs.*')),
)
