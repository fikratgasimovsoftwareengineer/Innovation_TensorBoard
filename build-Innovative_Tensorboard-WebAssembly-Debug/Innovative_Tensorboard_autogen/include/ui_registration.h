/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Registration
{
public:
    QWidget *widget;
    QFrame *line;
    QWidget *verticalLayoutWidget_4;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_9;
    QLineEdit *linePwd;
    QLabel *label_4;
    QWidget *verticalLayoutWidget_3;
    QVBoxLayout *verticalLayout_3;
    QLabel *label_8;
    QLineEdit *lineMail;
    QPushButton *pushButton;
    QWidget *verticalLayoutWidget_5;
    QVBoxLayout *verticalLayout_5;
    QLabel *label_7;
    QLineEdit *lineUsername;
    QWidget *verticalLayoutWidget_7;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_10;
    QLineEdit *linePwdVrf;
    QWidget *widget_2;
    QWidget *verticalLayoutWidget_6;
    QVBoxLayout *verticalLayout_6;
    QPushButton *pushButton_2;
    QLabel *successSignUp;

    void setupUi(QWidget *Registration)
    {
        if (Registration->objectName().isEmpty())
            Registration->setObjectName(QString::fromUtf8("Registration"));
        Registration->resize(1980, 1020);
        Registration->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 214, 243);"));
        widget = new QWidget(Registration);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(640, 120, 721, 641));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        line = new QFrame(widget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(200, 50, 321, 20));
        line->setStyleSheet(QString::fromUtf8("color: rgb(52, 101, 164);\n"
"border-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(0, 174, 83, 255), stop:1 rgba(255, 255, 255, 255));"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        verticalLayoutWidget_4 = new QWidget(widget);
        verticalLayoutWidget_4->setObjectName(QString::fromUtf8("verticalLayoutWidget_4"));
        verticalLayoutWidget_4->setGeometry(QRect(170, 270, 411, 61));
        verticalLayout_4 = new QVBoxLayout(verticalLayoutWidget_4);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        verticalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_9 = new QLabel(verticalLayoutWidget_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Ubuntu Condensed\";"));

        verticalLayout_4->addWidget(label_9);

        linePwd = new QLineEdit(verticalLayoutWidget_4);
        linePwd->setObjectName(QString::fromUtf8("linePwd"));

        verticalLayout_4->addWidget(linePwd);

        label_4 = new QLabel(widget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 20, 241, 21));
        label_4->setStyleSheet(QString::fromUtf8("font: 15pt \"Ubuntu\";\n"
"color: rgb(114, 159, 207);\n"
"background-color: qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(40, 232, 47, 0), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayoutWidget_3 = new QWidget(widget);
        verticalLayoutWidget_3->setObjectName(QString::fromUtf8("verticalLayoutWidget_3"));
        verticalLayoutWidget_3->setGeometry(QRect(170, 190, 411, 61));
        verticalLayout_3 = new QVBoxLayout(verticalLayoutWidget_3);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_8 = new QLabel(verticalLayoutWidget_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Ubuntu Condensed\";"));

        verticalLayout_3->addWidget(label_8);

        lineMail = new QLineEdit(verticalLayoutWidget_3);
        lineMail->setObjectName(QString::fromUtf8("lineMail"));

        verticalLayout_3->addWidget(lineMail);

        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(560, 460, 131, 51));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 214, 243);\n"
"font: 700 13pt \"Ubuntu Mono\";"));
        verticalLayoutWidget_5 = new QWidget(widget);
        verticalLayoutWidget_5->setObjectName(QString::fromUtf8("verticalLayoutWidget_5"));
        verticalLayoutWidget_5->setGeometry(QRect(170, 100, 411, 61));
        verticalLayout_5 = new QVBoxLayout(verticalLayoutWidget_5);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(verticalLayoutWidget_5);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Ubuntu Condensed\";"));

        verticalLayout_5->addWidget(label_7);

        lineUsername = new QLineEdit(verticalLayoutWidget_5);
        lineUsername->setObjectName(QString::fromUtf8("lineUsername"));

        verticalLayout_5->addWidget(lineUsername);

        verticalLayoutWidget_7 = new QWidget(widget);
        verticalLayoutWidget_7->setObjectName(QString::fromUtf8("verticalLayoutWidget_7"));
        verticalLayoutWidget_7->setGeometry(QRect(170, 350, 411, 61));
        verticalLayout_7 = new QVBoxLayout(verticalLayoutWidget_7);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        verticalLayout_7->setContentsMargins(0, 0, 0, 0);
        label_10 = new QLabel(verticalLayoutWidget_7);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setStyleSheet(QString::fromUtf8("font: italic 12pt \"Ubuntu Condensed\";"));

        verticalLayout_7->addWidget(label_10);

        linePwdVrf = new QLineEdit(verticalLayoutWidget_7);
        linePwdVrf->setObjectName(QString::fromUtf8("linePwdVrf"));

        verticalLayout_7->addWidget(linePwdVrf);

        widget_2 = new QWidget(widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 520, 721, 121));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(167, 214, 243);\n"
"background-color: qconicalgradient(cx:0.396, cy:0.574, angle:0, stop:0 rgba(6, 122, 219, 255), stop:1 rgba(255, 255, 255, 255));"));
        verticalLayoutWidget_6 = new QWidget(widget_2);
        verticalLayoutWidget_6->setObjectName(QString::fromUtf8("verticalLayoutWidget_6"));
        verticalLayoutWidget_6->setGeometry(QRect(140, 30, 421, 61));
        verticalLayout_6 = new QVBoxLayout(verticalLayoutWidget_6);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        verticalLayout_6->setContentsMargins(0, 0, 0, 0);
        pushButton_2 = new QPushButton(verticalLayoutWidget_6);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 122, 191);\n"
"font: 700 italic 13pt \"Ubuntu Condensed\";"));

        verticalLayout_6->addWidget(pushButton_2, 0, Qt::AlignHCenter);

        successSignUp = new QLabel(widget);
        successSignUp->setObjectName(QString::fromUtf8("successSignUp"));
        successSignUp->setGeometry(QRect(190, 460, 331, 31));

        retranslateUi(Registration);

        QMetaObject::connectSlotsByName(Registration);
    } // setupUi

    void retranslateUi(QWidget *Registration)
    {
        Registration->setWindowTitle(QCoreApplication::translate("Registration", "Form", nullptr));
        label_9->setText(QCoreApplication::translate("Registration", "Your password: ", nullptr));
        label_4->setText(QCoreApplication::translate("Registration", "           REGISTRATION ", nullptr));
        label_8->setText(QCoreApplication::translate("Registration", "Your mail: ", nullptr));
        pushButton->setText(QCoreApplication::translate("Registration", "SIGNUP", nullptr));
        label_7->setText(QCoreApplication::translate("Registration", "Your username: ", nullptr));
        label_10->setText(QCoreApplication::translate("Registration", "Confirm your password: ", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Registration", "Already Enrolled?", nullptr));
        successSignUp->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Registration: public Ui_Registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
