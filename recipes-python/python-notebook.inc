SUMMARY = "Jupyter notebook"
LICENSE = "BSD"
LIC_FILES_CHKSUM = "file://PKG-INFO;beginline=8;endline=8;md5=e910b35b0ef4e1f665b9a75d6afb7709"

SRC_URI[sha256sum] = "d908673a4010787625c8952e91a22adf737db031f2aa0793ad92f6558918a74a"

RDEPENDS_${PN} += " \
	${PYTHON_PN}-ipykernel \
	${PYTHON_PN}-jupyter-core \
	${PYTHON_PN}-traitlets \
	${PYTHON_PN}-tornado \
	${PYTHON_PN}-ipython-genutils \
	${PYTHON_PN}-jupyter-client \
	${PYTHON_PN}-nbformat \
	${PYTHON_PN}-nbconvert \
	${PYTHON_PN}-jinja2 \
	${PYTHON_PN}-terminado \
	${PYTHON_PN}-unixadmin \
	${PYTHON_PN}-prometheus-client \
	${PYTHON_PN}-send2trash \
	${PYTHON_PN}-pyzmq \
	${PYTHON_PN}-sqlite3 \
	${PYTHON_PN}-runpy \
	"

do_install_append() {
	# Make sure we use /usr/bin/env python
	for PYTHSCRIPT in `grep -rIl '^#!.*python' ${D}`; do
		sed -i -e '1s|^#!.*|#!/usr/bin/env ${PYTHON_PN}|' $PYTHSCRIPT
	done
}
