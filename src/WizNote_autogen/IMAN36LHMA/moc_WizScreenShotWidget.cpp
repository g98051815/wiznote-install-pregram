/****************************************************************************
** Meta object code from reading C++ file 'WizScreenShotWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/widgets/WizScreenShotWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizScreenShotWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizScreenShotWidget_t {
    QByteArrayData data[13];
    char stringdata0[131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizScreenShotWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizScreenShotWidget_t qt_meta_stringdata_WizScreenShotWidget = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WizScreenShotWidget"
QT_MOC_LITERAL(1, 20, 12), // "finishPixmap"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 14), // "shotScreenQuit"
QT_MOC_LITERAL(4, 49, 20), // "loadBackgroundPixmap"
QT_MOC_LITERAL(5, 70, 8), // "bgPixmap"
QT_MOC_LITERAL(6, 79, 1), // "x"
QT_MOC_LITERAL(7, 81, 1), // "y"
QT_MOC_LITERAL(8, 83, 5), // "width"
QT_MOC_LITERAL(9, 89, 6), // "height"
QT_MOC_LITERAL(10, 96, 18), // "cancelSelectedRect"
QT_MOC_LITERAL(11, 115, 10), // "savePixmap"
QT_MOC_LITERAL(12, 126, 4) // "quit"

    },
    "WizScreenShotWidget\0finishPixmap\0\0"
    "shotScreenQuit\0loadBackgroundPixmap\0"
    "bgPixmap\0x\0y\0width\0height\0cancelSelectedRect\0"
    "savePixmap\0quit"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizScreenShotWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,
       3,    0,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   53,    2, 0x0a /* Public */,
       4,    5,   56,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,
      11,    0,   68,    2, 0x0a /* Public */,
      12,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QPixmap,    1,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QPixmap,    5,
    QMetaType::Void, QMetaType::QPixmap, QMetaType::Int, QMetaType::Int, QMetaType::Int, QMetaType::Int,    5,    6,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizScreenShotWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizScreenShotWidget *_t = static_cast<WizScreenShotWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->finishPixmap((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 1: _t->shotScreenQuit(); break;
        case 2: _t->loadBackgroundPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1]))); break;
        case 3: _t->loadBackgroundPixmap((*reinterpret_cast< const QPixmap(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5]))); break;
        case 4: _t->cancelSelectedRect(); break;
        case 5: _t->savePixmap(); break;
        case 6: _t->quit(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizScreenShotWidget::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizScreenShotWidget::finishPixmap)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizScreenShotWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizScreenShotWidget::shotScreenQuit)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizScreenShotWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WizScreenShotWidget.data,
      qt_meta_data_WizScreenShotWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizScreenShotWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizScreenShotWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizScreenShotWidget.stringdata0))
        return static_cast<void*>(const_cast< WizScreenShotWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int WizScreenShotWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void WizScreenShotWidget::finishPixmap(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizScreenShotWidget::shotScreenQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_WizScreenShotHelper_t {
    QByteArrayData data[6];
    char stringdata0[75];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizScreenShotHelper_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizScreenShotHelper_t qt_meta_stringdata_WizScreenShotHelper = {
    {
QT_MOC_LITERAL(0, 0, 19), // "WizScreenShotHelper"
QT_MOC_LITERAL(1, 20, 14), // "shotScreenQuit"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 18), // "screenShotCaptured"
QT_MOC_LITERAL(4, 55, 3), // "pix"
QT_MOC_LITERAL(5, 59, 15) // "startScreenShot"

    },
    "WizScreenShotHelper\0shotScreenQuit\0\0"
    "screenShotCaptured\0pix\0startScreenShot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizScreenShotHelper[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,
       3,    1,   30,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   33,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap,    4,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void WizScreenShotHelper::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizScreenShotHelper *_t = static_cast<WizScreenShotHelper *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->shotScreenQuit(); break;
        case 1: _t->screenShotCaptured((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 2: _t->startScreenShot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizScreenShotHelper::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizScreenShotHelper::shotScreenQuit)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizScreenShotHelper::*_t)(QPixmap );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizScreenShotHelper::screenShotCaptured)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizScreenShotHelper::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizScreenShotHelper.data,
      qt_meta_data_WizScreenShotHelper,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizScreenShotHelper::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizScreenShotHelper::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizScreenShotHelper.stringdata0))
        return static_cast<void*>(const_cast< WizScreenShotHelper*>(this));
    return QObject::qt_metacast(_clname);
}

int WizScreenShotHelper::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void WizScreenShotHelper::shotScreenQuit()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WizScreenShotHelper::screenShotCaptured(QPixmap _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_END_MOC_NAMESPACE
