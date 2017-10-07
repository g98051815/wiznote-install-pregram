/****************************************************************************
** Meta object code from reading C++ file 'WizSearch.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/share/WizSearch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizSearch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizSearcher_t {
    QByteArrayData data[8];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizSearcher_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizSearcher_t qt_meta_stringdata_WizSearcher = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WizSearcher"
QT_MOC_LITERAL(1, 12, 13), // "searchProcess"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 11), // "strKeywords"
QT_MOC_LITERAL(4, 39, 21), // "CWizDocumentDataArray"
QT_MOC_LITERAL(5, 61, 13), // "arrayDocument"
QT_MOC_LITERAL(6, 75, 6), // "bStart"
QT_MOC_LITERAL(7, 82, 4) // "bEnd"

    },
    "WizSearcher\0searchProcess\0\0strKeywords\0"
    "CWizDocumentDataArray\0arrayDocument\0"
    "bStart\0bEnd"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizSearcher[] = {

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
       1,    4,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4, QMetaType::Bool, QMetaType::Bool,    3,    5,    6,    7,

       0        // eod
};

void WizSearcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizSearcher *_t = static_cast<WizSearcher *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->searchProcess((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const CWizDocumentDataArray(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizSearcher::*_t)(const QString & , const CWizDocumentDataArray & , bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizSearcher::searchProcess)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizSearcher::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WizSearcher.data,
      qt_meta_data_WizSearcher,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizSearcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizSearcher::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizSearcher.stringdata0))
        return static_cast<void*>(const_cast< WizSearcher*>(this));
    return QThread::qt_metacast(_clname);
}

int WizSearcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizSearcher::searchProcess(const QString & _t1, const CWizDocumentDataArray & _t2, bool _t3, bool _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
