#include "mythread.h"
#include <QtCore>
#include <QDebug>
#include <QMutex>

extern int count;
QMutex MyThread::mutex;
//extern QMutex mutex;

MyThread::MyThread()
{
}

void MyThread::run()
{
    //ran
    qDebug() << this->name  << " Running";
    for(int i = 0; i < 1000; i++)
    {

//        mutex.lock();
        this->usleep(3);
        count++;
//        mutex.unlock();


    }

}
