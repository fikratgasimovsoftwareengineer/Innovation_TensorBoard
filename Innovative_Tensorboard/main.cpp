#include "widget.h"
#include <QCoreApplication>
#include <QApplication>
#include "registration.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //Widget w;
    //qDebug() << "Application ID: "<<QCoreApplication::applicationPid();
    Registration w;
    w.show();
    return a.exec();
}
