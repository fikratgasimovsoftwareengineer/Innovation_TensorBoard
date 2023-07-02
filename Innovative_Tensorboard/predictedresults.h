#ifndef PREDICTEDRESULTS_H
#define PREDICTEDRESULTS_H

#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QPixmap>
#include <QDebug>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>


#include <QFileInfo>
#include "operationHandler.h"

class predictedResults : public QWidget, public OpearationHandler
{
    Q_OBJECT
public:
    explicit predictedResults(QWidget *parent = nullptr);

    QList<QLabel*> getLabels() override;

    // get Labels for Labels
    QList<QLabel*> getImgNames() override;



public slots:

    void fetchPredictedImages();

protected slots:

   // reply finished
   void onDownloadFinishedRest(QNetworkReply*) override;

   void onDownloadImagelabels(QNetworkReply*) override;


private:



    QList<QLabel*> imgNamesLabels;

    QList<QLabel*> imgLabels;

    QStringList imagePredicted;


    QNetworkAccessManager *managerPredict;

    QList<QString> imgNames;

    QString name4;
    QString name5;
    QString name6;

    int readEveryPredicted;
    int loopIndex;
    int loopIndex2;


};

#endif // PREDICTEDRESULTS_H
