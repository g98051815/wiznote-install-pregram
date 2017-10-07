/****************************************************************************
** Meta object code from reading C++ file 'WizThreads_p.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/share/WizThreads_p.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizThreads_p.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizMainQueuedThread_t {
    QByteArrayData data[4];
    char stringdata0[49];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizMainQueuedThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizMainQueuedThread_t qt_meta_stringdata_WizMainQueuedThread = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WizMainQueuedThread"
QT_MOC_LITERAL(1, 20, 9), // "taskAdded"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 17) // "executeAllActions"

    },
    "WizMainQueuedThread\0taskAdded\0\0"
    "executeAllActions"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizMainQueuedThread[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   25,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WizMainQueuedThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizMainQueuedThread *_t = static_cast<WizMainQueuedThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->taskAdded(); break;
        case 1: _t->executeAllActions(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizMainQueuedThread::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizMainQueuedThread::taskAdded)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WizMainQueuedThread::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizMainQueuedThread.data,
      qt_meta_data_WizMainQueuedThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizMainQueuedThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizMainQueuedThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizMainQueuedThread.stringdata0))
        return static_cast<void*>(const_cast< WizMainQueuedThread*>(this));
    if (!strcmp(_clname, "IWizThreadPool"))
        return static_cast< IWizThreadPool*>(const_cast< WizMainQueuedThread*>(this));
    return QObject::qt_metacast(_clname);
}

int WizMainQueuedThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizMainQueuedThread::taskAdded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_WizTimeoutRunable_t {
    QByteArrayData data[3];
    char stringdata0[27];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizTimeoutRunable_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizTimeoutRunable_t qt_meta_stringdata_WizTimeoutRunable = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WizTimeoutRunable"
QT_MOC_LITERAL(1, 18, 7), // "timeout"
QT_MOC_LITERAL(2, 26, 0) // ""

    },
    "WizTimeoutRunable\0timeout\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizTimeoutRunable[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WizTimeoutRunable::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizTimeoutRunable *_t = static_cast<WizTimeoutRunable *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->timeout(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WizTimeoutRunable::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizTimeoutRunable.data,
      qt_meta_data_WizTimeoutRunable,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizTimeoutRunable::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizTimeoutRunable::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizTimeoutRunable.stringdata0))
        return static_cast<void*>(const_cast< WizTimeoutRunable*>(this));
    if (!strcmp(_clname, "IWizRunable"))
        return static_cast< IWizRunable*>(const_cast< WizTimeoutRunable*>(this));
    return QObject::qt_metacast(_clname);
}

int WizTimeoutRunable::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_END_MOC_NAMESPACE
