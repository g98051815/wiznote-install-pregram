/****************************************************************************
** Meta object code from reading C++ file 'WizMessageListView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizMessageListView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizMessageListView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizSortFilterProxyModel_t {
    QByteArrayData data[1];
    char stringdata0[24];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizSortFilterProxyModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizSortFilterProxyModel_t qt_meta_stringdata_WizSortFilterProxyModel = {
    {
QT_MOC_LITERAL(0, 0, 23) // "WizSortFilterProxyModel"

    },
    "WizSortFilterProxyModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizSortFilterProxyModel[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

void WizSortFilterProxyModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

const QMetaObject WizSortFilterProxyModel::staticMetaObject = {
    { &QSortFilterProxyModel::staticMetaObject, qt_meta_stringdata_WizSortFilterProxyModel.data,
      qt_meta_data_WizSortFilterProxyModel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizSortFilterProxyModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizSortFilterProxyModel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizSortFilterProxyModel.stringdata0))
        return static_cast<void*>(const_cast< WizSortFilterProxyModel*>(this));
    return QSortFilterProxyModel::qt_metacast(_clname);
}

int WizSortFilterProxyModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSortFilterProxyModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    return _id;
}
struct qt_meta_stringdata_WizMessageSenderSelector_t {
    QByteArrayData data[8];
    char stringdata0[114];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizMessageSenderSelector_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizMessageSenderSelector_t qt_meta_stringdata_WizMessageSenderSelector = {
    {
QT_MOC_LITERAL(0, 0, 24), // "WizMessageSenderSelector"
QT_MOC_LITERAL(1, 25, 14), // "senderSelected"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 8), // "userGUID"
QT_MOC_LITERAL(4, 50, 9), // "userAlias"
QT_MOC_LITERAL(5, 60, 23), // "on_selectorItem_clicked"
QT_MOC_LITERAL(6, 84, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(7, 101, 12) // "selectorItem"

    },
    "WizMessageSenderSelector\0senderSelected\0"
    "\0userGUID\0userAlias\0on_selectorItem_clicked\0"
    "QListWidgetItem*\0selectorItem"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizMessageSenderSelector[] = {

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
       1,    2,   24,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    1,   29,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

void WizMessageSenderSelector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizMessageSenderSelector *_t = static_cast<WizMessageSenderSelector *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->senderSelected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 1: _t->on_selectorItem_clicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizMessageSenderSelector::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizMessageSenderSelector::senderSelected)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizMessageSenderSelector::staticMetaObject = {
    { &WizPopupWidget::staticMetaObject, qt_meta_stringdata_WizMessageSenderSelector.data,
      qt_meta_data_WizMessageSenderSelector,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizMessageSenderSelector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizMessageSenderSelector::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizMessageSenderSelector.stringdata0))
        return static_cast<void*>(const_cast< WizMessageSenderSelector*>(this));
    return WizPopupWidget::qt_metacast(_clname);
}

int WizMessageSenderSelector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizPopupWidget::qt_metacall(_c, _id, _a);
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
void WizMessageSenderSelector::senderSelected(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WizClickableLabel_t {
    QByteArrayData data[3];
    char stringdata0[32];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizClickableLabel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizClickableLabel_t qt_meta_stringdata_WizClickableLabel = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WizClickableLabel"
QT_MOC_LITERAL(1, 18, 12), // "labelClicked"
QT_MOC_LITERAL(2, 31, 0) // ""

    },
    "WizClickableLabel\0labelClicked\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizClickableLabel[] = {

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
       1,    0,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

void WizClickableLabel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizClickableLabel *_t = static_cast<WizClickableLabel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->labelClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizClickableLabel::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizClickableLabel::labelClicked)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WizClickableLabel::staticMetaObject = {
    { &QLabel::staticMetaObject, qt_meta_stringdata_WizClickableLabel.data,
      qt_meta_data_WizClickableLabel,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizClickableLabel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizClickableLabel::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizClickableLabel.stringdata0))
        return static_cast<void*>(const_cast< WizClickableLabel*>(this));
    return QLabel::qt_metacast(_clname);
}

int WizClickableLabel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QLabel::qt_metacall(_c, _id, _a);
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
void WizClickableLabel::labelClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
struct qt_meta_stringdata_WizMessageListTitleBar_t {
    QByteArrayData data[14];
    char stringdata0[244];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizMessageListTitleBar_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizMessageListTitleBar_t qt_meta_stringdata_WizMessageListTitleBar = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WizMessageListTitleBar"
QT_MOC_LITERAL(1, 23, 30), // "messageSelector_senderSelected"
QT_MOC_LITERAL(2, 54, 0), // ""
QT_MOC_LITERAL(3, 55, 8), // "userGUID"
QT_MOC_LITERAL(4, 64, 26), // "markAllMessageRead_request"
QT_MOC_LITERAL(5, 91, 11), // "removeItems"
QT_MOC_LITERAL(6, 103, 18), // "on_message_created"
QT_MOC_LITERAL(7, 122, 14), // "WIZMESSAGEDATA"
QT_MOC_LITERAL(8, 137, 3), // "msg"
QT_MOC_LITERAL(9, 141, 18), // "on_sender_selected"
QT_MOC_LITERAL(10, 160, 9), // "userAlias"
QT_MOC_LITERAL(11, 170, 27), // "on_userSelectButton_clicked"
QT_MOC_LITERAL(12, 198, 28), // "on_markAllReadbutton_clicked"
QT_MOC_LITERAL(13, 227, 16) // "showUserSelector"

    },
    "WizMessageListTitleBar\0"
    "messageSelector_senderSelected\0\0"
    "userGUID\0markAllMessageRead_request\0"
    "removeItems\0on_message_created\0"
    "WIZMESSAGEDATA\0msg\0on_sender_selected\0"
    "userAlias\0on_userSelectButton_clicked\0"
    "on_markAllReadbutton_clicked\0"
    "showUserSelector"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizMessageListTitleBar[] = {

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
       4,    1,   52,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   55,    2, 0x0a /* Public */,
       9,    2,   58,    2, 0x0a /* Public */,
      11,    0,   63,    2, 0x0a /* Public */,
      12,    0,   64,    2, 0x0a /* Public */,
      13,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizMessageListTitleBar::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizMessageListTitleBar *_t = static_cast<WizMessageListTitleBar *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->messageSelector_senderSelected((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->markAllMessageRead_request((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->on_message_created((*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[1]))); break;
        case 3: _t->on_sender_selected((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->on_userSelectButton_clicked(); break;
        case 5: _t->on_markAllReadbutton_clicked(); break;
        case 6: _t->showUserSelector(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizMessageListTitleBar::*_t)(QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizMessageListTitleBar::messageSelector_senderSelected)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizMessageListTitleBar::*_t)(bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizMessageListTitleBar::markAllMessageRead_request)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizMessageListTitleBar::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WizMessageListTitleBar.data,
      qt_meta_data_WizMessageListTitleBar,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizMessageListTitleBar::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizMessageListTitleBar::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizMessageListTitleBar.stringdata0))
        return static_cast<void*>(const_cast< WizMessageListTitleBar*>(this));
    return QWidget::qt_metacast(_clname);
}

int WizMessageListTitleBar::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizMessageListTitleBar::messageSelector_senderSelected(QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizMessageListTitleBar::markAllMessageRead_request(bool _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_WizMessageListView_t {
    QByteArrayData data[39];
    char stringdata0[632];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizMessageListView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizMessageListView_t qt_meta_stringdata_WizMessageListView = {
    {
QT_MOC_LITERAL(0, 0, 18), // "WizMessageListView"
QT_MOC_LITERAL(1, 19, 11), // "sizeChanged"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "nCount"
QT_MOC_LITERAL(4, 39, 20), // "loacteDocumetRequest"
QT_MOC_LITERAL(5, 60, 9), // "strKbGuid"
QT_MOC_LITERAL(6, 70, 7), // "strGuid"
QT_MOC_LITERAL(7, 78, 30), // "viewNoteInSparateWindowRequest"
QT_MOC_LITERAL(8, 109, 15), // "WIZDOCUMENTDATA"
QT_MOC_LITERAL(9, 125, 3), // "doc"
QT_MOC_LITERAL(10, 129, 18), // "viewMessageRequest"
QT_MOC_LITERAL(11, 148, 14), // "WIZMESSAGEDATA"
QT_MOC_LITERAL(12, 163, 3), // "msg"
QT_MOC_LITERAL(13, 167, 21), // "markAllMessagesReaded"
QT_MOC_LITERAL(14, 189, 11), // "removeItems"
QT_MOC_LITERAL(15, 201, 28), // "on_uploadReadStatus_finished"
QT_MOC_LITERAL(16, 230, 3), // "ids"
QT_MOC_LITERAL(17, 234, 30), // "on_uploadDeleteStatus_finished"
QT_MOC_LITERAL(18, 265, 20), // "onCurrentItemChanged"
QT_MOC_LITERAL(19, 286, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(20, 303, 7), // "current"
QT_MOC_LITERAL(21, 311, 8), // "previous"
QT_MOC_LITERAL(22, 320, 13), // "onReadTimeout"
QT_MOC_LITERAL(23, 334, 13), // "onSyncTimeout"
QT_MOC_LITERAL(24, 348, 14), // "onAvatarLoaded"
QT_MOC_LITERAL(25, 363, 9), // "strUserId"
QT_MOC_LITERAL(26, 373, 27), // "on_action_message_mark_read"
QT_MOC_LITERAL(27, 401, 24), // "on_action_message_delete"
QT_MOC_LITERAL(28, 426, 24), // "on_action_message_locate"
QT_MOC_LITERAL(29, 451, 38), // "on_action_message_viewInSepar..."
QT_MOC_LITERAL(30, 490, 18), // "on_message_created"
QT_MOC_LITERAL(31, 509, 19), // "on_message_modified"
QT_MOC_LITERAL(32, 529, 6), // "oldMsg"
QT_MOC_LITERAL(33, 536, 6), // "newMsg"
QT_MOC_LITERAL(34, 543, 18), // "on_message_deleted"
QT_MOC_LITERAL(35, 562, 23), // "on_itemSelectionChanged"
QT_MOC_LITERAL(36, 586, 20), // "on_itemDoubleClicked"
QT_MOC_LITERAL(37, 607, 4), // "item"
QT_MOC_LITERAL(38, 612, 19) // "clearRightMenuFocus"

    },
    "WizMessageListView\0sizeChanged\0\0nCount\0"
    "loacteDocumetRequest\0strKbGuid\0strGuid\0"
    "viewNoteInSparateWindowRequest\0"
    "WIZDOCUMENTDATA\0doc\0viewMessageRequest\0"
    "WIZMESSAGEDATA\0msg\0markAllMessagesReaded\0"
    "removeItems\0on_uploadReadStatus_finished\0"
    "ids\0on_uploadDeleteStatus_finished\0"
    "onCurrentItemChanged\0QListWidgetItem*\0"
    "current\0previous\0onReadTimeout\0"
    "onSyncTimeout\0onAvatarLoaded\0strUserId\0"
    "on_action_message_mark_read\0"
    "on_action_message_delete\0"
    "on_action_message_locate\0"
    "on_action_message_viewInSeparateWindow\0"
    "on_message_created\0on_message_modified\0"
    "oldMsg\0newMsg\0on_message_deleted\0"
    "on_itemSelectionChanged\0on_itemDoubleClicked\0"
    "item\0clearRightMenuFocus"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizMessageListView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  119,    2, 0x06 /* Public */,
       4,    2,  122,    2, 0x06 /* Public */,
       7,    1,  127,    2, 0x06 /* Public */,
      10,    1,  130,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      13,    1,  133,    2, 0x0a /* Public */,
      15,    1,  136,    2, 0x0a /* Public */,
      17,    1,  139,    2, 0x0a /* Public */,
      18,    2,  142,    2, 0x08 /* Private */,
      22,    0,  147,    2, 0x08 /* Private */,
      23,    0,  148,    2, 0x08 /* Private */,
      24,    1,  149,    2, 0x08 /* Private */,
      26,    0,  152,    2, 0x08 /* Private */,
      27,    0,  153,    2, 0x08 /* Private */,
      28,    0,  154,    2, 0x08 /* Private */,
      29,    0,  155,    2, 0x08 /* Private */,
      30,    1,  156,    2, 0x08 /* Private */,
      31,    2,  159,    2, 0x08 /* Private */,
      34,    1,  164,    2, 0x08 /* Private */,
      35,    0,  167,    2, 0x08 /* Private */,
      36,    1,  168,    2, 0x08 /* Private */,
      38,    0,  171,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 11,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 19,   20,   21,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 11, 0x80000000 | 11,   32,   33,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19,   37,
    QMetaType::Void,

       0        // eod
};

void WizMessageListView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizMessageListView *_t = static_cast<WizMessageListView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sizeChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->loacteDocumetRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 2: _t->viewNoteInSparateWindowRequest((*reinterpret_cast< const WIZDOCUMENTDATA(*)>(_a[1]))); break;
        case 3: _t->viewMessageRequest((*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[1]))); break;
        case 4: _t->markAllMessagesReaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_uploadReadStatus_finished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->on_uploadDeleteStatus_finished((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->onCurrentItemChanged((*reinterpret_cast< QListWidgetItem*(*)>(_a[1])),(*reinterpret_cast< QListWidgetItem*(*)>(_a[2]))); break;
        case 8: _t->onReadTimeout(); break;
        case 9: _t->onSyncTimeout(); break;
        case 10: _t->onAvatarLoaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 11: _t->on_action_message_mark_read(); break;
        case 12: _t->on_action_message_delete(); break;
        case 13: _t->on_action_message_locate(); break;
        case 14: _t->on_action_message_viewInSeparateWindow(); break;
        case 15: _t->on_message_created((*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[1]))); break;
        case 16: _t->on_message_modified((*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[1])),(*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[2]))); break;
        case 17: _t->on_message_deleted((*reinterpret_cast< const WIZMESSAGEDATA(*)>(_a[1]))); break;
        case 18: _t->on_itemSelectionChanged(); break;
        case 19: _t->on_itemDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        case 20: _t->clearRightMenuFocus(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizMessageListView::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizMessageListView::sizeChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizMessageListView::*_t)(const QString , const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizMessageListView::loacteDocumetRequest)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizMessageListView::*_t)(const WIZDOCUMENTDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizMessageListView::viewNoteInSparateWindowRequest)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizMessageListView::*_t)(const WIZMESSAGEDATA & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizMessageListView::viewMessageRequest)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject WizMessageListView::staticMetaObject = {
    { &QListWidget::staticMetaObject, qt_meta_stringdata_WizMessageListView.data,
      qt_meta_data_WizMessageListView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizMessageListView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizMessageListView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizMessageListView.stringdata0))
        return static_cast<void*>(const_cast< WizMessageListView*>(this));
    return QListWidget::qt_metacast(_clname);
}

int WizMessageListView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QListWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void WizMessageListView::sizeChanged(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizMessageListView::loacteDocumetRequest(const QString _t1, const QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizMessageListView::viewNoteInSparateWindowRequest(const WIZDOCUMENTDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizMessageListView::viewMessageRequest(const WIZMESSAGEDATA & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_END_MOC_NAMESPACE
