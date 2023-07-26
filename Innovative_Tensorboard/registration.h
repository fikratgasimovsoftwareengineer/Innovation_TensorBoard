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
#include <QString>
namespace Ui {
class Registration;
}

class Registration : public QWidget
{
    Q_OBJECT

public:
    explicit Registration(QWidget *parent = nullptr);
    ~Registration();

private slots:
    void on_pushButton_clicked();
    void onFinishedRequest(QNetworkReply*);

private:
    Ui::Registration *ui;

    QString username;
    QString mail;
    QString password;
    QString repeatPassword;

    QJsonObject json;

    QNetworkAccessManager *manager;


};

#endif // REGISTRATION_H
