#include "mThread.h"

mThread::mThread()
{

}

void mThread::run()
{

    try{
        CURL *handle = curl_easy_init();
        curl_easy_setopt(handle,CURLOPT_CAINFO,"/etc/ssl/certs/TestSystem.pem");
        char url[] = "https://System"; //"https://www.google.com";
        curl_easy_setopt(handle, CURLOPT_URL, url);
        curl_easy_setopt(handle, CURLOPT_POST, 1L);
        curl_easy_setopt(handle, CURLOPT_SSL_VERIFYPEER, 1L);
        curl_easy_setopt(handle, CURLOPT_SSLCERT, "/opt/ssl_certs/arise1600.crt");
        curl_easy_setopt(handle, CURLOPT_SSLKEY, "/opt/ssl_certs/arise1600.key");
        curl_easy_setopt(handle, CURLOPT_VERBOSE, 1L);

        CURLcode code = curl_easy_perform(handle);
        qDebug()<<"Exit "<<code;

    }catch(QException &exp)
    {
        qDebug()<<"Execption ";
        throw exp;
    }
}
