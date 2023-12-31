#include "predictedresults.h"

predictedResults::predictedResults(QPushButton *button, QList<QLabel*>getLabels, QList<QLabel*>getImgNames, QWidget *parent)
    : QWidget{parent},
    button(button),
    imgLabels(getLabels),
    imgNamesLabels(getImgNames),
    managerPredict(new QNetworkAccessManager(this)),
    readEveryPredicted(0),
    loopIndex(0),
    loopIndex2(0)
{


    //Image Urls
    imagePredicted = {
        "https://github.com/fikratgasimovsoftwareengineer/Predicted_Images/blob/main/test_BLI_0001.jpeg?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Predicted_Images/blob/main/test_BLI_0003.jpeg?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Predicted_Images/blob/main/test_BLI_0005.jpeg?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Predicted_Images/blob/main/test_BLI_0006.jpeg?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Predicted_Images/blob/main/test_BLI_0009.jpeg?raw=true",
        "https://github.com/fikratgasimovsoftwareengineer/Predicted_Images/blob/main/test_BRK_0009.jpeg?raw=true"

    };


    connect(this->button, &QPushButton::clicked, this, &predictedResults::fetchPredictedImages);

    // warn finishing statements: image files
    connect(managerPredict, &QNetworkAccessManager::finished, this, &predictedResults::onDownloadFinishedRest);

    // warn finishing image names
    connect(managerPredict, &QNetworkAccessManager::finished, this, &predictedResults::onDownloadImagelabels);

}

QList<QLabel*>predictedResults::getLabels() {

    qDebug() << "Image Labels :"<< imgLabels;


    return imgLabels;
}


QList<QLabel*>predictedResults::getImgNames(){

    qDebug() << "Image Names :"<<imgNamesLabels;

    return imgNamesLabels;
}

void predictedResults::fetchPredictedImages()
{
    imgNames.clear();

    if (readEveryPredicted < imagePredicted.size()){

        QNetworkRequest request;
        name4 = "https://cors-anywhere.herokuapp.com/" + imagePredicted[readEveryPredicted];
        //request.setUrl(QUrl());
        request.setUrl(QUrl(name4));
        managerPredict->get(request);
        // get image Name
        qDebug() << imagePredicted[readEveryPredicted];
        QFileInfo imgInfo(name4); // get path of image
        imgNames.append(imgInfo.fileName());
        qDebug() << imgInfo.fileName();




        if (readEveryPredicted + 1 < imagePredicted.size()){
            QNetworkRequest request2;
            name5 = "https://cors-anywhere.herokuapp.com/" + imagePredicted[readEveryPredicted+1];
            request2.setUrl(QUrl(name5));
            //request2.setUrl(QUrl());
            managerPredict->get(request2);
            qDebug() << imagePredicted[readEveryPredicted+1];
            // get image Name
            QFileInfo imgInfo2(name5); // get path of image
            imgNames.append(imgInfo2.fileName());
            qDebug() << imgInfo2.fileName();


            if (readEveryPredicted+2 < imagePredicted.size()){
                name6 = "https://cors-anywhere.herokuapp.com/" + imagePredicted[readEveryPredicted+2];
                QNetworkRequest request3;
                request3.setUrl(QUrl(name6));
                // request3.setUrl(QUrl("https://cors-anywhere.herokuapp.com/" + imageUrls[readEveryThree+2]));
                managerPredict->get(request3);
                // get image Name
                qDebug() << imagePredicted[readEveryPredicted+2];
                // get image Name
                QFileInfo imgInfo3(name6); // get path of image
                imgNames.append(imgInfo3.fileName());
                qDebug() << "Third Image Name : "<<imgInfo3.fileName();
                qDebug() << "Size: " << imgNames.size();

            } // end third if

        } // end second if

    } // Finish maiN if

    readEveryPredicted+=3;

    //check statements!
    if (readEveryPredicted >= imagePredicted.size()){

    //set readEverythree to 0
        readEveryPredicted=0;
        loopIndex = 0;
    }


}

void predictedResults::onDownloadFinishedRest(QNetworkReply *replyUI)
{

    if (replyUI->error() == QNetworkReply::NoError){

        QPixmap pixmap;

        pixmap.loadFromData(replyUI->readAll());

        if (loopIndex < getLabels().size()){
            //qDebug() << "*****SIZE****: " << getLabels().size();

            QLabel *label = getLabels().at(loopIndex);

            qDebug() << "*****LABEL****: " << label;
            label->setPixmap(pixmap);

            label->setAlignment(Qt::AlignCenter);

            loopIndex++;

    }else{
            qDebug() << "No More labels to display";
        }
    } // finish main if

    else{
        qDebug() << "Error:"<<replyUI->errorString();
    }


}

void predictedResults::onDownloadImagelabels(QNetworkReply *replyImagesRequest)
{
    if(replyImagesRequest->error()==QNetworkReply::NoError){

        qDebug() << "GET IMG NAMES SIZE: "<< getImgNames().size() << "IMG NAME SIZE"<< imgNames.size();

        if(loopIndex2 < getImgNames().size() && loopIndex2 < imgNames.size()){

                // label name
                QLabel *label_name =  getImgNames().at(loopIndex2);

                qDebug() << "Label Name: "<< label_name;

                // label name
                label_name->setText(imgNames.at(loopIndex2));

                label_name->setAlignment(Qt::AlignCenter);

                loopIndex2++;

        }
        /*else if(loopIndex2 >= getImgNames().size()){
                 loopIndex2=0;
        }*/
        else{
           qDebug() << "No Image Name to display or Update images";
           loopIndex2=0;
        }


    }else{
    qDebug() << "Error is : " << replyImagesRequest->errorString();
    }


}
