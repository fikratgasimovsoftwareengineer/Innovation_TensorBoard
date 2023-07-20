#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QWidget>
#include <QJsonObject>
#include <QFile> // ifstream
#include <QJsonDocument> // read & write json doc
#include <QNetworkAccessManager>
#include <QNetworkReply>
#include <QNetworkRequest>
#include <QByteArray>
#include <QTextStream>
#include <QVariantList>
#include <QVariant>
namespace Ui {
class Registration;
}

class Registration : public QWidget
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();

private:
    Ui::Registration *ui;
};

#endif // REGISTRATION_H
