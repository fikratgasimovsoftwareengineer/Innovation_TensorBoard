#include "widget.h"
#include <QCoreApplication>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Widget w;
    qDebug() << "Application ID: "<<QCoreApplication::applicationPid();

    w.show();
    return a.exec();
}
