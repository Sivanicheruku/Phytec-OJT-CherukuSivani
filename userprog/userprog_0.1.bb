DESCRIPTION = "Simple helloworld application"
LICENSE = "MIT"
LIC_FILES_CHKSUM = "file://${COMMON_LICENSE_DIR}/MIT;md5=0835ade698e0bcf8506ecda2f7b4f302"

SRC_URI = "file://userprog.c \
           file://yourfile.txt "
        

S = "${WORKDIR}"

#DEPENDS = "mystatic"

SRCREV = "${AUTOREV}"

do_compile() {
    ${CC} userprog.c ${LDFLAGS} -o userprog 
}

do_install() {
  install -d ${D}${bindir}
  install -m 0755 ${S}/userprog ${D}${bindir}
  install -d ${D}${docdir}
  install -m 0644 ${S}/yourfile.txt ${D}${docdir}
}

