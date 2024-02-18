DESCRIPTION = "Simple helloworld application"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://calci.c"

S = "${WORKDIR}"

SRCREV = "${AUTOREV}"
DEPENDS = "mystatic"
do_compile() {
    ${CC} calci.c ${LDFLAGS} -o calci -lphy
}

do_install() {
    install -d ${D}${bindir}
    install -m 0755 ${S}/calci ${D}${bindir}
    
}
