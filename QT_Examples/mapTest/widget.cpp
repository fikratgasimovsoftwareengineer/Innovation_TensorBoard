#include "widget.h"
#include "./ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

    view = new QWebEngineView(this);

    QUrl url = QUrl("qrc:/leaflet.html");

    view->load(url);

    ui->tabWidget->addTab(view, "Map");

}
Widget::~Widget()
{
    delete ui;
}

