#ifndef IMAGEHANDLE_H
#define IMAGEHANDLE_H

#include <QObject>
#include <QUrl>

class imageHandle : public QObject
{
    Q_OBJECT
   // Q_PROPERTY(QU READ name WRITE setName NOTIFY nameChanged)
public:
    explicit imageHandle(QObject *parent = nullptr);

signals:

};

#endif // IMAGEHANDLE_H
