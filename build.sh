#!/bin/sh

. venv/doxinabox/bin/activate  # source does only work with bash
cd doc/ext/doxygen/
doxygen sphinx
cd ../../..
sphinx-build -b html ./doc/source ./doc/build
# when shell closes the venv is deactivated implicitly
