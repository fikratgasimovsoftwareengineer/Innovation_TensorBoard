#include "signin.h"
#include "ui_signin.h"

SignIn::SignIn(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SignIn)
{
    ui->setupUi(this);

    ui->pwdLine->setEchoMode(QLineEdit::Password);
}

SignIn::~SignIn()
{
    delete ui;
}
