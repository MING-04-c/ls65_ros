from setuptools import find_packages
from setuptools import setup

setup(
    name='eli_common_interface',
    version='0.0.1',
    packages=find_packages(
        include=('eli_common_interface', 'eli_common_interface.*')),
)
