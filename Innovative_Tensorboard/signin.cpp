#include "signin.h"
#include "ui_signin.h"

SignIn::SignIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);

    ui->pwdLine->setEchoMode(QLineEdit::Password);

    connect(this, SIGNAL(finishedSignIn()), this, SLOT(signSuccessFullOperation()));
}

SignIn::~SignIn()
{
    delete ui;
}

void SignIn::on_pushButton_clicked()
{
    mail = ui->mailEdit->text();
    password = ui->pwdLine->text();

    jsonDoc.insert("mail", QJsonValue::fromVariant(mail));
    jsonDoc.insert("password", QJsonValue::fromVariant(password));

    QJsonDocument doc(jsonDoc);
    QByteArray docArray = doc.toJson();

    QUrl signUrl = QUrl("http://127.0.0.1:5000/signin");

    QNetworkRequest serviceurl(signUrl);
    serviceurl.setHeader(QNetworkRequest::ContentTypeHeader, "application/json");
    signInManager = new QNetworkAccessManager(this);

    connect(signInManager, SIGNAL(finished(QNetworkReply*)), this, SLOT(onFinishSignRequet(QNetworkReply*signinReply)));

    signInManager->post(serviceurl, docArray);

    emit finishedSignIn(); // emit signal


}

void SignIn::onFinishSignRequet(QNetworkReply *signinReply)
{
    // check reply feedback
    if (signinReply->error() == QNetworkReply::NoError){

        int statusCode = signinReply->attribute(QNetworkRequest::HttpStatusCodeAttribute).toInt();
        qDebug() << "Http status code: " << statusCode;

        // if status code is 200 , means password and mail succcesfully match!
        if (statusCode==200){
            QString stringReply = (QString)signinReply->readAll();
            // call client message to page!
            signSuccessFullOperation();
            qDebug() << "Response: " << stringReply;
        }else{
            // Handle other HTTP response statuses as needed
            qDebug() << "Unexpected HTTP status.";
        }

    }else{
        qDebug() << "Network error:" << signinReply->errorString();
    }

    //delete reply
    signinReply->deleteLater();
}

//
void SignIn::signSuccessFullOperation()
{
    /*Set Text successful to user*/
    ui->successSignIn->setTextFormat(Qt::RichText);
    ui->successSignIn->setStyleSheet("color : green;");
    ui->successSignIn->setText("Successfully Sign IN"); // move it to confirmation

    QTimer::singleShot(2000, this, [this](){

    // create instance of mainwidget with try
    try {
        mainPage = new Widget;
        this->hide();
        mainPage->show();
    } catch (...) {

        qDebug() << "ERROR from returning to main widget!";
        } //catch in case of exception

    }); // Qtimer finish !
}
