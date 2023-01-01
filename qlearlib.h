#ifndef LIBQLEAR_H
#define LIBQLEAR_H

#include <QDir>

class QlearLib
{
    private:
        QDir home, cache;

    public:
        QlearLib(QDir _home, QDir _cache) {
            home = _home;
            cache = _cache;
        }

        void removeUserCache();

        QString getOS();
};

#endif // LIBQLEAR_H
