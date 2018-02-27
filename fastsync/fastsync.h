#ifndef APP_H
#define APP_H

#include <QObject>
#include <QCoreApplication>

class FastSync : public QObject
{
    Q_OBJECT

private:
    QCoreApplication *fastSync;

public:
    explicit FastSync(QObject *parent = nullptr);
    void quit();

signals:
     void finished();

public slots:
      void run();
      void aboutToQuit();
};

#endif // APP_H
