#include "imagehandler.h"
#include <QDebug>



ImageHandler::ImageHandler(QObject *parent)
    : QObject{parent},
    successfull(false),
    count(0),
    startIndex(0)
{

}

// return files
QVector<QUrl> ImageHandler::getSelectFiles() const
{

    return m_selectedFiles;

}

void ImageHandler::saveImage(const QString &path)
{
    // read images

    // loop through urls

    for(const QUrl &url_images : m_selectedFiles){

        // convert normal path with forward slash
        QString local_path = url_images.toLocalFile();

        qDebug() << "Local Path: " << local_path;

        // in order to check if file exist or not!
        QFile file(local_path);

        if (file.exists()){

            // to debug, file info returns file'name and position in the file system

            QFileInfo fileinfo(file);


            QString new_path = path + "/" + fileinfo.fileName();

            // copy to directory
            successfull = file.copy(new_path);

            qDebug() << "Url Image : " << m_selectedFiles;

            if (successfull){

                qDebug()<<"File is saved";

            }else{
                qDebug()<<"File copy failed";
            }

        }else{
            qDebug() << "File does not exist";
        }
    }

}

/*
    Target:ReadImagesfromDirectory
    Images: Raw Images
    Display Them
*/

void ImageHandler::displayImages(const QString &imagePath)
{
    // get directory path
    QDir dirpath(imagePath);


    //get directory exists!

    if(dirpath.exists()){

        // check if empty or not
        if (dirpath.isEmpty())
            qDebug()<<"WARNING: Directory is Emptry";

        else{
            // Get number of image list
            QStringList imageListFilter;

            imageListFilter << "*.jpg" << "*.png" << "*.jpeg"; // get these image extensions

             // access files and order them by name
            QStringList files = dirpath.entryList(imageListFilter, QDir::Files);

             m_rawimages.clear(); // clear path of images previous

             // Loop through images and get images, append them to vector
             // Make sure you are not going out of the list
            if(startIndex < files.size()) {
                QUrl getImages = QUrl::fromLocalFile(dirpath.absoluteFilePath(files[startIndex]));

                m_rawimages.append(getImages);


                if (startIndex +1 < files.size()){
                    QUrl getImages2 = QUrl::fromLocalFile(dirpath.absoluteFilePath(files[startIndex + 1]));
                    m_rawimages.append(getImages2);

                    if (startIndex + 2 < files.size()){
                        QUrl getImages3 = QUrl::fromLocalFile(dirpath.absoluteFilePath(files[startIndex + 2]));
                        m_rawimages.append(getImages3);

                    } // finish if
                } // finish if

                // Emit signal to update QML

                emit rawImagesChanged();

                // Increase index by 2 to get next pair in the next function call
                startIndex += 3;
            }  // finish first IF
        }

    } // finish main if
}


QVector<QUrl> ImageHandler::getRawImages()
{
   // qDebug() << "M_Raw images: " << m_rawimages;
    return m_rawimages;
}

void ImageHandler::getFillNames(QString &fileName)
{
    // clear vector first
    m_names.clear();

    for(const QUrl &name : m_rawimages){
        // return absolute path
        fileName = name.toLocalFile();

        QFileInfo file(fileName);

        QString file_name = file.fileName();
        qDebug()<< "File Name: "<<file_name ;
        m_names.append(file_name);

    }
    emit namesChanged();


}

QStringList ImageHandler::getNames()
{
    // return filename
    qDebug() << "MNAMES: "<< m_names.size();
    return m_names;

}

// read files from directory and return those files
void ImageHandler::setSelectFiles(const QList<QUrl> &files)
{

    //m_selectedFiles = files;
    // load images
    for(const QUrl &file : files){
        //qDebug() << file;
        m_selectedFiles.append(file);
    }
    qDebug() << m_selectedFiles.size();
    emit selectFilesChanged();
}


