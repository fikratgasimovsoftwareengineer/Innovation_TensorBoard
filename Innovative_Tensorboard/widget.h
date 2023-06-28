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

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

    // Get Labels for Images
    QList<QLabel*> getLabels();

    // get Labels for Labels
    QList<QLabel*> getImgNames();

public slots:
    void fetchImages();



private slots:
    // reply finished
    void onDownloadFinishedRest(QNetworkReply*);

   void onDownloadImagelabels(QNetworkReply*);

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
};


#endif // WIDGET_H
