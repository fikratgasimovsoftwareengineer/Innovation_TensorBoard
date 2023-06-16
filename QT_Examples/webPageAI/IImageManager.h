#ifndef IIMAGEMANAGER_H
#define IIMAGEMANAGER_H


#include <QString>
#include <QDir> // get directory
#include <QStringList> // get image names of list
#include <QUrl>
#include <QVector>

/*Abtract Class for manageing functios*/
class IIimageManager{


public:
    // this function has to loop throught directory of raw images
    virtual Q_INVOKABLE void displayImages(const QString &imagePath)=0;

    // this function handles file names
    virtual Q_INVOKABLE void getFillNames(QString &fileName) = 0;

protected:

    bool readSuccess;


};
#endif // IIMAGEMANAGER_H
