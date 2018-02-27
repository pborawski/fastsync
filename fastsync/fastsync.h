#ifndef APP_H
#define APP_H

#include <QObject>
#include <QCoreApplication>

#include "options.h"

class FastSync : public QObject
{
    Q_OBJECT

private:
    QCoreApplication *fastSync;
    Options* options;

public:
    explicit FastSync(QObject *parent = nullptr);
    void quit();
    bool parseCommandLine(QCoreApplication* app);

signals:
     void finished();

public slots:
      void run();
      void aboutToQuit();
};

#endif // APP_H
