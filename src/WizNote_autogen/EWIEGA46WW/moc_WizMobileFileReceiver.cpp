/****************************************************************************
** Meta object code from reading C++ file 'WizMobileFileReceiver.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizMobileFileReceiver.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizMobileFileReceiver.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizMobileXmlProcesser_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizMobileXmlProcesser_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizMobileXmlProcesser_t qt_meta_stringdata_WizMobileXmlProcesser = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WizMobileXmlProcesser"
QT_MOC_LITERAL(1, 22, 12), // "fileReceived"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11) // "strFileName"

    },
    "WizMobileXmlProcesser\0fileReceived\0\0"
    "strFileName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizMobileXmlProcesser[] = {

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
    QMetaType::Void, QMetaType::QString,    3,

       0        // eod
};

void WizMobileXmlProcesser::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizMobileXmlProcesser *_t = static_cast<WizMobileXmlProcesser *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizMobileXmlProcesser::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizMobileXmlProcesser::fileReceived)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizMobileXmlProcesser::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WizMobileXmlProcesser.data,
      qt_meta_data_WizMobileXmlProcesser,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizMobileXmlProcesser::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizMobileXmlProcesser::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizMobileXmlProcesser.stringdata0))
        return static_cast<void*>(const_cast< WizMobileXmlProcesser*>(this));
    return QThread::qt_metacast(_clname);
}

int WizMobileXmlProcesser::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void WizMobileXmlProcesser::fileReceived(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WizMobileTcpContainer_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizMobileTcpContainer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizMobileTcpContainer_t qt_meta_stringdata_WizMobileTcpContainer = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WizMobileTcpContainer"
QT_MOC_LITERAL(1, 22, 18), // "readTcpPendingData"
QT_MOC_LITERAL(2, 41, 0), // ""
QT_MOC_LITERAL(3, 42, 13), // "connectToHost"
QT_MOC_LITERAL(4, 56, 7), // "address"
QT_MOC_LITERAL(5, 64, 4) // "port"

    },
    "WizMobileTcpContainer\0readTcpPendingData\0"
    "\0connectToHost\0address\0port"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizMobileTcpContainer[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    2,   25,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    4,    5,

       0        // eod
};

void WizMobileTcpContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizMobileTcpContainer *_t = static_cast<WizMobileTcpContainer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->readTcpPendingData(); break;
        case 1: _t->connectToHost((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject WizMobileTcpContainer::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WizMobileTcpContainer.data,
      qt_meta_data_WizMobileTcpContainer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizMobileTcpContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizMobileTcpContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizMobileTcpContainer.stringdata0))
        return static_cast<void*>(const_cast< WizMobileTcpContainer*>(this));
    return QThread::qt_metacast(_clname);
}

int WizMobileTcpContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
struct qt_meta_stringdata_WizMobileFileReceiver_t {
    QByteArrayData data[8];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizMobileFileReceiver_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizMobileFileReceiver_t qt_meta_stringdata_WizMobileFileReceiver = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WizMobileFileReceiver"
QT_MOC_LITERAL(1, 22, 12), // "fileReceived"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 11), // "strFileName"
QT_MOC_LITERAL(4, 48, 13), // "connectToHost"
QT_MOC_LITERAL(5, 62, 7), // "address"
QT_MOC_LITERAL(6, 70, 4), // "port"
QT_MOC_LITERAL(7, 75, 18) // "readUdpPendingData"

    },
    "WizMobileFileReceiver\0fileReceived\0\0"
    "strFileName\0connectToHost\0address\0"
    "port\0readUdpPendingData"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizMobileFileReceiver[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,
       4,    2,   32,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   37,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::UShort,    5,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WizMobileFileReceiver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizMobileFileReceiver *_t = static_cast<WizMobileFileReceiver *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileReceived((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->connectToHost((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< quint16(*)>(_a[2]))); break;
        case 2: _t->readUdpPendingData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizMobileFileReceiver::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizMobileFileReceiver::fileReceived)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizMobileFileReceiver::*_t)(QString , quint16 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizMobileFileReceiver::connectToHost)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizMobileFileReceiver::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WizMobileFileReceiver.data,
      qt_meta_data_WizMobileFileReceiver,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizMobileFileReceiver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizMobileFileReceiver::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizMobileFileReceiver.stringdata0))
        return static_cast<void*>(const_cast< WizMobileFileReceiver*>(this));
    return QThread::qt_metacast(_clname);
}

int WizMobileFileReceiver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
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
void WizMobileFileReceiver::fileReceived(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizMobileFileReceiver::connectToHost(QString _t1, quint16 _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
