# doxinabox

A sphinx+breathe+doxygen documentation environment in a virtual python environment for automated documentation of a C/C++ project.

create virtualenv (default Ubuntu Python v2.7 is ok):

    sudo apt install virtualenv
    virtualenv venv/doxinabox/

activate and restore the virtual environment:

    source venv/doxinabox/bin/activate
    pip install -r ./venv/doxinabox/requirements.txt

build and open the documentation:

    sphinx-build -b html ./doc/source ./doc/build
    xdg-open ./doc/build/index.html
