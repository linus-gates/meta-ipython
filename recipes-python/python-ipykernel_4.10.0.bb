inherit pypi setuptools

RDEPENDS_${PN} += " \
	${PYTHON_PN}-enum34 \
	"

DEPENDS += " \
	${PYTHON_PN}-enum34-native \
	${PYTHON_PN}-pathlib2-native \
	${PYTHON_PN}-scandir-native \
	${PYTHON_PN}-prompt-toolkit-native (=1.0.15) \
	"


require python-ipykernel.inc
