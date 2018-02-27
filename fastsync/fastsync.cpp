#include "fastsync.h"
#include <QDebug>

FastSync::FastSync(QObject *parent) : QObject(parent)
{
     fastSync = QCoreApplication::instance();
}

void FastSync::run()
{

    qDebug() << "MainClass.Run is executing";
    quit();
}

void FastSync::quit()
{
    emit finished();
}

void FastSync::aboutToQuit()
{

}
