/****************************************************************************
** Meta object code from reading C++ file 'WizTrayIcon.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/widgets/WizTrayIcon.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizTrayIcon.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizTrayIcon_t {
    QByteArrayData data[12];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizTrayIcon_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizTrayIcon_t qt_meta_stringdata_WizTrayIcon = {
    {
QT_MOC_LITERAL(0, 0, 11), // "WizTrayIcon"
QT_MOC_LITERAL(1, 12, 18), // "viewMessageRequest"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 9), // "messageID"
QT_MOC_LITERAL(4, 42, 16), // "onMessageClicked"
QT_MOC_LITERAL(5, 59, 11), // "showMessage"
QT_MOC_LITERAL(6, 71, 5), // "title"
QT_MOC_LITERAL(7, 77, 3), // "msg"
QT_MOC_LITERAL(8, 81, 28), // "QSystemTrayIcon::MessageIcon"
QT_MOC_LITERAL(9, 110, 4), // "icon"
QT_MOC_LITERAL(10, 115, 5), // "msecs"
QT_MOC_LITERAL(11, 121, 5) // "param"

    },
    "WizTrayIcon\0viewMessageRequest\0\0"
    "messageID\0onMessageClicked\0showMessage\0"
    "title\0msg\0QSystemTrayIcon::MessageIcon\0"
    "icon\0msecs\0param"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizTrayIcon[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   44,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    0,   47,    2, 0x0a /* Public */,
       5,    4,   48,    2, 0x0a /* Public */,
       5,    3,   57,    2, 0x2a /* Public | MethodCloned */,
       5,    2,   64,    2, 0x2a /* Public | MethodCloned */,
       5,    1,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 8, QMetaType::Int,    6,    7,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 8,    6,    7,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    6,    7,
    QMetaType::Void, QMetaType::QVariant,   11,

       0        // eod
};

void WizTrayIcon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizTrayIcon *_t = static_cast<WizTrayIcon *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->viewMessageRequest((*reinterpret_cast< qint64(*)>(_a[1]))); break;
        case 1: _t->onMessageClicked(); break;
        case 2: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSystemTrayIcon::MessageIcon(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4]))); break;
        case 3: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< QSystemTrayIcon::MessageIcon(*)>(_a[3]))); break;
        case 4: _t->showMessage((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 5: _t->showMessage((*reinterpret_cast< const QVariant(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizTrayIcon::*_t)(qint64 );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizTrayIcon::viewMessageRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizTrayIcon::staticMetaObject = {
    { &QSystemTrayIcon::staticMetaObject, qt_meta_stringdata_WizTrayIcon.data,
      qt_meta_data_WizTrayIcon,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizTrayIcon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizTrayIcon::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizTrayIcon.stringdata0))
        return static_cast<void*>(const_cast< WizTrayIcon*>(this));
    return QSystemTrayIcon::qt_metacast(_clname);
}

int WizTrayIcon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSystemTrayIcon::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void WizTrayIcon::viewMessageRequest(qint64 _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
