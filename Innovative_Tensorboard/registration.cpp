#include "registration.h"
#include "ui_registration.h"

Registration::Registration(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Registration)
{
    ui->setupUi(this);


   /* ui->lineUsername->text();
    ui->lineMail->text();*/
    ui->linePwd->setEchoMode(QLineEdit::Password);
    ui->linePwdVrf->setEchoMode(QLineEdit::Password);

    connect(this, SIGNAL(signUpSuccessfull()), this, SLOT(refreshPage()));
}

Registration::~Registration()
{
    delete ui;
    delete manager;
}

void Registration::on_pushButton_clicked()
{
    // read sign up paramets
    username = ui->lineUsername->text();
    mail = ui->lineMail->text();
    password = ui->linePwd->text();
    repeatPassword = ui->linePwdVrf->text();

    // insert key and its corresponding value
    json.insert("username", QJsonValue::fromVariant(username));
    json.insert("mail", QJsonValue::fromVariant(mail));
    json.insert("password", QJsonValue::fromVariant(password));
    json.insert("repeatPassword", QJsonValue::fromVariant(repeatPassword));

    // convert to bytre array
    QJsonDocument doc(json);
    //a UTF-8 encoded JSON document in the provided format.
    QByteArray jsonData = doc.toJson();

    QUrl serviceUrl = QUrl("http://127.0.0.1:5000/test");
    QNetworkRequest request (serviceUrl);
    request.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");

    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply*)), this, SLOT(onFinishedRequest(QNetworkReply*reply)));

    qDebug() << "Sending Data:" << jsonData;

    manager->post(request, jsonData);

    ui->successSignUp->setText("Successfully Registration on Tensorboard");

    //emit signal!
    emit signUpSuccessfull();


}

void Registration::onFinishedRequest(QNetworkReply *reply)
{
    // check reply feedback
    if (reply->error() == QNetworkReply::NoError){

        int statusCode = reply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        qDebug() << "Http status code: " << statusCode;

        if (statusCode==200){
            QString stringReply = (QString)reply->readAll();

            qDebug() << "Response: " << stringReply;



        }else{
            // Handle other HTTP response statuses as needed
            qDebug() << "Unexpected HTTP status.";
        }

    }else{
        qDebug() << "Network error:" << reply->errorString();
    }

    //delete reply
    reply->deleteLater();

}

void Registration::refreshPage()
{
    sign = new SignIn(this);
    ui->widget->hide();
    sign->show();
}

