#include <QCoreApplication>
#include <mThread.h>


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    mThread objth;
    objth.start();

    return a.exec();
}
