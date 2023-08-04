/********************************************************************************
** Form generated from reading UI file 'signin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGNIN_H
#define UI_SIGNIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_SignIn
{
public:
    QWidget *widget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLineEdit *pwdLine;
    QLabel *label_3;
    QPushButton *pushButton;
    QLabel *successSignIn;
    QFrame *line;
    QWidget *widget_2;
    QLabel *label_4;

    void setupUi(QWidget *SignIn)
    {
        if (SignIn->objectName().isEmpty())
            SignIn->setObjectName(QString::fromUtf8("SignIn"));
        SignIn->resize(1989, 1020);
        SignIn->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 214, 243);"));
        widget = new QWidget(SignIn);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(590, 120, 671, 641));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        verticalLayoutWidget = new QWidget(widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(180, 110, 341, 71));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayoutWidget_2 = new QWidget(widget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(180, 200, 341, 71));
        verticalLayout_2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(180, 120, 151, 20));
        lineEdit = new QLineEdit(widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(180, 150, 331, 25));
        pwdLine = new QLineEdit(widget);
        pwdLine->setObjectName(QString::fromUtf8("pwdLine"));
        pwdLine->setGeometry(QRect(180, 240, 331, 25));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(180, 210, 141, 20));
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(470, 440, 111, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 122, 191);\n"
""));
        successSignIn = new QLabel(widget);
        successSignIn->setObjectName(QString::fromUtf8("successSignIn"));
        successSignIn->setGeometry(QRect(150, 480, 261, 21));
        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(190, 80, 321, 20));
        line->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);\n"
"border-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(0, 174, 83, 255), stop:1 rgba(255, 255, 255, 255));"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 520, 721, 121));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 214, 243);\n"
"background-color: qconicalgradient(cx:0.396, cy:0.574, angle:0, stop:0 rgba(6, 122, 219, 255), stop:1 rgba(255, 255, 255, 255));"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 10, 241, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 15pt \"Ubuntu\";\n"
"color: rgb(114, 159, 207);\n"
"background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(40, 232, 47, 0), stop:1 rgba(255, 255, 255, 255));"));

        retranslateUi(SignIn);

        QMetaObject::connectSlotsByName(SignIn);
    } // setupUi

    void retranslateUi(QWidget *SignIn)
    {
        SignIn->setWindowTitle(QCoreApplication::translate("SignIn", "Form", nullptr));
        label_2->setText(QCoreApplication::translate("SignIn", "Enter User Mail", nullptr));
        label_3->setText(QCoreApplication::translate("SignIn", "Enter Password", nullptr));
        pushButton->setText(QCoreApplication::translate("SignIn", "SIGN IN", nullptr));
        successSignIn->setText(QString());
        label_4->setText(QCoreApplication::translate("SignIn", "                SIGN IN", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SignIn: public Ui_SignIn {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGNIN_H
