#include <QtCore/QCoreApplication>
#include "mythread.h"

int count = 0;

int main(int argc, char *argv[])
{

    QCoreApplication a(argc, argv);

    MyThread mThread1;
    mThread1.name = "mThread1";

    MyThread mThread2;
    mThread2.name = "mThread2";

    MyThread mThread3;
    mThread3.name = "mThread3";





    MyThread mThread4;
    mThread4.name = "mThread4";

    MyThread mThread5;
    mThread5.name = "mThread5";

    MyThread mThread6;
    mThread6.name = "mThread6";



    MyThread mThread7;
    mThread7.name = "mThread7";

    MyThread mThread8;
    mThread8.name = "mThread8";

//    MyThread mThread6;
//    mThread6.name = "mThread6";


    QMutex mutex;


    mThread1.start();
    mThread2.start();
    mThread3.start();
    mThread4.start();
    mThread5.start();
    mThread6.start();
    mThread7.start();
    mThread8.start();
    mThread1.wait();
    mThread2.wait();
    mThread3.wait();
    mThread4.wait();
    mThread5.wait();
    mThread6.wait();
    mThread7.wait();
    mThread8.wait();


    //    mThread1.Stop = true;
    qDebug() << count;

    return a.exec();
}
