#ifndef QLEARCORE_H
#define QLEARCORE_H

#include <QDir>

class QlearCore
{
    private:
        const QString whatOS;
        QDir directories[3];

    public:
        QlearCore(QString whatOS);

        void removeUserCache();
};

#endif // QLEARCORE_H
