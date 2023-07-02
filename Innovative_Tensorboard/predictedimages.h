#ifndef PREDICTEDIMAGES_H
#define PREDICTEDIMAGES_H


#include <QLabel>


class predictedImages
{

public:
    virtual ~predictedImages(){}

    virtual QList<QLabel*> getLabels() = 0;

    // get Labels for Labels
    virtual QList<QLabel*> getImgNames() = 0;





};

#endif // PREDICTEDIMAGES_H
