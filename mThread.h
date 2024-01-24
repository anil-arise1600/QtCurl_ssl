#ifndef MTHREAD_H
#define MTHREAD_H

#include <QObject>
#include <curl/curl.h>
#include <QDebug>
#include <QThread>
#include <QException>
#include <QDir>

class mThread:public QThread
{
public:
    mThread();
protected:
    void run();
};

#endif // MTHREAD_H
