#include "widget.h"
#include "./ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    m_test = new Test;

    connect(ui->pushButton,  &QPushButton::clicked, this, &Widget::displayButton);

}

Widget::~Widget()
{
    delete ui;
}

void Widget::displayButton()
{

    m_test->show();
    qDebug() << "display Button";
}


