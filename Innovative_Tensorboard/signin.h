#ifndef SIGNIN_H
#define SIGNIN_H

#include <QWidget>
#include <QJsonObject>
#include <QJsonDocument>
#include <QByteArray>
#include <QNetworkAccessManager>
#include <QNetworkRequest>
#include <QNetworkReply>
#include <QVariant>
#include <QTimer>
#include "widget.h"

namespace Ui {
class SignIn;
}

class SignIn : public QWidget
{
    Q_OBJECT

public:
    explicit SignIn(QWidget *parent = nullptr);
    ~SignIn();

private slots:
    void on_pushButton_clicked();
    void onFinishSignRequet(QNetworkReply*signinReply);

    void signSuccessFullOperation();

signals:
    void finishedSignIn();

private:
    Ui::SignIn *ui;

    QString mail;
    QString password;

    QJsonObject jsonDoc;
    QNetworkAccessManager *signInManager;

    Widget *mainPage;
};

#endif // SIGNIN_H
