#include "widget.h"
#include "./ui_widget.h"


Widget::Widget(QWidget *parent)
    : QWidget(parent),
    ui(new Ui::Widget),
    accessManager(new QNetworkAccessManager(this)),
    loopIndex(0),
    readEveryThree(0),
    loopIndex2(0)

{
    ui->setupUi(this);

    // Predicted Images
    ui->pushButton->setText("Raw Images");
    ui->pushButton->setFlat(true);
    ui->pushButton->setStyleSheet("QPushButton { background-color: transparent; border: 0px; color: white; font-size: 22px;}"); // fully transparent

    // Metrics
    ui->pushButton_3->setText("Metrics");
    ui->pushButton_3->setFlat(true);
    ui->pushButton_3->setStyleSheet("QPushButton { background-color: transparent; border: 0px; color: white; font-size: 22px;}"); // fully transparent

    // Model Visualization
    ui->pushButton_4->setText("Model Visualization");
    ui->pushButton_4->setFlat(true);
    ui->pushButton_4->setStyleSheet("QPushButton { background-color: transparent; border: 0px; color: white; font-size: 22px;}"); // fully transparent

    // Postprocessed Images
    ui->pushButton_5->setText("Predicted Images");
    ui->pushButton_5->setFlat(true);
    ui->pushButton_5->setStyleSheet("QPushButton { background-color: transparent; border: 0px; color: white; font-size: 22px;}"); // fully transparent


    // Create an instance of predictedResults and fetch images
    instancePredicted = new predictedResults(this);


    //Image Urls
    imageUrls = {
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/test_BLI_0001.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/test_BLI_0003.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/test_BLI_0005.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/test_BLI_0006.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/test_BLI_0009.JPG?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Host_Images/blob/main/test_BRK_0009.JPG?raw=true"

    };


    // connect to Raw Images
    connect(ui->pushButton, &QPushButton::clicked, this, &Widget::fetchImages);

    // warn finishing statements: image files
    connect(accessManager, &QNetworkAccessManager::finished, this, &Widget::onDownloadFinishedRest);

    // warn finishing image names
    connect(accessManager, &QNetworkAccessManager::finished, this, &Widget::onDownloadImagelabels);

}
/***********Widget***********/
Widget::~Widget()
{
    delete ui;
}

/****************Attach to UI labels within horizontal layout****************/
QList<QLabel *>Widget::getLabels()
{
    imageLabels.append(ui->img1);
    imageLabels.append(ui->img2);
    imageLabels.append(ui->img3);

    return imageLabels;
}

//*************** Return Labels for Image Names********************/
QList<QLabel *> Widget::getImgNames()
{
    imageNamesLabels.append(ui->imgNameFirst);
    imageNamesLabels.append(ui->imgNameSecond);
    imageNamesLabels.append(ui->imgNameThird);

    return imageNamesLabels;
}

QLabel *Widget::getLeb1()
{
    return ui->img4;
}




/**********Retreive images 3 by 3*********************/
void Widget::fetchImages()
{

    //imgNamesList.clear();

    if (readEveryThree < imageUrls.size()){

        QNetworkRequest request;
        name0 = "https://cors-anywhere.herokuapp.com/" + imageUrls[readEveryThree];

        //request.setUrl(QUrl());
        request.setUrl(QUrl(name0));

        accessManager->get(request);

        // get image Name

        qDebug() << imageUrls[readEveryThree];

        QFileInfo imgInfo(name0); // get path of image

        imgNamesList.append(imgInfo.fileName());

        qDebug() << imgInfo.fileName();

        if (readEveryThree + 1 < imageUrls.size()){

            QNetworkRequest request2;

            name1 = "https://cors-anywhere.herokuapp.com/" + imageUrls[readEveryThree+1];

            request2.setUrl(QUrl(name1));

            //request2.setUrl(QUrl());
            accessManager->get(request2);

            qDebug() << imageUrls[readEveryThree+1];

            // get image Name
            QFileInfo imgInfo2(name1); // get path of image

            imgNamesList.append(imgInfo2.fileName());
            qDebug() << imgInfo2.fileName();

            if (readEveryThree+2 < imageUrls.size()){

                name2 = "https://cors-anywhere.herokuapp.com/" + imageUrls[readEveryThree+2];

                QNetworkRequest request3;

                request3.setUrl(QUrl(name2));

               // request3.setUrl(QUrl("https://cors-anywhere.herokuapp.com/" + imageUrls[readEveryThree+2]));

                accessManager->get(request3);
                // get image Name

                qDebug() << imageUrls[readEveryThree+2];

                // get image Name
                QFileInfo imgInfo3(name2); // get path of image

                imgNamesList.append(imgInfo3.fileName());

                qDebug() << "Third Image Name : "<<imgInfo3.fileName();
                qDebug() << "Size: " << imgNamesList.size();

            } // end third if

        } // end second if

    } // Finish maiN if

    readEveryThree+=3;

    //check statements!
    if (readEveryThree >= imageUrls.size())

        //set readEverythree to 0
        readEveryThree=0;

}


//*********/ Download Finished Warning/*********
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

/*****Download Image*******/
void Widget::onDownloadImagelabels(QNetworkReply *reply)
{
    if(reply->error()==QNetworkReply::NoError){

        qDebug() << "Check Before: "<< imgNamesList.size();

        if(loopIndex2 < getImgNames().size() && loopIndex2 < imgNamesList.size()){

            // label name
            QLabel *label_name =  imageNamesLabels.at(loopIndex2);

            qDebug() << "Label Name: "<< label_name;

            // label name
            label_name->setText(imgNamesList.at(loopIndex2));

            label_name->setAlignment(Qt::AlignCenter);

            loopIndex2++;


        }else{
            qDebug() << "No Image Name to display or Update images";
        }


    }else{
        qDebug() << "Error is : " << reply->errorString();
    }


}




