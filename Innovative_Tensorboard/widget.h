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

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();


    QList<QLabel*> getLabels();

public slots:
    void fetchImages();

private slots:
    void onDownloadFinishedRest(QNetworkReply*);


private:
    Ui::Widget *ui;

    QNetworkAccessManager *accessManager;

    QStringList imageUrls;

    QList<QLabel*>imageLabels;
    int loopIndex;


};
#endif // WIDGET_H
