from setuptools import find_packages
from setuptools import setup

setup(
    name='eli_dashboard_interface',
    version='0.0.1',
    packages=find_packages(
        include=('eli_dashboard_interface', 'eli_dashboard_interface.*')),
)
