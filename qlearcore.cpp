#include "qlearcore.h"


QlearCore::QlearCore(QString whatOS) {
    whatOS = whatOS;

    if (whatOS.contains("linux")) {
        directories[0] = QDir::home();
        directories[1] = QDir(directories[0].absolutePath()+"/.cache");
        directories[2] = QDir(directories[0].absolutePath()+"/.mozilla/firefox/");
    }
}

void QlearCore::removeUserCache() {
    directories[1].removeRecursively();
    directories[0].mkdir(".cache");
}
