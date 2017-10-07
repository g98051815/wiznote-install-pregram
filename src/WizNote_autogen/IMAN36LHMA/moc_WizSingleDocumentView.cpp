/****************************************************************************
** Meta object code from reading C++ file 'WizSingleDocumentView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/widgets/WizSingleDocumentView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizSingleDocumentView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizSingleDocumentViewer_t {
    QByteArrayData data[6];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizSingleDocumentViewer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizSingleDocumentViewer_t qt_meta_stringdata_WizSingleDocumentViewer = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WizSingleDocumentViewer"
QT_MOC_LITERAL(1, 24, 21), // "documentViewerDeleted"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 4), // "guid"
QT_MOC_LITERAL(4, 52, 30), // "on_commentWidget_statusChanged"
QT_MOC_LITERAL(5, 83, 25) // "on_commentWidget_willShow"

    },
    "WizSingleDocumentViewer\0documentViewerDeleted\0"
    "\0guid\0on_commentWidget_statusChanged\0"
    "on_commentWidget_willShow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizSingleDocumentViewer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   32,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizSingleDocumentViewer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizSingleDocumentViewer *_t = static_cast<WizSingleDocumentViewer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentViewerDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->on_commentWidget_statusChanged(); break;
        case 2: _t->on_commentWidget_willShow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizSingleDocumentViewer::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSingleDocumentViewer::documentViewerDeleted)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizSingleDocumentViewer::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WizSingleDocumentViewer.data,
      qt_meta_data_WizSingleDocumentViewer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizSingleDocumentViewer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizSingleDocumentViewer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizSingleDocumentViewer.stringdata0))
        return static_cast<void*>(const_cast< WizSingleDocumentViewer*>(this));
    return QWidget::qt_metacast(_clname);
}

int WizSingleDocumentViewer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void WizSingleDocumentViewer::documentViewerDeleted(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WizSingleDocumentViewDelegate_t {
    QByteArrayData data[12];
    char stringdata0[162];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizSingleDocumentViewDelegate_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizSingleDocumentViewDelegate_t qt_meta_stringdata_WizSingleDocumentViewDelegate = {
    {
QT_MOC_LITERAL(0, 0, 29), // "WizSingleDocumentViewDelegate"
QT_MOC_LITERAL(1, 30, 15), // "documentChanged"
QT_MOC_LITERAL(2, 46, 0), // ""
QT_MOC_LITERAL(3, 47, 7), // "strGUID"
QT_MOC_LITERAL(4, 55, 16), // "WizDocumentView*"
QT_MOC_LITERAL(5, 72, 6), // "viewer"
QT_MOC_LITERAL(6, 79, 20), // "documentViewerClosed"
QT_MOC_LITERAL(7, 100, 4), // "guid"
QT_MOC_LITERAL(8, 105, 12), // "viewDocument"
QT_MOC_LITERAL(9, 118, 15), // "WIZDOCUMENTDATA"
QT_MOC_LITERAL(10, 134, 3), // "doc"
QT_MOC_LITERAL(11, 138, 23) // "onDocumentViewerDeleted"

    },
    "WizSingleDocumentViewDelegate\0"
    "documentChanged\0\0strGUID\0WizDocumentView*\0"
    "viewer\0documentViewerClosed\0guid\0"
    "viewDocument\0WIZDOCUMENTDATA\0doc\0"
    "onDocumentViewerDeleted"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizSingleDocumentViewDelegate[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   34,    2, 0x06 /* Public */,
       6,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    1,   42,    2, 0x0a /* Public */,
      11,    1,   45,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

void WizSingleDocumentViewDelegate::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizSingleDocumentViewDelegate *_t = static_cast<WizSingleDocumentViewDelegate *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->documentChanged((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< WizDocumentView*(*)>(_a[2]))); break;
        case 1: _t->documentViewerClosed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->viewDocument((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 3: _t->onDocumentViewerDeleted((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizSingleDocumentViewDelegate::*_t)(const QString & , WizDocumentView * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSingleDocumentViewDelegate::documentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizSingleDocumentViewDelegate::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSingleDocumentViewDelegate::documentViewerClosed)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizSingleDocumentViewDelegate::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizSingleDocumentViewDelegate.data,
      qt_meta_data_WizSingleDocumentViewDelegate,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizSingleDocumentViewDelegate::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizSingleDocumentViewDelegate::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizSingleDocumentViewDelegate.stringdata0))
        return static_cast<void*>(const_cast< WizSingleDocumentViewDelegate*>(this));
    return QObject::qt_metacast(_clname);
}

int WizSingleDocumentViewDelegate::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WizSingleDocumentViewDelegate::documentChanged(const QString & _t1, WizDocumentView * _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizSingleDocumentViewDelegate::documentViewerClosed(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
