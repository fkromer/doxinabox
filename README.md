# doxinabox

A sphinx+breathe+doxygen documentation environment in a virtual python environment for automated documentation of a C/C++ project.

activate and setup teh virtual environment

    source venv/doxinabox/bin/activate
    pip install -r ./venv/doxinabox/requirements.txt

build and open the documentation

    sphinx-build -b html ./doc/source ./doc/build
    xdg-open ./doc/build/index.html
