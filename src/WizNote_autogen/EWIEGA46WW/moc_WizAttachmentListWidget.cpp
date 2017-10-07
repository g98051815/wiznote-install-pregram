/****************************************************************************
** Meta object code from reading C++ file 'WizAttachmentListWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizAttachmentListWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizAttachmentListWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizAttachmentListViewItem_t {
    QByteArrayData data[11];
    char stringdata0[140];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizAttachmentListViewItem_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizAttachmentListViewItem_t qt_meta_stringdata_WizAttachmentListViewItem = {
    {
QT_MOC_LITERAL(0, 0, 25), // "WizAttachmentListViewItem"
QT_MOC_LITERAL(1, 26, 12), // "updateRequet"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "on_downloadFinished"
QT_MOC_LITERAL(4, 60, 13), // "WIZOBJECTDATA"
QT_MOC_LITERAL(5, 74, 4), // "data"
QT_MOC_LITERAL(6, 79, 8), // "bSucceed"
QT_MOC_LITERAL(7, 88, 19), // "on_downloadProgress"
QT_MOC_LITERAL(8, 108, 10), // "objectGUID"
QT_MOC_LITERAL(9, 119, 9), // "totalSize"
QT_MOC_LITERAL(10, 129, 10) // "loadedSize"

    },
    "WizAttachmentListViewItem\0updateRequet\0"
    "\0on_downloadFinished\0WIZOBJECTDATA\0"
    "data\0bSucceed\0on_downloadProgress\0"
    "objectGUID\0totalSize\0loadedSize"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizAttachmentListViewItem[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    2,   30,    2, 0x0a /* Public */,
       7,    3,   35,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4, QMetaType::Bool,    5,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::Int,    8,    9,   10,

       0        // eod
};

void WizAttachmentListViewItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizAttachmentListViewItem *_t = static_cast<WizAttachmentListViewItem *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateRequet(); break;
        case 1: _t->on_downloadFinished((*reinterpret_cast< const WIZOBJECTDATA(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 2: _t->on_downloadProgress((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizAttachmentListViewItem::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizAttachmentListViewItem::updateRequet)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizAttachmentListViewItem::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizAttachmentListViewItem.data,
      qt_meta_data_WizAttachmentListViewItem,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizAttachmentListViewItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizAttachmentListViewItem::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizAttachmentListViewItem.stringdata0))
        return static_cast<void*>(const_cast< WizAttachmentListViewItem*>(this));
    if (!strcmp(_clname, "QListWidgetItem"))
        return static_cast< QListWidgetItem*>(const_cast< WizAttachmentListViewItem*>(this));
    return QObject::qt_metacast(_clname);
}

int WizAttachmentListViewItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizAttachmentListViewItem::updateRequet()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_WizAttachmentListView_t {
    QByteArrayData data[13];
    char stringdata0[245];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizAttachmentListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizAttachmentListView_t qt_meta_stringdata_WizAttachmentListView = {
    {
QT_MOC_LITERAL(0, 0, 21), // "WizAttachmentListView"
QT_MOC_LITERAL(1, 22, 12), // "closeRequest"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 23), // "on_action_addAttachment"
QT_MOC_LITERAL(4, 60, 26), // "on_action_saveAttachmentAs"
QT_MOC_LITERAL(5, 87, 24), // "on_action_openAttachment"
QT_MOC_LITERAL(6, 112, 26), // "on_action_deleteAttachment"
QT_MOC_LITERAL(7, 139, 27), // "on_action_attachmentHistory"
QT_MOC_LITERAL(8, 167, 25), // "on_list_itemDoubleClicked"
QT_MOC_LITERAL(9, 193, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(10, 210, 4), // "item"
QT_MOC_LITERAL(11, 215, 12), // "forceRepaint"
QT_MOC_LITERAL(12, 228, 16) // "resetAttachments"

    },
    "WizAttachmentListView\0closeRequest\0\0"
    "on_action_addAttachment\0"
    "on_action_saveAttachmentAs\0"
    "on_action_openAttachment\0"
    "on_action_deleteAttachment\0"
    "on_action_attachmentHistory\0"
    "on_list_itemDoubleClicked\0QListWidgetItem*\0"
    "item\0forceRepaint\0resetAttachments"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizAttachmentListView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    1,   65,    2, 0x0a /* Public */,
      11,    0,   68,    2, 0x0a /* Public */,
      12,    0,   69,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizAttachmentListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizAttachmentListView *_t = static_cast<WizAttachmentListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeRequest(); break;
        case 1: _t->on_action_addAttachment(); break;
        case 2: _t->on_action_saveAttachmentAs(); break;
        case 3: _t->on_action_openAttachment(); break;
        case 4: _t->on_action_deleteAttachment(); break;
        case 5: _t->on_action_attachmentHistory(); break;
        case 6: _t->on_list_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 7: _t->forceRepaint(); break;
        case 8: _t->resetAttachments(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizAttachmentListView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizAttachmentListView::closeRequest)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizAttachmentListView::staticMetaObject = {
    { &WizMultiLineListWidget::staticMetaObject, qt_meta_stringdata_WizAttachmentListView.data,
      qt_meta_data_WizAttachmentListView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizAttachmentListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizAttachmentListView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizAttachmentListView.stringdata0))
        return static_cast<void*>(const_cast< WizAttachmentListView*>(this));
    return WizMultiLineListWidget::qt_metacast(_clname);
}

int WizAttachmentListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizMultiLineListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void WizAttachmentListView::closeRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_WizAttachmentListWidget_t {
    QByteArrayData data[5];
    char stringdata0[97];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizAttachmentListWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizAttachmentListWidget_t qt_meta_stringdata_WizAttachmentListWidget = {
    {
QT_MOC_LITERAL(0, 0, 23), // "WizAttachmentListWidget"
QT_MOC_LITERAL(1, 24, 19), // "widgetStatusChanged"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 24), // "on_addAttachment_clicked"
QT_MOC_LITERAL(4, 70, 26) // "on_attachList_closeRequest"

    },
    "WizAttachmentListWidget\0widgetStatusChanged\0"
    "\0on_addAttachment_clicked\0"
    "on_attachList_closeRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizAttachmentListWidget[] = {

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
       1,    0,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   30,    2, 0x0a /* Public */,
       4,    0,   31,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizAttachmentListWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizAttachmentListWidget *_t = static_cast<WizAttachmentListWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->widgetStatusChanged(); break;
        case 1: _t->on_addAttachment_clicked(); break;
        case 2: _t->on_attachList_closeRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizAttachmentListWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizAttachmentListWidget::widgetStatusChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WizAttachmentListWidget::staticMetaObject = {
    { &WizPopupWidget::staticMetaObject, qt_meta_stringdata_WizAttachmentListWidget.data,
      qt_meta_data_WizAttachmentListWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizAttachmentListWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizAttachmentListWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizAttachmentListWidget.stringdata0))
        return static_cast<void*>(const_cast< WizAttachmentListWidget*>(this));
    return WizPopupWidget::qt_metacast(_clname);
}

int WizAttachmentListWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizPopupWidget::qt_metacall(_c, _id, _a);
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
void WizAttachmentListWidget::widgetStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
