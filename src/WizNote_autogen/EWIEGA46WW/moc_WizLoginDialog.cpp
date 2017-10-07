/****************************************************************************
** Meta object code from reading C++ file 'WizLoginDialog.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizLoginDialog.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizLoginDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizOEMDownloader_t {
    QByteArrayData data[18];
    char stringdata0[213];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizOEMDownloader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizOEMDownloader_t qt_meta_stringdata_WizOEMDownloader = {
    {
QT_MOC_LITERAL(0, 0, 16), // "WizOEMDownloader"
QT_MOC_LITERAL(1, 17, 21), // "oemSettingsDownloaded"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 7), // "setting"
QT_MOC_LITERAL(4, 48, 14), // "logoDownloaded"
QT_MOC_LITERAL(5, 63, 8), // "logoFile"
QT_MOC_LITERAL(6, 72, 12), // "errorMessage"
QT_MOC_LITERAL(7, 85, 5), // "error"
QT_MOC_LITERAL(8, 91, 20), // "checkLicenceFinished"
QT_MOC_LITERAL(9, 112, 6), // "result"
QT_MOC_LITERAL(10, 119, 8), // "settings"
QT_MOC_LITERAL(11, 128, 11), // "setServerIp"
QT_MOC_LITERAL(12, 140, 2), // "ip"
QT_MOC_LITERAL(13, 143, 15), // "downloadOEMLogo"
QT_MOC_LITERAL(14, 159, 6), // "strUrl"
QT_MOC_LITERAL(15, 166, 19), // "downloadOEMSettings"
QT_MOC_LITERAL(16, 186, 18), // "checkServerLicence"
QT_MOC_LITERAL(17, 205, 7) // "licence"

    },
    "WizOEMDownloader\0oemSettingsDownloaded\0"
    "\0setting\0logoDownloaded\0logoFile\0"
    "errorMessage\0error\0checkLicenceFinished\0"
    "result\0settings\0setServerIp\0ip\0"
    "downloadOEMLogo\0strUrl\0downloadOEMSettings\0"
    "checkServerLicence\0licence"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizOEMDownloader[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       4,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,
       8,    2,   63,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      11,    1,   68,    2, 0x0a /* Public */,
      13,    1,   71,    2, 0x0a /* Public */,
      15,    0,   74,    2, 0x0a /* Public */,
      16,    1,   75,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,    9,   10,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   17,

       0        // eod
};

void WizOEMDownloader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizOEMDownloader *_t = static_cast<WizOEMDownloader *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->oemSettingsDownloaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->logoDownloaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->errorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->checkLicenceFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 4: _t->setServerIp((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 5: _t->downloadOEMLogo((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 6: _t->downloadOEMSettings(); break;
        case 7: _t->checkServerLicence((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizOEMDownloader::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizOEMDownloader::oemSettingsDownloaded)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizOEMDownloader::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizOEMDownloader::logoDownloaded)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizOEMDownloader::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizOEMDownloader::errorMessage)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizOEMDownloader::*_t)(bool , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizOEMDownloader::checkLicenceFinished)) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject WizOEMDownloader::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_WizOEMDownloader.data,
      qt_meta_data_WizOEMDownloader,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizOEMDownloader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizOEMDownloader::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizOEMDownloader.stringdata0))
        return static_cast<void*>(const_cast< WizOEMDownloader*>(this));
    return QObject::qt_metacast(_clname);
}

int WizOEMDownloader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WizOEMDownloader::oemSettingsDownloaded(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizOEMDownloader::logoDownloaded(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizOEMDownloader::errorMessage(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void WizOEMDownloader::checkLicenceFinished(bool _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
struct qt_meta_stringdata_WizActionWidget_t {
    QByteArrayData data[4];
    char stringdata0[48];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizActionWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizActionWidget_t qt_meta_stringdata_WizActionWidget = {
    {
QT_MOC_LITERAL(0, 0, 15), // "WizActionWidget"
QT_MOC_LITERAL(1, 16, 16), // "delButtonClicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 13) // "widgetClicked"

    },
    "WizActionWidget\0delButtonClicked\0\0"
    "widgetClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizActionWidget[] = {

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
       1,    0,   24,    2, 0x06 /* Public */,
       3,    0,   25,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizActionWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizActionWidget *_t = static_cast<WizActionWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->delButtonClicked(); break;
        case 1: _t->widgetClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizActionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizActionWidget::delButtonClicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizActionWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizActionWidget::widgetClicked)) {
                *result = 1;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject WizActionWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_WizActionWidget.data,
      qt_meta_data_WizActionWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizActionWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizActionWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizActionWidget.stringdata0))
        return static_cast<void*>(const_cast< WizActionWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int WizActionWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
void WizActionWidget::delButtonClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void WizActionWidget::widgetClicked()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}
struct qt_meta_stringdata_WizUserItemAction_t {
    QByteArrayData data[7];
    char stringdata0[100];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizUserItemAction_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizUserItemAction_t qt_meta_stringdata_WizUserItemAction = {
    {
QT_MOC_LITERAL(0, 0, 17), // "WizUserItemAction"
QT_MOC_LITERAL(1, 18, 17), // "userDeleteRequest"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 12), // "WizLocalUser"
QT_MOC_LITERAL(4, 50, 12), // "userSelected"
QT_MOC_LITERAL(5, 63, 19), // "on_delButtonClicked"
QT_MOC_LITERAL(6, 83, 16) // "on_widgetClicked"

    },
    "WizUserItemAction\0userDeleteRequest\0"
    "\0WizLocalUser\0userSelected\0"
    "on_delButtonClicked\0on_widgetClicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizUserItemAction[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   40,    2, 0x08 /* Private */,
       6,    0,   41,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    3,
    QMetaType::Void, 0x80000000 | 3,    3,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizUserItemAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizUserItemAction *_t = static_cast<WizUserItemAction *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->userDeleteRequest((*reinterpret_cast< const WizLocalUser(*)>(_a[1]))); break;
        case 1: _t->userSelected((*reinterpret_cast< const WizLocalUser(*)>(_a[1]))); break;
        case 2: _t->on_delButtonClicked(); break;
        case 3: _t->on_widgetClicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizUserItemAction::*_t)(const WizLocalUser & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizUserItemAction::userDeleteRequest)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizUserItemAction::*_t)(const WizLocalUser & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizUserItemAction::userSelected)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject WizUserItemAction::staticMetaObject = {
    { &QWidgetAction::staticMetaObject, qt_meta_stringdata_WizUserItemAction.data,
      qt_meta_data_WizUserItemAction,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizUserItemAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizUserItemAction::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizUserItemAction.stringdata0))
        return static_cast<void*>(const_cast< WizUserItemAction*>(this));
    return QWidgetAction::qt_metacast(_clname);
}

int WizUserItemAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidgetAction::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void WizUserItemAction::userDeleteRequest(const WizLocalUser & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizUserItemAction::userSelected(const WizLocalUser & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_WizLoginDialog_t {
    QByteArrayData data[66];
    char stringdata0[1131];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizLoginDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizLoginDialog_t qt_meta_stringdata_WizLoginDialog = {
    {
QT_MOC_LITERAL(0, 0, 14), // "WizLoginDialog"
QT_MOC_LITERAL(1, 15, 15), // "snsLoginSuccess"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 6), // "strUrl"
QT_MOC_LITERAL(4, 39, 19), // "wizBoxSearchRequest"
QT_MOC_LITERAL(5, 59, 4), // "port"
QT_MOC_LITERAL(6, 64, 7), // "message"
QT_MOC_LITERAL(7, 72, 17), // "wizServerSelected"
QT_MOC_LITERAL(8, 90, 20), // "wizBoxServerSelected"
QT_MOC_LITERAL(9, 111, 17), // "accountCheckStart"
QT_MOC_LITERAL(10, 129, 20), // "accountCheckFinished"
QT_MOC_LITERAL(11, 150, 19), // "logoDownloadRequest"
QT_MOC_LITERAL(12, 170, 25), // "checkServerLicenceRequest"
QT_MOC_LITERAL(13, 196, 7), // "licence"
QT_MOC_LITERAL(14, 204, 20), // "on_btn_close_clicked"
QT_MOC_LITERAL(15, 225, 29), // "on_btn_changeToSignin_clicked"
QT_MOC_LITERAL(16, 255, 28), // "on_btn_changeToLogin_clicked"
QT_MOC_LITERAL(17, 284, 27), // "on_btn_proxysetting_clicked"
QT_MOC_LITERAL(18, 312, 23), // "on_btn_snsLogin_clicked"
QT_MOC_LITERAL(19, 336, 24), // "on_btn_fogetpass_clicked"
QT_MOC_LITERAL(20, 361, 20), // "on_btn_login_clicked"
QT_MOC_LITERAL(21, 382, 21), // "on_btn_singUp_clicked"
QT_MOC_LITERAL(22, 404, 19), // "onLoginInputChanged"
QT_MOC_LITERAL(23, 424, 24), // "onSignUpInputDataChanged"
QT_MOC_LITERAL(24, 449, 21), // "serverListMenuClicked"
QT_MOC_LITERAL(25, 471, 8), // "QAction*"
QT_MOC_LITERAL(26, 480, 6), // "action"
QT_MOC_LITERAL(27, 487, 16), // "showUserListMenu"
QT_MOC_LITERAL(28, 504, 18), // "showServerListMenu"
QT_MOC_LITERAL(29, 523, 15), // "onTokenAcquired"
QT_MOC_LITERAL(30, 539, 8), // "strToken"
QT_MOC_LITERAL(31, 548, 25), // "onRegisterAccountFinished"
QT_MOC_LITERAL(32, 574, 7), // "bFinish"
QT_MOC_LITERAL(33, 582, 29), // "on_cbx_remberPassword_toggled"
QT_MOC_LITERAL(34, 612, 7), // "checked"
QT_MOC_LITERAL(35, 620, 24), // "on_cbx_autologin_toggled"
QT_MOC_LITERAL(36, 645, 16), // "onUserNameEdited"
QT_MOC_LITERAL(37, 662, 4), // "arg1"
QT_MOC_LITERAL(38, 667, 19), // "onDeleteUserRequest"
QT_MOC_LITERAL(39, 687, 12), // "WizLocalUser"
QT_MOC_LITERAL(40, 700, 4), // "user"
QT_MOC_LITERAL(41, 705, 14), // "onUserSelected"
QT_MOC_LITERAL(42, 720, 19), // "onSNSPageUrlChanged"
QT_MOC_LITERAL(43, 740, 3), // "url"
QT_MOC_LITERAL(44, 744, 17), // "onSNSLoginSuccess"
QT_MOC_LITERAL(45, 762, 16), // "onWizBoxResponse"
QT_MOC_LITERAL(46, 779, 12), // "boardAddress"
QT_MOC_LITERAL(47, 792, 13), // "serverAddress"
QT_MOC_LITERAL(48, 806, 15), // "responseMessage"
QT_MOC_LITERAL(49, 822, 24), // "onWizBoxSearchingTimeOut"
QT_MOC_LITERAL(50, 847, 23), // "onOEMSettingsDownloaded"
QT_MOC_LITERAL(51, 871, 8), // "settings"
QT_MOC_LITERAL(52, 880, 19), // "onOEMLogoDownloaded"
QT_MOC_LITERAL(53, 900, 8), // "logoFile"
QT_MOC_LITERAL(54, 909, 19), // "showOEMErrorMessage"
QT_MOC_LITERAL(55, 929, 8), // "stterror"
QT_MOC_LITERAL(56, 938, 28), // "onCheckServerLicenceFinished"
QT_MOC_LITERAL(57, 967, 6), // "result"
QT_MOC_LITERAL(58, 974, 22), // "onWizLogInStateEntered"
QT_MOC_LITERAL(59, 997, 25), // "onWizBoxLogInStateEntered"
QT_MOC_LITERAL(60, 1023, 23), // "onWizSignUpStateEntered"
QT_MOC_LITERAL(61, 1047, 17), // "onLogInCheckStart"
QT_MOC_LITERAL(62, 1065, 15), // "onLogInCheckEnd"
QT_MOC_LITERAL(63, 1081, 18), // "onSignUpCheckStart"
QT_MOC_LITERAL(64, 1100, 16), // "onSignUpCheckEnd"
QT_MOC_LITERAL(65, 1117, 13) // "resetUserList"

    },
    "WizLoginDialog\0snsLoginSuccess\0\0strUrl\0"
    "wizBoxSearchRequest\0port\0message\0"
    "wizServerSelected\0wizBoxServerSelected\0"
    "accountCheckStart\0accountCheckFinished\0"
    "logoDownloadRequest\0checkServerLicenceRequest\0"
    "licence\0on_btn_close_clicked\0"
    "on_btn_changeToSignin_clicked\0"
    "on_btn_changeToLogin_clicked\0"
    "on_btn_proxysetting_clicked\0"
    "on_btn_snsLogin_clicked\0"
    "on_btn_fogetpass_clicked\0on_btn_login_clicked\0"
    "on_btn_singUp_clicked\0onLoginInputChanged\0"
    "onSignUpInputDataChanged\0serverListMenuClicked\0"
    "QAction*\0action\0showUserListMenu\0"
    "showServerListMenu\0onTokenAcquired\0"
    "strToken\0onRegisterAccountFinished\0"
    "bFinish\0on_cbx_remberPassword_toggled\0"
    "checked\0on_cbx_autologin_toggled\0"
    "onUserNameEdited\0arg1\0onDeleteUserRequest\0"
    "WizLocalUser\0user\0onUserSelected\0"
    "onSNSPageUrlChanged\0url\0onSNSLoginSuccess\0"
    "onWizBoxResponse\0boardAddress\0"
    "serverAddress\0responseMessage\0"
    "onWizBoxSearchingTimeOut\0"
    "onOEMSettingsDownloaded\0settings\0"
    "onOEMLogoDownloaded\0logoFile\0"
    "showOEMErrorMessage\0stterror\0"
    "onCheckServerLicenceFinished\0result\0"
    "onWizLogInStateEntered\0onWizBoxLogInStateEntered\0"
    "onWizSignUpStateEntered\0onLogInCheckStart\0"
    "onLogInCheckEnd\0onSignUpCheckStart\0"
    "onSignUpCheckEnd\0resetUserList"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizLoginDialog[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      44,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  234,    2, 0x06 /* Public */,
       4,    2,  237,    2, 0x06 /* Public */,
       7,    0,  242,    2, 0x06 /* Public */,
       8,    0,  243,    2, 0x06 /* Public */,
       9,    0,  244,    2, 0x06 /* Public */,
      10,    0,  245,    2, 0x06 /* Public */,
      11,    1,  246,    2, 0x06 /* Public */,
      12,    1,  249,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  252,    2, 0x08 /* Private */,
      15,    0,  253,    2, 0x08 /* Private */,
      16,    0,  254,    2, 0x08 /* Private */,
      17,    0,  255,    2, 0x08 /* Private */,
      18,    0,  256,    2, 0x08 /* Private */,
      19,    0,  257,    2, 0x08 /* Private */,
      20,    0,  258,    2, 0x08 /* Private */,
      21,    0,  259,    2, 0x08 /* Private */,
      22,    0,  260,    2, 0x08 /* Private */,
      23,    0,  261,    2, 0x08 /* Private */,
      24,    1,  262,    2, 0x08 /* Private */,
      27,    0,  265,    2, 0x08 /* Private */,
      28,    0,  266,    2, 0x08 /* Private */,
      29,    1,  267,    2, 0x08 /* Private */,
      31,    1,  270,    2, 0x08 /* Private */,
      33,    1,  273,    2, 0x08 /* Private */,
      35,    1,  276,    2, 0x08 /* Private */,
      36,    1,  279,    2, 0x08 /* Private */,
      38,    1,  282,    2, 0x08 /* Private */,
      41,    1,  285,    2, 0x08 /* Private */,
      42,    1,  288,    2, 0x08 /* Private */,
      44,    1,  291,    2, 0x08 /* Private */,
      45,    3,  294,    2, 0x08 /* Private */,
      49,    0,  301,    2, 0x08 /* Private */,
      50,    1,  302,    2, 0x08 /* Private */,
      52,    1,  305,    2, 0x08 /* Private */,
      54,    1,  308,    2, 0x08 /* Private */,
      56,    2,  311,    2, 0x08 /* Private */,
      58,    0,  316,    2, 0x08 /* Private */,
      59,    0,  317,    2, 0x08 /* Private */,
      60,    0,  318,    2, 0x08 /* Private */,
      61,    0,  319,    2, 0x08 /* Private */,
      62,    0,  320,    2, 0x08 /* Private */,
      63,    0,  321,    2, 0x08 /* Private */,
      64,    0,  322,    2, 0x08 /* Private */,
      65,    0,  323,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void, QMetaType::Bool,   32,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::Bool,   34,
    QMetaType::Void, QMetaType::QString,   37,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, QMetaType::QUrl,   43,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   46,   47,   48,
    QMetaType::Void,
    QMetaType::Bool, QMetaType::QString,   51,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   57,   51,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void WizLoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizLoginDialog *_t = static_cast<WizLoginDialog *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->snsLoginSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->wizBoxSearchRequest((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 2: _t->wizServerSelected(); break;
        case 3: _t->wizBoxServerSelected(); break;
        case 4: _t->accountCheckStart(); break;
        case 5: _t->accountCheckFinished(); break;
        case 6: _t->logoDownloadRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 7: _t->checkServerLicenceRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 8: _t->on_btn_close_clicked(); break;
        case 9: _t->on_btn_changeToSignin_clicked(); break;
        case 10: _t->on_btn_changeToLogin_clicked(); break;
        case 11: _t->on_btn_proxysetting_clicked(); break;
        case 12: _t->on_btn_snsLogin_clicked(); break;
        case 13: _t->on_btn_fogetpass_clicked(); break;
        case 14: _t->on_btn_login_clicked(); break;
        case 15: _t->on_btn_singUp_clicked(); break;
        case 16: _t->onLoginInputChanged(); break;
        case 17: _t->onSignUpInputDataChanged(); break;
        case 18: _t->serverListMenuClicked((*reinterpret_cast< QAction*(*)>(_a[1]))); break;
        case 19: _t->showUserListMenu(); break;
        case 20: _t->showServerListMenu(); break;
        case 21: _t->onTokenAcquired((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 22: _t->onRegisterAccountFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 23: _t->on_cbx_remberPassword_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 24: _t->on_cbx_autologin_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 25: _t->onUserNameEdited((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 26: _t->onDeleteUserRequest((*reinterpret_cast< const WizLocalUser(*)>(_a[1]))); break;
        case 27: _t->onUserSelected((*reinterpret_cast< const WizLocalUser(*)>(_a[1]))); break;
        case 28: _t->onSNSPageUrlChanged((*reinterpret_cast< const QUrl(*)>(_a[1]))); break;
        case 29: _t->onSNSLoginSuccess((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 30: _t->onWizBoxResponse((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 31: _t->onWizBoxSearchingTimeOut(); break;
        case 32: { bool _r = _t->onOEMSettingsDownloaded((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 33: _t->onOEMLogoDownloaded((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 34: _t->showOEMErrorMessage((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 35: _t->onCheckServerLicenceFinished((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 36: _t->onWizLogInStateEntered(); break;
        case 37: _t->onWizBoxLogInStateEntered(); break;
        case 38: _t->onWizSignUpStateEntered(); break;
        case 39: _t->onLogInCheckStart(); break;
        case 40: _t->onLogInCheckEnd(); break;
        case 41: _t->onSignUpCheckStart(); break;
        case 42: _t->onSignUpCheckEnd(); break;
        case 43: _t->resetUserList(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAction* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizLoginDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizLoginDialog::snsLoginSuccess)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizLoginDialog::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizLoginDialog::wizBoxSearchRequest)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizLoginDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizLoginDialog::wizServerSelected)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizLoginDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizLoginDialog::wizBoxServerSelected)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WizLoginDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizLoginDialog::accountCheckStart)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WizLoginDialog::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizLoginDialog::accountCheckFinished)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WizLoginDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizLoginDialog::logoDownloadRequest)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WizLoginDialog::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizLoginDialog::checkServerLicenceRequest)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject WizLoginDialog::staticMetaObject = {
    { &WizShadowWindow<QDialog>::staticMetaObject, qt_meta_stringdata_WizLoginDialog.data,
      qt_meta_data_WizLoginDialog,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizLoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizLoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizLoginDialog.stringdata0))
        return static_cast<void*>(const_cast< WizLoginDialog*>(this));
    return WizShadowWindow<QDialog>::qt_metacast(_clname);
}

int WizLoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizShadowWindow<QDialog>::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 44)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 44;
    }
    return _id;
}

// SIGNAL 0
void WizLoginDialog::snsLoginSuccess(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizLoginDialog::wizBoxSearchRequest(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void WizLoginDialog::wizServerSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void WizLoginDialog::wizBoxServerSelected()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void WizLoginDialog::accountCheckStart()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}

// SIGNAL 5
void WizLoginDialog::accountCheckFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void WizLoginDialog::logoDownloadRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void WizLoginDialog::checkServerLicenceRequest(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_END_MOC_NAMESPACE
