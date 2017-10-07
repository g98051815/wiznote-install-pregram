/****************************************************************************
** Meta object code from reading C++ file 'WizUserInfoWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/widgets/WizUserInfoWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizUserInfoWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizUserInfoWidget_t {
    QByteArrayData data[15];
    char stringdata0[345];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizUserInfoWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizUserInfoWidget_t qt_meta_stringdata_WizUserInfoWidget = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WizUserInfoWidget"
QT_MOC_LITERAL(1, 18, 13), // "resetUserInfo"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 19), // "on_userInfo_changed"
QT_MOC_LITERAL(4, 53, 20), // "on_userAvatar_loaded"
QT_MOC_LITERAL(5, 74, 7), // "strGUID"
QT_MOC_LITERAL(6, 82, 31), // "on_action_accountInfo_triggered"
QT_MOC_LITERAL(7, 114, 35), // "on_action_accountSettings_tri..."
QT_MOC_LITERAL(8, 150, 30), // "on_action_upgradeVip_triggered"
QT_MOC_LITERAL(9, 181, 32), // "on_action_changeAvatar_triggered"
QT_MOC_LITERAL(10, 214, 31), // "on_action_changeAvatar_uploaded"
QT_MOC_LITERAL(11, 246, 2), // "ok"
QT_MOC_LITERAL(12, 249, 34), // "on_action_viewNotesOnWeb_trig..."
QT_MOC_LITERAL(13, 284, 33), // "on_action_mySharedNotes_trigg..."
QT_MOC_LITERAL(14, 318, 26) // "on_action_logout_triggered"

    },
    "WizUserInfoWidget\0resetUserInfo\0\0"
    "on_userInfo_changed\0on_userAvatar_loaded\0"
    "strGUID\0on_action_accountInfo_triggered\0"
    "on_action_accountSettings_triggered\0"
    "on_action_upgradeVip_triggered\0"
    "on_action_changeAvatar_triggered\0"
    "on_action_changeAvatar_uploaded\0ok\0"
    "on_action_viewNotesOnWeb_triggered\0"
    "on_action_mySharedNotes_triggered\0"
    "on_action_logout_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizUserInfoWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   69,    2, 0x09 /* Protected */,
       3,    0,   70,    2, 0x09 /* Protected */,
       4,    1,   71,    2, 0x09 /* Protected */,
       6,    0,   74,    2, 0x09 /* Protected */,
       7,    0,   75,    2, 0x09 /* Protected */,
       8,    0,   76,    2, 0x09 /* Protected */,
       9,    0,   77,    2, 0x09 /* Protected */,
      10,    1,   78,    2, 0x09 /* Protected */,
      12,    0,   81,    2, 0x09 /* Protected */,
      13,    0,   82,    2, 0x09 /* Protected */,
      14,    0,   83,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizUserInfoWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizUserInfoWidget *_t = static_cast<WizUserInfoWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->resetUserInfo(); break;
        case 1: _t->on_userInfo_changed(); break;
        case 2: _t->on_userAvatar_loaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->on_action_accountInfo_triggered(); break;
        case 4: _t->on_action_accountSettings_triggered(); break;
        case 5: _t->on_action_upgradeVip_triggered(); break;
        case 6: _t->on_action_changeAvatar_triggered(); break;
        case 7: _t->on_action_changeAvatar_uploaded((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_action_viewNotesOnWeb_triggered(); break;
        case 9: _t->on_action_mySharedNotes_triggered(); break;
        case 10: _t->on_action_logout_triggered(); break;
        default: ;
        }
    }
}

const QMetaObject WizUserInfoWidget::staticMetaObject = {
    { &WizUserInfoWidgetBase::staticMetaObject, qt_meta_stringdata_WizUserInfoWidget.data,
      qt_meta_data_WizUserInfoWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizUserInfoWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizUserInfoWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizUserInfoWidget.stringdata0))
        return static_cast<void*>(const_cast< WizUserInfoWidget*>(this));
    return WizUserInfoWidgetBase::qt_metacast(_clname);
}

int WizUserInfoWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizUserInfoWidgetBase::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 11;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
