#include "fastsync.h"
#include <QDebug>


FastSync::FastSync(QObject *parent) : QObject(parent)
{
    fastSync = QCoreApplication::instance();
    options = new Options();
}

bool FastSync::parseCommandLine(QCoreApplication *app){
    options->parse(app);
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
