/****************************************************************************
** Meta object code from reading C++ file 'WizFileImporter.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizFileImporter.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizFileImporter.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizFileImporter_t {
    QByteArrayData data[9];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizFileImporter_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizFileImporter_t qt_meta_stringdata_WizFileImporter = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WizFileImporter"
QT_MOC_LITERAL(1, 16, 14), // "importFinished"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 2), // "ok"
QT_MOC_LITERAL(4, 35, 4), // "text"
QT_MOC_LITERAL(5, 40, 6), // "kbGuid"
QT_MOC_LITERAL(6, 47, 14), // "importProgress"
QT_MOC_LITERAL(7, 62, 5), // "total"
QT_MOC_LITERAL(8, 68, 6) // "loaded"

    },
    "WizFileImporter\0importFinished\0\0ok\0"
    "text\0kbGuid\0importProgress\0total\0"
    "loaded"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizFileImporter[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    3,   24,    2, 0x06 /* Public */,
       6,    2,   31,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    7,    8,

       0        // eod
};

void WizFileImporter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizFileImporter *_t = static_cast<WizFileImporter *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->importFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 1: _t->importProgress((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizFileImporter::*_t)(bool , const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizFileImporter::importFinished)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizFileImporter::*_t)(int , int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizFileImporter::importProgress)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizFileImporter::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizFileImporter.data,
      qt_meta_data_WizFileImporter,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizFileImporter::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizFileImporter::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizFileImporter.stringdata0))
        return static_cast<void*>(const_cast< WizFileImporter*>(this));
    return QObject::qt_metacast(_clname);
}

int WizFileImporter::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizFileImporter::importFinished(bool _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizFileImporter::importProgress(int _t1, int _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
