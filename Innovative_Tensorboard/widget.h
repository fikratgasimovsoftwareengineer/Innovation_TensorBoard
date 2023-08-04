#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QPushButton>
#include <QPixmap>
#include <QDebug>
#include <QtNetwork/QNetworkAccessManager>
#include <QtNetwork/QNetworkReply>
#include <QtNetwork/QNetworkRequest>
#include <QLabel>
#include <QList>
#include <QStringList>
#include <QFileInfo>

#include "operationHandler.h"
#include "predictedresults.h"


QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE



class Widget : public QWidget, public OpearationHandler
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    // Get Labels for Images
    QList<QLabel*> getLabels() override;

    // get Labels for Labels
    QList<QLabel*> getImgNames() override;

    // get predicted Image Handler

    QList<QLabel*>getPredictedImgLabels();

    QList<QLabel*>getPredictedLabels();

    //void connectToRegistration();


public slots:
    void fetchImages();

private slots:
    // reply finished
    void onDownloadFinishedRest(QNetworkReply*) override;

   void onDownloadImagelabels(QNetworkReply*) override;


private:
    Ui::Widget *ui;

    // network access manager

    QNetworkAccessManager *accessManager;

    QStringList imageUrls;

    // image labels
    QList<QLabel*>imageLabels;

    // image names labels
    QList<QLabel*>imageNamesLabels;

    // loop image labels
    int loopIndex;

    // read every 3 images
    int readEveryThree;

    int loopIndex2;

    //List images
    QList<QString> imgNamesList;

    //String Names
    QString name0;
    QString name1;
    QString name2;

    predictedResults *instancePredicted;


    // image labels
    QList<QLabel*>predictedImgLabels;

    // image names labels
    QList<QLabel*>predictedLabels;

   // Registration* reg;

};


#endif // WIDGET_H
