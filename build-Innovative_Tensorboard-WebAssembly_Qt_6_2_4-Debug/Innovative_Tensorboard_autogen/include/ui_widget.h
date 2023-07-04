/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QWidget *widget;
    QLabel *label;
    QLabel *label_6;
    QLabel *label_7;
    QComboBox *comboBox;
    QFrame *line_2;
    QPushButton *pushButton;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QLabel *label_8;
    QWidget *widget_2;
    QWidget *widget_3;
    QLabel *label_2;
    QLabel *label_4;
    QCheckBox *checkBox;
    QCheckBox *checkBox_3;
    QWidget *widget_4;
    QWidget *widget_5;
    QWidget *gridLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *img1;
    QLabel *img2;
    QLabel *img3;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayoutLabels;
    QLabel *imgNameThird;
    QLabel *imgNameSecond;
    QLabel *imgNameFirst;
    QWidget *gridLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *img4;
    QLabel *img5;
    QLabel *img6;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayoutLabels_2;
    QLabel *imgName4;
    QLabel *imgName5;
    QLabel *imgName6;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1920, 1080);
        Widget->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        verticalLayoutWidget = new QWidget(Widget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(0, 0, 1921, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        widget = new QWidget(verticalLayoutWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 121, 0);"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 20, 201, 41));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 121, 0);"));
        label_6 = new QLabel(widget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(1730, 20, 81, 41));
        label_6->setStyleSheet(QString::fromUtf8("image: url(:/Icons/settings.png);"));
        label_7 = new QLabel(widget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(1690, 20, 61, 41));
        label_7->setStyleSheet(QString::fromUtf8("image: url(:/Icons/repeat.png);"));
        comboBox = new QComboBox(widget);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(1560, 20, 121, 31));
        comboBox->setStyleSheet(QString::fromUtf8("border-color: rgb(245, 121, 0);\n"
"color: rgb(255, 255, 255);\n"
"font: 700 16pt \"Ubuntu Mono\";\n"
"border-color: rgb(245, 121, 0);"));
        line_2 = new QFrame(widget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(1560, 60, 118, 3));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(230, 20, 201, 51));
        pushButton->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(245, 121, 0);\n"
"font: 15pt \"Ubuntu\";"));
        pushButton_3 = new QPushButton(widget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(450, 20, 141, 51));
        pushButton_3->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(245, 121, 0);\n"
"font: 15pt \"Ubuntu\";"));
        pushButton_4 = new QPushButton(widget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(610, 20, 221, 51));
        pushButton_4->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(245, 121, 0);\n"
"font: 15pt \"Ubuntu\";"));
        pushButton_5 = new QPushButton(widget);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(860, 20, 261, 51));
        pushButton_5->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"background-color: rgb(245, 121, 0);\n"
"font: 15pt \"Ubuntu\";"));
        label_8 = new QLabel(widget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(1790, 20, 81, 41));
        label_8->setStyleSheet(QString::fromUtf8("image: url(:/Icons/question.png);"));

        verticalLayout->addWidget(widget);

        widget_2 = new QWidget(Widget);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(-120, 70, 2041, 1231));
        widget_2->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName(QString::fromUtf8("widget_3"));
        widget_3->setGeometry(QRect(10, 0, 421, 1001));
        widget_3->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(130, 90, 141, 41));
        label_2->setStyleSheet(QString::fromUtf8("color: rgb(255, 255, 255);\n"
"color: rgb(252, 175, 62);"));
        label_4 = new QLabel(widget_3);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(120, 170, 141, 41));
        label_4->setStyleSheet(QString::fromUtf8("color: rgb(252, 175, 62);"));
        checkBox = new QCheckBox(widget_3);
        checkBox->setObjectName(QString::fromUtf8("checkBox"));
        checkBox->setGeometry(QRect(310, 101, 16, 16));
        checkBox->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 121, 0);"));
        checkBox_3 = new QCheckBox(widget_3);
        checkBox_3->setObjectName(QString::fromUtf8("checkBox_3"));
        checkBox_3->setGeometry(QRect(310, 180, 16, 16));
        checkBox_3->setStyleSheet(QString::fromUtf8("background-color: rgb(245, 121, 0);"));
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName(QString::fromUtf8("widget_4"));
        widget_4->setGeometry(QRect(250, -10, 1, 61));
        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName(QString::fromUtf8("widget_5"));
        widget_5->setGeometry(QRect(420, -20, 1621, 81));
        widget_5->setStyleSheet(QString::fromUtf8("background-color: rgb(238, 238, 236);"));
        gridLayoutWidget = new QWidget(widget_2);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(450, 130, 1501, 301));
        horizontalLayout = new QHBoxLayout(gridLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        img1 = new QLabel(gridLayoutWidget);
        img1->setObjectName(QString::fromUtf8("img1"));
        img1->setEnabled(true);
        img1->setMaximumSize(QSize(500, 16777215));
        img1->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(img1);

        img2 = new QLabel(gridLayoutWidget);
        img2->setObjectName(QString::fromUtf8("img2"));
        img2->setEnabled(true);
        img2->setMaximumSize(QSize(500, 16777215));
        img2->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(img2);

        img3 = new QLabel(gridLayoutWidget);
        img3->setObjectName(QString::fromUtf8("img3"));
        img3->setEnabled(true);
        img3->setMaximumSize(QSize(500, 16777215));
        img3->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout->addWidget(img3);

        horizontalLayoutWidget = new QWidget(widget_2);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(450, 90, 1501, 31));
        horizontalLayoutLabels = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayoutLabels->setObjectName(QString::fromUtf8("horizontalLayoutLabels"));
        horizontalLayoutLabels->setContentsMargins(0, 0, 0, 0);
        imgNameThird = new QLabel(horizontalLayoutWidget);
        imgNameThird->setObjectName(QString::fromUtf8("imgNameThird"));

        horizontalLayoutLabels->addWidget(imgNameThird);

        imgNameSecond = new QLabel(horizontalLayoutWidget);
        imgNameSecond->setObjectName(QString::fromUtf8("imgNameSecond"));

        horizontalLayoutLabels->addWidget(imgNameSecond);

        imgNameFirst = new QLabel(horizontalLayoutWidget);
        imgNameFirst->setObjectName(QString::fromUtf8("imgNameFirst"));

        horizontalLayoutLabels->addWidget(imgNameFirst);

        gridLayoutWidget_2 = new QWidget(widget_2);
        gridLayoutWidget_2->setObjectName(QString::fromUtf8("gridLayoutWidget_2"));
        gridLayoutWidget_2->setGeometry(QRect(450, 490, 1501, 301));
        horizontalLayout_2 = new QHBoxLayout(gridLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        img4 = new QLabel(gridLayoutWidget_2);
        img4->setObjectName(QString::fromUtf8("img4"));
        img4->setEnabled(true);
        img4->setMaximumSize(QSize(500, 16777215));
        img4->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(img4);

        img5 = new QLabel(gridLayoutWidget_2);
        img5->setObjectName(QString::fromUtf8("img5"));
        img5->setEnabled(true);
        img5->setMaximumSize(QSize(500, 16777215));
        img5->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(img5);

        img6 = new QLabel(gridLayoutWidget_2);
        img6->setObjectName(QString::fromUtf8("img6"));
        img6->setEnabled(true);
        img6->setMaximumSize(QSize(500, 16777215));
        img6->setStyleSheet(QString::fromUtf8(""));

        horizontalLayout_2->addWidget(img6);

        horizontalLayoutWidget_2 = new QWidget(widget_2);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(450, 450, 1501, 31));
        horizontalLayoutLabels_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayoutLabels_2->setObjectName(QString::fromUtf8("horizontalLayoutLabels_2"));
        horizontalLayoutLabels_2->setContentsMargins(0, 0, 0, 0);
        imgName4 = new QLabel(horizontalLayoutWidget_2);
        imgName4->setObjectName(QString::fromUtf8("imgName4"));

        horizontalLayoutLabels_2->addWidget(imgName4);

        imgName5 = new QLabel(horizontalLayoutWidget_2);
        imgName5->setObjectName(QString::fromUtf8("imgName5"));

        horizontalLayoutLabels_2->addWidget(imgName5);

        imgName6 = new QLabel(horizontalLayoutWidget_2);
        imgName6->setObjectName(QString::fromUtf8("imgName6"));

        horizontalLayoutLabels_2->addWidget(imgName6);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        label->setText(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:20pt; font-weight:700; color:#eeeeec;\">Tensorboard</span></p></body></html>", nullptr));
        label_6->setText(QString());
        label_7->setText(QString());
        comboBox->setItemText(0, QCoreApplication::translate("Widget", "INACTIVE", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("Widget", "ACTIVE", nullptr));

#if QT_CONFIG(tooltip)
        comboBox->setToolTip(QCoreApplication::translate("Widget", "<html><head/><body><p><span style=\" font-size:16pt;\">InActive</span></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(whatsthis)
        comboBox->setWhatsThis(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        pushButton->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        label_8->setText(QString());
#if QT_CONFIG(whatsthis)
        widget_3->setWhatsThis(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-style:italic;\">Train Session</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
#if QT_CONFIG(whatsthis)
        label_2->setWhatsThis(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-style:italic;\">Train Session</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_2->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-style:italic;\">Train Session</span></p></body></html>", nullptr));
#if QT_CONFIG(whatsthis)
        label_4->setWhatsThis(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:14pt; font-style:italic;\">Train Session</span></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        label_4->setText(QCoreApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-style:italic;\">Val Session</span></p></body></html>", nullptr));
        checkBox->setText(QString());
        checkBox_3->setText(QString());
        img1->setText(QString());
        img2->setText(QString());
        img3->setText(QString());
        imgNameThird->setText(QString());
        imgNameSecond->setText(QString());
        imgNameFirst->setText(QString());
        img4->setText(QString());
        img5->setText(QString());
        img6->setText(QString());
        imgName4->setText(QString());
        imgName5->setText(QString());
        imgName6->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
