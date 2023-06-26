#include "widget.h"
#include "./ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::Widget),
    accessManager(new QNetworkAccessManager(this)),
    loopIndex(0)

{
    ui->setupUi(this);

    ui->pushButton->setText("Predicted Images");
    //ui->pushButton->setStyleSheet("font-size: 15px;");

    ui->pushButton->setFlat(true);
    ui->pushButton->setStyleSheet("QPushButton { background-color: transparent; border: 0px; color: white; font-size: 20px;}"); // fully transparent


    imageUrls = {

        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/DJI_0025.jpg?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/DJI_0026.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/DJI_0027.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/DJI_0028.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/DJI_0029.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/DJI_0030.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/DJI_0031.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/DJI_0032.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/DJI_0033.JPG?raw=true"


    };

    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::fetchImages);

    connect(accessManager, &QNetworkAccessManager::finished, this, &Widget::onDownloadFinishedRest);

}

Widget::~Widget()
{
    delete ui;
}

QList<QLabel *> Widget::getLabels()
{
    imageLabels.append(ui->img1);
    imageLabels.append(ui->img2);
    imageLabels.append(ui->img3);

    return imageLabels;
}


void Widget::fetchImages()
{

    for(const QString& urls: imageUrls){
        QNetworkRequest request;
        request.setUrl(QUrl("https://cors-anywhere.herokuapp.com/" + urls));
        accessManager->get(request);
    }
}

void Widget::onDownloadFinishedRest(QNetworkReply *reply)
{
    if (reply->error() == QNetworkReply::NoError){
        QPixmap pixmap;
        pixmap.loadFromData(reply->readAll());

        if (loopIndex < getLabels().size()){
            QLabel *label = imageLabels.at(loopIndex);

            label->setPixmap(pixmap);
            label->setAlignment(Qt::AlignCenter);

            loopIndex++;

        }else{
            qDebug() << "No More labels to display";
        }
    }

    else{
        qDebug() << "Error:"<<reply->errorString();
    }


}




