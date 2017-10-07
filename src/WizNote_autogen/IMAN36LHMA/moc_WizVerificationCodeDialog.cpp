/****************************************************************************
** Meta object code from reading C++ file 'WizVerificationCodeDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/widgets/WizVerificationCodeDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizVerificationCodeDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizVerificationCodeDownloader_t {
    QByteArrayData data[4];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizVerificationCodeDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizVerificationCodeDownloader_t qt_meta_stringdata_WizVerificationCodeDownloader = {
    {
QT_MOC_LITERAL(0, 0, 29), // "WizVerificationCodeDownloader"
QT_MOC_LITERAL(1, 30, 16), // "downloadFinished"
QT_MOC_LITERAL(2, 47, 0), // ""
QT_MOC_LITERAL(3, 48, 6) // "byData"

    },
    "WizVerificationCodeDownloader\0"
    "downloadFinished\0\0byData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizVerificationCodeDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray,    3,

       0        // eod
};

void WizVerificationCodeDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizVerificationCodeDownloader *_t = static_cast<WizVerificationCodeDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadFinished((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizVerificationCodeDownloader::*_t)(const QByteArray & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizVerificationCodeDownloader::downloadFinished)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizVerificationCodeDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizVerificationCodeDownloader.data,
      qt_meta_data_WizVerificationCodeDownloader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizVerificationCodeDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizVerificationCodeDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizVerificationCodeDownloader.stringdata0))
        return static_cast<void*>(const_cast< WizVerificationCodeDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int WizVerificationCodeDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void WizVerificationCodeDownloader::downloadFinished(const QByteArray & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WizVerificationCodeDialog_t {
    QByteArrayData data[9];
    char stringdata0[133];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizVerificationCodeDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizVerificationCodeDialog_t qt_meta_stringdata_WizVerificationCodeDialog = {
    {
QT_MOC_LITERAL(0, 0, 25), // "WizVerificationCodeDialog"
QT_MOC_LITERAL(1, 26, 23), // "verificationCodeInputed"
QT_MOC_LITERAL(2, 50, 0), // ""
QT_MOC_LITERAL(3, 51, 5), // "strId"
QT_MOC_LITERAL(4, 57, 20), // "on_btn_image_clicked"
QT_MOC_LITERAL(5, 78, 17), // "on_btn_OK_clicked"
QT_MOC_LITERAL(6, 96, 13), // "inputFinished"
QT_MOC_LITERAL(7, 110, 19), // "on_image_downloaded"
QT_MOC_LITERAL(8, 130, 2) // "ba"

    },
    "WizVerificationCodeDialog\0"
    "verificationCodeInputed\0\0strId\0"
    "on_btn_image_clicked\0on_btn_OK_clicked\0"
    "inputFinished\0on_image_downloaded\0ba"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizVerificationCodeDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   42,    2, 0x08 /* Private */,
       5,    0,   43,    2, 0x08 /* Private */,
       6,    0,   44,    2, 0x08 /* Private */,
       7,    1,   45,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,    8,

       0        // eod
};

void WizVerificationCodeDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizVerificationCodeDialog *_t = static_cast<WizVerificationCodeDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->verificationCodeInputed((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->on_btn_image_clicked(); break;
        case 2: _t->on_btn_OK_clicked(); break;
        case 3: _t->inputFinished(); break;
        case 4: _t->on_image_downloaded((*reinterpret_cast< const QByteArray(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizVerificationCodeDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizVerificationCodeDialog::verificationCodeInputed)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizVerificationCodeDialog::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_WizVerificationCodeDialog.data,
      qt_meta_data_WizVerificationCodeDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizVerificationCodeDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizVerificationCodeDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizVerificationCodeDialog.stringdata0))
        return static_cast<void*>(const_cast< WizVerificationCodeDialog*>(this));
    return QDialog::qt_metacast(_clname);
}

int WizVerificationCodeDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void WizVerificationCodeDialog::verificationCodeInputed(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
