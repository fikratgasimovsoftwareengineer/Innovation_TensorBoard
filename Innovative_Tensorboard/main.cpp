#include "widget.h"
#include <QCoreApplication>
#include <QApplication>
#include "registration.h"
#include "signin.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    /*Widget w;
    w.show();*/
    //qDebug() << "Application ID: "<<QCoreApplication::applicationPid();
    Registration w;
    w.show();
    /*SignIn sig;
    sig.show();*/
    return a.exec();
}
