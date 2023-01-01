#include "qlearlib.h"


void QlearLib::removeUserCache() {
    cache.removeRecursively();
    home.mkdir(".cache");
}

QString QlearLib::getOS() {
    return QSysInfo::kernelType();
}
