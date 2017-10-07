/****************************************************************************
** Meta object code from reading C++ file 'WizKMServer.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/sync/WizKMServer.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizKMServer.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizKMDatabaseServer_t {
    QByteArrayData data[5];
    char stringdata0[59];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizKMDatabaseServer_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizKMDatabaseServer_t qt_meta_stringdata_WizKMDatabaseServer = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WizKMDatabaseServer"
QT_MOC_LITERAL(1, 20, 16), // "downloadProgress"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 9), // "totalSize"
QT_MOC_LITERAL(4, 48, 10) // "loadedSize"

    },
    "WizKMDatabaseServer\0downloadProgress\0"
    "\0totalSize\0loadedSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizKMDatabaseServer[] = {

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
       1,    2,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    3,    4,

       0        // eod
};

void WizKMDatabaseServer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizKMDatabaseServer *_t = static_cast<WizKMDatabaseServer *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->downloadProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizKMDatabaseServer::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizKMDatabaseServer::downloadProgress)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizKMDatabaseServer::staticMetaObject = {
    { &WizKMXmlRpcServerBase::staticMetaObject, qt_meta_stringdata_WizKMDatabaseServer.data,
      qt_meta_data_WizKMDatabaseServer,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizKMDatabaseServer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizKMDatabaseServer::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizKMDatabaseServer.stringdata0))
        return static_cast<void*>(const_cast< WizKMDatabaseServer*>(this));
    return WizKMXmlRpcServerBase::qt_metacast(_clname);
}

int WizKMDatabaseServer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizKMXmlRpcServerBase::qt_metacall(_c, _id, _a);
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
void WizKMDatabaseServer::downloadProgress(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
