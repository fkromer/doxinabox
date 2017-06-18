#!/bin/sh

sudo apt install virtualenv
virtualenv --no-site-packages venv/doxinabox/
. venv/doxinabox/bin/activate  # source does only work with bash
pip install -r ./venv/doxinabox/requirements.txt
# when shell closes the venv is deactivated implicitly
