.. _operation:

*********
Operation
*********

.. _first-time-setup:

First time setup
================

- Fork the project per github-URL. Visit the `git documentation website`_ for further information about how to use git. You may also use "Download ZIP" from the `hamingja github project website`_.
- Integrate the virtual environment of doxinabox into your virtualenv environment. Visit the `virtualenv documentation website`_ and `virtualenvwrapper documentation website`_ for further information about the setup and management of virtual environments. Copy the doxinabox virtual environment [/venv/doxinabox] into your directory containing the virtual environments. The packages may be installed from the requirement file [/venv/doxinabox/requirements.txt].
- Generate the .xml files with doxygen. The API documentation (section "Code documentation/Production code documentation") of the template is generated from the example source code [/examplecode]. To generate the .xml files from this example code change into the directory which contains the doxygen configuration file (here: v1.8.9) [/doc/ext/doxygen]. Run doxygen in the shell with `doxygen sphinx`. The .xml files are placed in the source dierctory of sphinx [/doc/source/xml].
- (Optional) Replace the Sphinx theme "Read the docs" with a theme of your choice [/doc/source/_themes].
- Modify the Sphinx configuration file conf.py [/doc/source/]: project name, etc. TODO.
- Generate the .html project documentation with Sphinx. Change into the root directory of the documentation [/doc] and run `make html` (with active virtual enviroment "doxinabox"). The .hmtl documentation is placed in [/doc/build/]. All files in this directory may be deleted before generating the next time.
- Insert the .html documentation [/doc/build/html] into your project directory. Use index.html [/doc/build/html/index.html] as entry point.

.. _git documentation website: http://git-scm.com/doc
.. _hamingja github project website: https://github.com/fkromer/hamingja
.. _virtualenv documentation website: http://virtualenv.readthedocs.org/en/latest/index.html#
.. _virtualenvwrapper documentation website: http://virtualenvwrapper.readthedocs.org/en/latest/index.html

.. _contribution:

Contribution
============

- Install Python.
- Install an IDE (e.g. Ninja IDE for Linux from the `Ninja IDE website`_).
- Get the code like already described.
- Happy coding...
- Create a free account on the GitHub website.
- Install a GUI for Git (e.g. gitg from the `gitg website`_).
- Happy contributing over GitHub...

.. _Ninja IDE website: http://ninja-ide.org/
.. _gitg website: https://wiki.gnome.org/action/show/Apps/Gitg?action=show&redirect=Gitg
