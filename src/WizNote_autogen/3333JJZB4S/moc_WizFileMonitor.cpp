/****************************************************************************
** Meta object code from reading C++ file 'WizFileMonitor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/share/WizFileMonitor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizFileMonitor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizFileMonitor_t {
    QByteArrayData data[9];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizFileMonitor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizFileMonitor_t qt_meta_stringdata_WizFileMonitor = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WizFileMonitor"
QT_MOC_LITERAL(1, 15, 12), // "fileModified"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 9), // "strKbGUID"
QT_MOC_LITERAL(4, 39, 7), // "strGUID"
QT_MOC_LITERAL(5, 47, 11), // "strFileName"
QT_MOC_LITERAL(6, 59, 6), // "strMD5"
QT_MOC_LITERAL(7, 66, 14), // "dtLastModified"
QT_MOC_LITERAL(8, 81, 11) // "on_timerOut"

    },
    "WizFileMonitor\0fileModified\0\0strKbGUID\0"
    "strGUID\0strFileName\0strMD5\0dtLastModified\0"
    "on_timerOut"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizFileMonitor[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QDateTime,    3,    4,    5,    6,    7,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WizFileMonitor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizFileMonitor *_t = static_cast<WizFileMonitor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->fileModified((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4])),(*reinterpret_cast< QDateTime(*)>(_a[5]))); break;
        case 1: _t->on_timerOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizFileMonitor::*_t)(QString , QString , QString , QString , QDateTime );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizFileMonitor::fileModified)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizFileMonitor::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizFileMonitor.data,
      qt_meta_data_WizFileMonitor,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizFileMonitor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizFileMonitor::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizFileMonitor.stringdata0))
        return static_cast<void*>(const_cast< WizFileMonitor*>(this));
    return QObject::qt_metacast(_clname);
}

int WizFileMonitor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void WizFileMonitor::fileModified(QString _t1, QString _t2, QString _t3, QString _t4, QDateTime _t5)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)), const_cast<void*>(reinterpret_cast<const void*>(&_t5)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
