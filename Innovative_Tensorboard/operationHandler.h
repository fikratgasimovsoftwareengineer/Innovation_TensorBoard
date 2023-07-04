#ifndef OPERATIONHANDLER_H
#define OPERATIONHANDLER_H


#include <QLabel>
#include <QList>
#include <QNetworkReply>

/*Operation Handler Interface*/
class OpearationHandler{


public:
    virtual ~OpearationHandler(){}

    virtual QList<QLabel*> getLabels() = 0;

    // get Labels for Labels
    virtual QList<QLabel*> getImgNames() = 0;


public slots:
    // reply finished
    virtual void onDownloadFinishedRest(QNetworkReply*) = 0;

    virtual void onDownloadImagelabels(QNetworkReply*) = 0;

};







#endif // OPERATIONHANDLER_H


