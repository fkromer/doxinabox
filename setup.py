# -*- coding: utf-8 -*-

from setuptools import setup, find_packages


with open('README.rst') as f:
    readme = f.read()

with open('LICENSE') as f:
    license = f.read()

setup(
    name='doxinabox',
    version='0.0.1',
    description='Embedded C/C++ project documentation template.',
    long_description=readme,
    author='Florian Kromer',
    author_email='kromerf@gmail.com',
    url='https://github.com/fkromer/doxinabox',
    license=license,
    packages=find_packages(exclude=('doc', 'examplecode', 'venv'))
)

