inherit pypi setuptools
require python-jupyter-core.inc

do_install_append() {
	# this files will be installed by python-jupyter
	rm -f ${D}/usr/lib/python2.7/site-packages/jupyter.pyc
	rm -f ${D}/usr/lib/python2.7/site-packages/jupyter.py
}
