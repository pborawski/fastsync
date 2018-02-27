#include <QCoreApplication>
#include <QTimer>
#include "fastsync.h"

int main(int argc, char *argv[])
{
    QCoreApplication app(argc, argv);

    FastSync fastsync;

    // connect up the signals
    QObject::connect(&fastsync, SIGNAL(finished()), &app, SLOT(quit()));
    QObject::connect(&app, SIGNAL(aboutToQuit()), &fastsync, SLOT(aboutToQuit()));

    QTimer::singleShot(1, &fastsync, SLOT(run()));
    return app.exec();
}
