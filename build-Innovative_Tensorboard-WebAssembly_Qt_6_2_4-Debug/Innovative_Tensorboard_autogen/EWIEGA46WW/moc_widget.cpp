/****************************************************************************
** Meta object code from reading C++ file 'widget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../Innovative_Tensorboard/widget.h"
#include <QtNetwork/QSslError>
#include <QtGui/qtextcursor.h>
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'widget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Widget_t {
    const uint offsetsAndSize[12];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_Widget_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_Widget_t qt_meta_stringdata_Widget = {
    {
QT_MOC_LITERAL(0, 6), // "Widget"
QT_MOC_LITERAL(7, 11), // "fetchImages"
QT_MOC_LITERAL(19, 0), // ""
QT_MOC_LITERAL(20, 22), // "onDownloadFinishedRest"
QT_MOC_LITERAL(43, 14), // "QNetworkReply*"
QT_MOC_LITERAL(58, 21) // "onDownloadImagelabels"

    },
    "Widget\0fetchImages\0\0onDownloadFinishedRest\0"
    "QNetworkReply*\0onDownloadImagelabels"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Widget[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    1,   33,    2, 0x08,    2 /* Private */,
       5,    1,   36,    2, 0x08,    4 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,

       0        // eod
};

void Widget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Widget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fetchImages(); break;
        case 1: _t->onDownloadFinishedRest((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 2: _t->onDownloadImagelabels((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject Widget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_Widget.offsetsAndSize,
    qt_meta_data_Widget,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_Widget_t
, QtPrivate::TypeAndForceComplete<Widget, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>


>,
    nullptr
} };


const QMetaObject *Widget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Widget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Widget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "OpearationHandler"))
        return static_cast< OpearationHandler*>(this);
    return QWidget::qt_metacast(_clname);
}

int Widget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
