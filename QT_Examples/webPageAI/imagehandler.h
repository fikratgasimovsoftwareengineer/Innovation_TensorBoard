#ifndef IMAGEHANDLER_H
#define IMAGEHANDLER_H

#include <QObject>
#include <QUrl>
#include <QVector>
#include <QString>
#include <QFile>
#include <QFileInfo>
#include "IImageManager.h"
#include <QStringList>

class ImageHandler : public QObject, public IIimageManager
{
    Q_OBJECT
    // multiple images                   // get function       // set -> slot
    Q_PROPERTY(QVector<QUrl> selectfiles READ getSelectFiles WRITE setSelectFiles NOTIFY selectFilesChanged)

    //display Images
    Q_PROPERTY(QVector<QUrl>rawimages READ getRawImages NOTIFY rawImagesChanged)

    // Display images names
    Q_PROPERTY(QStringList names READ getNames NOTIFY namesChanged)

public:
    explicit ImageHandler(QObject *parent = nullptr);

    // get selected files only return

    Q_INVOKABLE  QVector<QUrl> getSelectFiles() const;

    // save image
    Q_INVOKABLE void saveImage(const QString &path);

    // inherit from imageHandler
    Q_INVOKABLE void displayImages(const QString &imagePath) override;

    // getRawImages
    Q_INVOKABLE  QVector<QUrl>getRawImages();

    // this function handles file names
    Q_INVOKABLE void getFillNames(QString &fileName) override;

    Q_INVOKABLE QStringList getNames();

public slots:
           // read files from local directory
    void setSelectFiles(const QList<QUrl> &files);


signals:

    // signal for select Files
    void selectFilesChanged();

    // get Raw Images signal update!
    void rawImagesChanged();

    void allImagesLoaded();

    // this will warn getNames
    void namesChanged();

private:

    // select multiple files
    QVector<QUrl> m_selectedFiles;
    bool successfull;

    // This container 3 images for every iteration
    QVector<QUrl> m_rawimages;

    //This container corresponding file names
    QStringList  m_names;


    int count ;
    int startIndex;
};

#endif // IMAGEHANDLER_H
