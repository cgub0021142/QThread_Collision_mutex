#ifndef MYTHREAD_H
#define MYTHREAD_H
#include <QtCore>
#include <QMutex>

class MyThread : public QThread
{
public:
    MyThread();
    void run();
    QString name;


private:
    bool Stop;
    static QMutex mutex;
};

#endif // MYTHREAD_H
