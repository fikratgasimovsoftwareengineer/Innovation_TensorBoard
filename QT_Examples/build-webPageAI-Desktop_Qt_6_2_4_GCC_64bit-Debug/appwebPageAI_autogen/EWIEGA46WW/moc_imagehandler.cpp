/****************************************************************************
** Meta object code from reading C++ file 'imagehandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../webPageAI/imagehandler.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'imagehandler.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ImageHandler_t {
    const uint offsetsAndSize[44];
    char stringdata0[247];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ImageHandler_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ImageHandler_t qt_meta_stringdata_ImageHandler = {
    {
QT_MOC_LITERAL(0, 12), // "ImageHandler"
QT_MOC_LITERAL(13, 18), // "selectFilesChanged"
QT_MOC_LITERAL(32, 0), // ""
QT_MOC_LITERAL(33, 16), // "rawImagesChanged"
QT_MOC_LITERAL(50, 15), // "allImagesLoaded"
QT_MOC_LITERAL(66, 12), // "namesChanged"
QT_MOC_LITERAL(79, 14), // "setSelectFiles"
QT_MOC_LITERAL(94, 11), // "QList<QUrl>"
QT_MOC_LITERAL(106, 5), // "files"
QT_MOC_LITERAL(112, 14), // "getSelectFiles"
QT_MOC_LITERAL(127, 9), // "saveImage"
QT_MOC_LITERAL(137, 4), // "path"
QT_MOC_LITERAL(142, 13), // "displayImages"
QT_MOC_LITERAL(156, 9), // "imagePath"
QT_MOC_LITERAL(166, 12), // "getRawImages"
QT_MOC_LITERAL(179, 12), // "getFillNames"
QT_MOC_LITERAL(192, 8), // "QString&"
QT_MOC_LITERAL(201, 8), // "fileName"
QT_MOC_LITERAL(210, 8), // "getNames"
QT_MOC_LITERAL(219, 11), // "selectfiles"
QT_MOC_LITERAL(231, 9), // "rawimages"
QT_MOC_LITERAL(241, 5) // "names"

    },
    "ImageHandler\0selectFilesChanged\0\0"
    "rawImagesChanged\0allImagesLoaded\0"
    "namesChanged\0setSelectFiles\0QList<QUrl>\0"
    "files\0getSelectFiles\0saveImage\0path\0"
    "displayImages\0imagePath\0getRawImages\0"
    "getFillNames\0QString&\0fileName\0getNames\0"
    "selectfiles\0rawimages\0names"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ImageHandler[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       3,   99, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    4 /* Public */,
       3,    0,   81,    2, 0x06,    5 /* Public */,
       4,    0,   82,    2, 0x06,    6 /* Public */,
       5,    0,   83,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   84,    2, 0x0a,    8 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   87,    2, 0x102,   10 /* Public | MethodIsConst  */,
      10,    1,   88,    2, 0x02,   11 /* Public */,
      12,    1,   91,    2, 0x02,   13 /* Public */,
      14,    0,   94,    2, 0x02,   15 /* Public */,
      15,    1,   95,    2, 0x02,   16 /* Public */,
      18,    0,   98,    2, 0x02,   18 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

 // methods: parameters
    0x80000000 | 7,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   13,
    0x80000000 | 7,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::QStringList,

 // properties: name, type, flags
      19, 0x80000000 | 7, 0x0001500b, uint(0), 0,
      20, 0x80000000 | 7, 0x00015009, uint(1), 0,
      21, QMetaType::QStringList, 0x00015001, uint(3), 0,

       0        // eod
};

void ImageHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ImageHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectFilesChanged(); break;
        case 1: _t->rawImagesChanged(); break;
        case 2: _t->allImagesLoaded(); break;
        case 3: _t->namesChanged(); break;
        case 4: _t->setSelectFiles((*reinterpret_cast< std::add_pointer_t<QList<QUrl>>>(_a[1]))); break;
        case 5: { QList<QUrl> _r = _t->getSelectFiles();
            if (_a[0]) *reinterpret_cast< QList<QUrl>*>(_a[0]) = std::move(_r); }  break;
        case 6: _t->saveImage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->displayImages((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: { QList<QUrl> _r = _t->getRawImages();
            if (_a[0]) *reinterpret_cast< QList<QUrl>*>(_a[0]) = std::move(_r); }  break;
        case 9: _t->getFillNames((*reinterpret_cast< std::add_pointer_t<QString&>>(_a[1]))); break;
        case 10: { QStringList _r = _t->getNames();
            if (_a[0]) *reinterpret_cast< QStringList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QUrl> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ImageHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageHandler::selectFilesChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ImageHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageHandler::rawImagesChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ImageHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageHandler::allImagesLoaded)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ImageHandler::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ImageHandler::namesChanged)) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<QUrl> >(); break;
        }
    }

#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ImageHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QList<QUrl>*>(_v) = _t->getSelectFiles(); break;
        case 1: *reinterpret_cast< QList<QUrl>*>(_v) = _t->getRawImages(); break;
        case 2: *reinterpret_cast< QStringList*>(_v) = _t->getNames(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ImageHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setSelectFiles(*reinterpret_cast< QList<QUrl>*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject ImageHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ImageHandler.offsetsAndSize,
    qt_meta_data_ImageHandler,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ImageHandler_t
, QtPrivate::TypeAndForceComplete<QList<QUrl>, std::true_type>, QtPrivate::TypeAndForceComplete<QList<QUrl>, std::true_type>, QtPrivate::TypeAndForceComplete<QStringList, std::true_type>, QtPrivate::TypeAndForceComplete<ImageHandler, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QList<QUrl> &, std::false_type>
, QtPrivate::TypeAndForceComplete<QVector<QUrl>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<const QString &, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QUrl>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QString &, std::false_type>, QtPrivate::TypeAndForceComplete<QStringList, std::false_type>

>,
    nullptr
} };


const QMetaObject *ImageHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ImageHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ImageHandler.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "IIimageManager"))
        return static_cast< IIimageManager*>(this);
    return QObject::qt_metacast(_clname);
}

int ImageHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void ImageHandler::selectFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ImageHandler::rawImagesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void ImageHandler::allImagesLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void ImageHandler::namesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
