#ifndef RESTAPIHANDLER_H
#define RESTAPIHANDLER_H

#include <QObject>

class RestAPIHandler : public QObject
{
    Q_OBJECT
public:
    explicit RestAPIHandler(QObject *parent = nullptr);

signals:

};

#endif // RESTAPIHANDLER_H
