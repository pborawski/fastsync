#include "fastsync.h"
#include <QDebug>

#include "downloadmanager.h"

FastSync::FastSync(QObject *parent) : QObject(parent)
{
    fastSync = QCoreApplication::instance();
    options = new Options();
}

bool FastSync::parseCommandLine(QCoreApplication *app){
   //options->parse(app);
    DownloadManager* dm = new DownloadManager;
    QUrl url("http://localhost/mirrors/nginx");
   QTimer::singleShot(0, dm, SLOT(execute()));
    return true;
}

void FastSync::run(){
    qInfo() << "MainClass.Run is executing";
    //quit();
}

void FastSync::quit()
{
    emit finished();
}

void FastSync::aboutToQuit()
{

}
