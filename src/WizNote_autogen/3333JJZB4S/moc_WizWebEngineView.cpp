/****************************************************************************
** Meta object code from reading C++ file 'WizWebEngineView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/share/WizWebEngineView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizWebEngineView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizWebEnginePage_t {
    QByteArrayData data[10];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizWebEnginePage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizWebEnginePage_t qt_meta_stringdata_WizWebEnginePage = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WizWebEnginePage"
QT_MOC_LITERAL(1, 17, 11), // "linkClicked"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "url"
QT_MOC_LITERAL(4, 34, 30), // "QWebEnginePage::NavigationType"
QT_MOC_LITERAL(5, 65, 4), // "type"
QT_MOC_LITERAL(6, 70, 11), // "isMainFrame"
QT_MOC_LITERAL(7, 82, 17), // "WizWebEnginePage*"
QT_MOC_LITERAL(8, 100, 4), // "page"
QT_MOC_LITERAL(9, 105, 19) // "openLinkInNewWindow"

    },
    "WizWebEnginePage\0linkClicked\0\0url\0"
    "QWebEnginePage::NavigationType\0type\0"
    "isMainFrame\0WizWebEnginePage*\0page\0"
    "openLinkInNewWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizWebEnginePage[] = {

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
       1,    4,   24,    2, 0x06 /* Public */,
       9,    1,   33,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 4, QMetaType::Bool, 0x80000000 | 7,    3,    5,    6,    8,
    QMetaType::Void, QMetaType::QUrl,    3,

       0        // eod
};

void WizWebEnginePage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizWebEnginePage *_t = static_cast<WizWebEnginePage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->linkClicked((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QWebEnginePage::NavigationType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< WizWebEnginePage*(*)>(_a[4]))); break;
        case 1: _t->openLinkInNewWindow((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< WizWebEnginePage* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizWebEnginePage::*_t)(QUrl , QWebEnginePage::NavigationType , bool , WizWebEnginePage * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizWebEnginePage::linkClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizWebEnginePage::*_t)(QUrl );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizWebEnginePage::openLinkInNewWindow)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizWebEnginePage::staticMetaObject = {
    { &QWebEnginePage::staticMetaObject, qt_meta_stringdata_WizWebEnginePage.data,
      qt_meta_data_WizWebEnginePage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizWebEnginePage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizWebEnginePage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizWebEnginePage.stringdata0))
        return static_cast<void*>(const_cast< WizWebEnginePage*>(this));
    return QWebEnginePage::qt_metacast(_clname);
}

int WizWebEnginePage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebEnginePage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void WizWebEnginePage::linkClicked(QUrl _t1, QWebEnginePage::NavigationType _t2, bool _t3, WizWebEnginePage * _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizWebEnginePage::openLinkInNewWindow(QUrl _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_WizWebEngineView_t {
    QByteArrayData data[6];
    char stringdata0[80];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizWebEngineView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizWebEngineView_t qt_meta_stringdata_WizWebEngineView = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WizWebEngineView"
QT_MOC_LITERAL(1, 17, 14), // "loadFinishedEx"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 17), // "innerLoadFinished"
QT_MOC_LITERAL(4, 51, 24), // "openLinkInDefaultBrowser"
QT_MOC_LITERAL(5, 76, 3) // "url"

    },
    "WizWebEngineView\0loadFinishedEx\0\0"
    "innerLoadFinished\0openLinkInDefaultBrowser\0"
    "url"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizWebEngineView[] = {

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
       3,    1,   32,    2, 0x0a /* Public */,
       4,    1,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::QUrl,    5,

       0        // eod
};

void WizWebEngineView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizWebEngineView *_t = static_cast<WizWebEngineView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loadFinishedEx((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->innerLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->openLinkInDefaultBrowser((*reinterpret_cast< QUrl(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizWebEngineView::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizWebEngineView::loadFinishedEx)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizWebEngineView::staticMetaObject = {
    { &QWebEngineView::staticMetaObject, qt_meta_stringdata_WizWebEngineView.data,
      qt_meta_data_WizWebEngineView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizWebEngineView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizWebEngineView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizWebEngineView.stringdata0))
        return static_cast<void*>(const_cast< WizWebEngineView*>(this));
    return QWebEngineView::qt_metacast(_clname);
}

int WizWebEngineView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWebEngineView::qt_metacall(_c, _id, _a);
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
void WizWebEngineView::loadFinishedEx(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_END_MOC_NAMESPACE
