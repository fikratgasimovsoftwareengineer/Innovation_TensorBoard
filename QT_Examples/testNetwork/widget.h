#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QHostAddress>
#include <QtNetwork/QNetworkInterface>
#include <QAbstractSocket>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

   bool testNetworkLocal();

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
