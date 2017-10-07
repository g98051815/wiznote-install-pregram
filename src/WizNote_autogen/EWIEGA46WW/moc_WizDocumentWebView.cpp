/****************************************************************************
** Meta object code from reading C++ file 'WizDocumentWebView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../WizQTClient/src/WizDocumentWebView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'WizDocumentWebView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_WizDocumentWebViewLoaderThread_t {
    QByteArrayData data[8];
    char stringdata0[91];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizDocumentWebViewLoaderThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizDocumentWebViewLoaderThread_t qt_meta_stringdata_WizDocumentWebViewLoaderThread = {
    {
QT_MOC_LITERAL(0, 0, 30), // "WizDocumentWebViewLoaderThread"
QT_MOC_LITERAL(1, 31, 6), // "loaded"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 6), // "kbGUID"
QT_MOC_LITERAL(4, 46, 7), // "strGUID"
QT_MOC_LITERAL(5, 54, 11), // "strFileName"
QT_MOC_LITERAL(6, 66, 13), // "WizEditorMode"
QT_MOC_LITERAL(7, 80, 10) // "editorMode"

    },
    "WizDocumentWebViewLoaderThread\0loaded\0"
    "\0kbGUID\0strGUID\0strFileName\0WizEditorMode\0"
    "editorMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizDocumentWebViewLoaderThread[] = {

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
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 6,    3,    4,    5,    7,

       0        // eod
};

void WizDocumentWebViewLoaderThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizDocumentWebViewLoaderThread *_t = static_cast<WizDocumentWebViewLoaderThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->loaded((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< WizEditorMode(*)>(_a[4]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizDocumentWebViewLoaderThread::*_t)(const QString , const QString , const QString , WizEditorMode );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebViewLoaderThread::loaded)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizDocumentWebViewLoaderThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WizDocumentWebViewLoaderThread.data,
      qt_meta_data_WizDocumentWebViewLoaderThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizDocumentWebViewLoaderThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizDocumentWebViewLoaderThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizDocumentWebViewLoaderThread.stringdata0))
        return static_cast<void*>(const_cast< WizDocumentWebViewLoaderThread*>(this));
    return QThread::qt_metacast(_clname);
}

int WizDocumentWebViewLoaderThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizDocumentWebViewLoaderThread::loaded(const QString _t1, const QString _t2, const QString _t3, WizEditorMode _t4)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)), const_cast<void*>(reinterpret_cast<const void*>(&_t4)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WizDocumentWebViewSaverThread_t {
    QByteArrayData data[6];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizDocumentWebViewSaverThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizDocumentWebViewSaverThread_t qt_meta_stringdata_WizDocumentWebViewSaverThread = {
    {
QT_MOC_LITERAL(0, 0, 29), // "WizDocumentWebViewSaverThread"
QT_MOC_LITERAL(1, 30, 5), // "saved"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 6), // "kbGUID"
QT_MOC_LITERAL(4, 44, 7), // "strGUID"
QT_MOC_LITERAL(5, 52, 2) // "ok"

    },
    "WizDocumentWebViewSaverThread\0saved\0"
    "\0kbGUID\0strGUID\0ok"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizDocumentWebViewSaverThread[] = {

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
       1,    3,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,    3,    4,    5,

       0        // eod
};

void WizDocumentWebViewSaverThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizDocumentWebViewSaverThread *_t = static_cast<WizDocumentWebViewSaverThread *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->saved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizDocumentWebViewSaverThread::*_t)(const QString , const QString , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebViewSaverThread::saved)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizDocumentWebViewSaverThread::staticMetaObject = {
    { &QThread::staticMetaObject, qt_meta_stringdata_WizDocumentWebViewSaverThread.data,
      qt_meta_data_WizDocumentWebViewSaverThread,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizDocumentWebViewSaverThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizDocumentWebViewSaverThread::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizDocumentWebViewSaverThread.stringdata0))
        return static_cast<void*>(const_cast< WizDocumentWebViewSaverThread*>(this));
    return QThread::qt_metacast(_clname);
}

int WizDocumentWebViewSaverThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void WizDocumentWebViewSaverThread::saved(const QString _t1, const QString _t2, bool _t3)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WizDocumentWebViewPage_t {
    QByteArrayData data[5];
    char stringdata0[54];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizDocumentWebViewPage_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizDocumentWebViewPage_t qt_meta_stringdata_WizDocumentWebViewPage = {
    {
QT_MOC_LITERAL(0, 0, 22), // "WizDocumentWebViewPage"
QT_MOC_LITERAL(1, 23, 15), // "actionTriggered"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 9), // "WebAction"
QT_MOC_LITERAL(4, 50, 3) // "act"

    },
    "WizDocumentWebViewPage\0actionTriggered\0"
    "\0WebAction\0act"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizDocumentWebViewPage[] = {

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
       1,    1,   19,    2, 0x06 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

void WizDocumentWebViewPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizDocumentWebViewPage *_t = static_cast<WizDocumentWebViewPage *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->actionTriggered((*reinterpret_cast< WebAction(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (WizDocumentWebViewPage::*_t)(WebAction );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebViewPage::actionTriggered)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject WizDocumentWebViewPage::staticMetaObject = {
    { &WizWebEnginePage::staticMetaObject, qt_meta_stringdata_WizDocumentWebViewPage.data,
      qt_meta_data_WizDocumentWebViewPage,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizDocumentWebViewPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizDocumentWebViewPage::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizDocumentWebViewPage.stringdata0))
        return static_cast<void*>(const_cast< WizDocumentWebViewPage*>(this));
    return WizWebEnginePage::qt_metacast(_clname);
}

int WizDocumentWebViewPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizWebEnginePage::qt_metacall(_c, _id, _a);
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
void WizDocumentWebViewPage::actionTriggered(WebAction _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_WizDocumentWebView_t {
    QByteArrayData data[111];
    char stringdata0[2168];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_WizDocumentWebView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_WizDocumentWebView_t qt_meta_stringdata_WizDocumentWebView = {
    {
QT_MOC_LITERAL(0, 0, 18), // "WizDocumentWebView"
QT_MOC_LITERAL(1, 19, 13), // "statusChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 12), // "currentStyle"
QT_MOC_LITERAL(4, 47, 19), // "selectAllKeyPressed"
QT_MOC_LITERAL(5, 67, 7), // "focusIn"
QT_MOC_LITERAL(6, 75, 8), // "focusOut"
QT_MOC_LITERAL(7, 84, 22), // "showContextMenuRequest"
QT_MOC_LITERAL(8, 107, 3), // "pos"
QT_MOC_LITERAL(9, 111, 26), // "updateEditorToolBarRequest"
QT_MOC_LITERAL(10, 138, 20), // "viewDocumentFinished"
QT_MOC_LITERAL(11, 159, 26), // "shareDocumentByLinkRequest"
QT_MOC_LITERAL(12, 186, 9), // "strKbGUID"
QT_MOC_LITERAL(13, 196, 7), // "strGUID"
QT_MOC_LITERAL(14, 204, 20), // "clickingTodoCallBack"
QT_MOC_LITERAL(15, 225, 6), // "cancel"
QT_MOC_LITERAL(16, 232, 13), // "needCallAgain"
QT_MOC_LITERAL(17, 246, 18), // "currentHtmlChanged"
QT_MOC_LITERAL(18, 265, 17), // "onActionTriggered"
QT_MOC_LITERAL(19, 283, 25), // "QWebEnginePage::WebAction"
QT_MOC_LITERAL(20, 309, 3), // "act"
QT_MOC_LITERAL(21, 313, 20), // "onEditorLoadFinished"
QT_MOC_LITERAL(22, 334, 2), // "ok"
QT_MOC_LITERAL(23, 337, 19), // "onEditorLinkClicked"
QT_MOC_LITERAL(24, 357, 3), // "url"
QT_MOC_LITERAL(25, 361, 30), // "QWebEnginePage::NavigationType"
QT_MOC_LITERAL(26, 392, 14), // "navigationType"
QT_MOC_LITERAL(27, 407, 11), // "isMainFrame"
QT_MOC_LITERAL(28, 419, 17), // "WizWebEnginePage*"
QT_MOC_LITERAL(29, 437, 4), // "page"
QT_MOC_LITERAL(30, 442, 21), // "onTimerAutoSaveTimout"
QT_MOC_LITERAL(31, 464, 13), // "onTitleEdited"
QT_MOC_LITERAL(32, 478, 8), // "strTitle"
QT_MOC_LITERAL(33, 487, 15), // "onDocumentReady"
QT_MOC_LITERAL(34, 503, 6), // "kbGUID"
QT_MOC_LITERAL(35, 510, 11), // "strFileName"
QT_MOC_LITERAL(36, 522, 13), // "WizEditorMode"
QT_MOC_LITERAL(37, 536, 10), // "editorMode"
QT_MOC_LITERAL(38, 547, 15), // "onDocumentSaved"
QT_MOC_LITERAL(39, 563, 42), // "on_editorCommandExecuteLinkIn..."
QT_MOC_LITERAL(40, 606, 25), // "on_insertCodeHtml_requset"
QT_MOC_LITERAL(41, 632, 10), // "strOldHtml"
QT_MOC_LITERAL(42, 643, 29), // "editorCommandExecuteBackColor"
QT_MOC_LITERAL(43, 673, 5), // "color"
QT_MOC_LITERAL(44, 679, 29), // "editorCommandExecuteForeColor"
QT_MOC_LITERAL(45, 709, 24), // "editorCommandExecuteBold"
QT_MOC_LITERAL(46, 734, 26), // "editorCommandExecuteItalic"
QT_MOC_LITERAL(47, 761, 29), // "editorCommandExecuteUnderLine"
QT_MOC_LITERAL(48, 791, 33), // "editorCommandExecuteStrikeThr..."
QT_MOC_LITERAL(49, 825, 30), // "editorCommandExecuteLinkInsert"
QT_MOC_LITERAL(50, 856, 30), // "editorCommandExecuteLinkRemove"
QT_MOC_LITERAL(51, 887, 31), // "editorCommandExecuteFindReplace"
QT_MOC_LITERAL(52, 919, 7), // "findPre"
QT_MOC_LITERAL(53, 927, 6), // "strTxt"
QT_MOC_LITERAL(54, 934, 14), // "bCasesensitive"
QT_MOC_LITERAL(55, 949, 8), // "findNext"
QT_MOC_LITERAL(56, 958, 14), // "replaceCurrent"
QT_MOC_LITERAL(57, 973, 9), // "strSource"
QT_MOC_LITERAL(58, 983, 9), // "strTarget"
QT_MOC_LITERAL(59, 993, 18), // "replaceAndFindNext"
QT_MOC_LITERAL(60, 1012, 10), // "replaceAll"
QT_MOC_LITERAL(61, 1023, 26), // "editorCommandExecuteIndent"
QT_MOC_LITERAL(62, 1050, 27), // "editorCommandExecuteOutdent"
QT_MOC_LITERAL(63, 1078, 31), // "editorCommandExecuteJustifyLeft"
QT_MOC_LITERAL(64, 1110, 32), // "editorCommandExecuteJustifyRight"
QT_MOC_LITERAL(65, 1143, 33), // "editorCommandExecuteJustifyCe..."
QT_MOC_LITERAL(66, 1177, 34), // "editorCommandExecuteJustifyJu..."
QT_MOC_LITERAL(67, 1212, 37), // "editorCommandExecuteInsertOrd..."
QT_MOC_LITERAL(68, 1250, 39), // "editorCommandExecuteInsertUno..."
QT_MOC_LITERAL(69, 1290, 31), // "editorCommandExecuteTableInsert"
QT_MOC_LITERAL(70, 1322, 3), // "row"
QT_MOC_LITERAL(71, 1326, 3), // "col"
QT_MOC_LITERAL(72, 1330, 30), // "editorCommandExecuteInsertDate"
QT_MOC_LITERAL(73, 1361, 30), // "editorCommandExecuteInsertTime"
QT_MOC_LITERAL(74, 1392, 32), // "editorCommandExecuteRemoveFormat"
QT_MOC_LITERAL(75, 1425, 31), // "editorCommandExecuteFormatMatch"
QT_MOC_LITERAL(76, 1457, 36), // "editorCommandExecuteInsertHor..."
QT_MOC_LITERAL(77, 1494, 35), // "editorCommandExecuteInsertChe..."
QT_MOC_LITERAL(78, 1530, 31), // "editorCommandExecuteInsertImage"
QT_MOC_LITERAL(79, 1562, 30), // "editorCommandExecuteInsertCode"
QT_MOC_LITERAL(80, 1593, 31), // "editorCommandExecuteMobileImage"
QT_MOC_LITERAL(81, 1625, 13), // "bReceiveImage"
QT_MOC_LITERAL(82, 1639, 30), // "editorCommandExecuteScreenShot"
QT_MOC_LITERAL(83, 1670, 47), // "on_editorCommandExecuteScreen..."
QT_MOC_LITERAL(84, 1718, 3), // "pix"
QT_MOC_LITERAL(85, 1722, 42), // "on_editorCommandExecuteScreen..."
QT_MOC_LITERAL(86, 1765, 30), // "on_insertCommentToNote_request"
QT_MOC_LITERAL(87, 1796, 7), // "docGUID"
QT_MOC_LITERAL(88, 1804, 7), // "comment"
QT_MOC_LITERAL(89, 1812, 11), // "setModified"
QT_MOC_LITERAL(90, 1824, 1), // "b"
QT_MOC_LITERAL(91, 1826, 11), // "getUserGuid"
QT_MOC_LITERAL(92, 1838, 21), // "getUserAvatarFilePath"
QT_MOC_LITERAL(93, 1860, 12), // "getUserAlias"
QT_MOC_LITERAL(94, 1873, 18), // "isPersonalDocument"
QT_MOC_LITERAL(95, 1892, 18), // "getCurrentNoteHtml"
QT_MOC_LITERAL(96, 1911, 30), // "hasEditPermissionOnCurrentNote"
QT_MOC_LITERAL(97, 1942, 25), // "changeCurrentDocumentType"
QT_MOC_LITERAL(98, 1968, 7), // "strType"
QT_MOC_LITERAL(99, 1976, 18), // "checkListClickable"
QT_MOC_LITERAL(100, 1995, 18), // "shouldAddCustomCSS"
QT_MOC_LITERAL(101, 2014, 17), // "canRenderMarkdown"
QT_MOC_LITERAL(102, 2032, 11), // "canEditNote"
QT_MOC_LITERAL(103, 2044, 16), // "getLocalLanguage"
QT_MOC_LITERAL(104, 2061, 17), // "OnSelectionChange"
QT_MOC_LITERAL(105, 2079, 15), // "saveCurrentNote"
QT_MOC_LITERAL(106, 2095, 18), // "onNoteLoadFinished"
QT_MOC_LITERAL(107, 2114, 8), // "userGuid"
QT_MOC_LITERAL(108, 2123, 9), // "userAlias"
QT_MOC_LITERAL(109, 2133, 18), // "userAvatarFilePath"
QT_MOC_LITERAL(110, 2152, 15) // "currentNoteHtml"

    },
    "WizDocumentWebView\0statusChanged\0\0"
    "currentStyle\0selectAllKeyPressed\0"
    "focusIn\0focusOut\0showContextMenuRequest\0"
    "pos\0updateEditorToolBarRequest\0"
    "viewDocumentFinished\0shareDocumentByLinkRequest\0"
    "strKbGUID\0strGUID\0clickingTodoCallBack\0"
    "cancel\0needCallAgain\0currentHtmlChanged\0"
    "onActionTriggered\0QWebEnginePage::WebAction\0"
    "act\0onEditorLoadFinished\0ok\0"
    "onEditorLinkClicked\0url\0"
    "QWebEnginePage::NavigationType\0"
    "navigationType\0isMainFrame\0WizWebEnginePage*\0"
    "page\0onTimerAutoSaveTimout\0onTitleEdited\0"
    "strTitle\0onDocumentReady\0kbGUID\0"
    "strFileName\0WizEditorMode\0editorMode\0"
    "onDocumentSaved\0"
    "on_editorCommandExecuteLinkInsert_accepted\0"
    "on_insertCodeHtml_requset\0strOldHtml\0"
    "editorCommandExecuteBackColor\0color\0"
    "editorCommandExecuteForeColor\0"
    "editorCommandExecuteBold\0"
    "editorCommandExecuteItalic\0"
    "editorCommandExecuteUnderLine\0"
    "editorCommandExecuteStrikeThrough\0"
    "editorCommandExecuteLinkInsert\0"
    "editorCommandExecuteLinkRemove\0"
    "editorCommandExecuteFindReplace\0findPre\0"
    "strTxt\0bCasesensitive\0findNext\0"
    "replaceCurrent\0strSource\0strTarget\0"
    "replaceAndFindNext\0replaceAll\0"
    "editorCommandExecuteIndent\0"
    "editorCommandExecuteOutdent\0"
    "editorCommandExecuteJustifyLeft\0"
    "editorCommandExecuteJustifyRight\0"
    "editorCommandExecuteJustifyCenter\0"
    "editorCommandExecuteJustifyJustify\0"
    "editorCommandExecuteInsertOrderedList\0"
    "editorCommandExecuteInsertUnorderedList\0"
    "editorCommandExecuteTableInsert\0row\0"
    "col\0editorCommandExecuteInsertDate\0"
    "editorCommandExecuteInsertTime\0"
    "editorCommandExecuteRemoveFormat\0"
    "editorCommandExecuteFormatMatch\0"
    "editorCommandExecuteInsertHorizontal\0"
    "editorCommandExecuteInsertCheckList\0"
    "editorCommandExecuteInsertImage\0"
    "editorCommandExecuteInsertCode\0"
    "editorCommandExecuteMobileImage\0"
    "bReceiveImage\0editorCommandExecuteScreenShot\0"
    "on_editorCommandExecuteScreenShot_imageAccepted\0"
    "pix\0on_editorCommandExecuteScreenShot_finished\0"
    "on_insertCommentToNote_request\0docGUID\0"
    "comment\0setModified\0b\0getUserGuid\0"
    "getUserAvatarFilePath\0getUserAlias\0"
    "isPersonalDocument\0getCurrentNoteHtml\0"
    "hasEditPermissionOnCurrentNote\0"
    "changeCurrentDocumentType\0strType\0"
    "checkListClickable\0shouldAddCustomCSS\0"
    "canRenderMarkdown\0canEditNote\0"
    "getLocalLanguage\0OnSelectionChange\0"
    "saveCurrentNote\0onNoteLoadFinished\0"
    "userGuid\0userAlias\0userAvatarFilePath\0"
    "currentNoteHtml"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_WizDocumentWebView[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      71,   14, // methods
       7,  528, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  369,    2, 0x06 /* Public */,
       4,    0,  372,    2, 0x06 /* Public */,
       5,    0,  373,    2, 0x06 /* Public */,
       6,    0,  374,    2, 0x06 /* Public */,
       7,    1,  375,    2, 0x06 /* Public */,
       9,    0,  378,    2, 0x06 /* Public */,
      10,    0,  379,    2, 0x06 /* Public */,
      11,    2,  380,    2, 0x06 /* Public */,
      14,    2,  385,    2, 0x06 /* Public */,
      17,    0,  390,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      18,    1,  391,    2, 0x0a /* Public */,
      21,    1,  394,    2, 0x0a /* Public */,
      23,    4,  397,    2, 0x0a /* Public */,
      30,    0,  406,    2, 0x0a /* Public */,
      31,    1,  407,    2, 0x0a /* Public */,
      33,    4,  410,    2, 0x0a /* Public */,
      38,    3,  419,    2, 0x0a /* Public */,
      39,    0,  426,    2, 0x0a /* Public */,
      40,    1,  427,    2, 0x0a /* Public */,
      42,    1,  430,    2, 0x0a /* Public */,
      44,    1,  433,    2, 0x0a /* Public */,
      45,    0,  436,    2, 0x0a /* Public */,
      46,    0,  437,    2, 0x0a /* Public */,
      47,    0,  438,    2, 0x0a /* Public */,
      48,    0,  439,    2, 0x0a /* Public */,
      49,    0,  440,    2, 0x0a /* Public */,
      50,    0,  441,    2, 0x0a /* Public */,
      51,    0,  442,    2, 0x0a /* Public */,
      52,    2,  443,    2, 0x0a /* Public */,
      55,    2,  448,    2, 0x0a /* Public */,
      56,    2,  453,    2, 0x0a /* Public */,
      59,    3,  458,    2, 0x0a /* Public */,
      60,    3,  465,    2, 0x0a /* Public */,
      61,    0,  472,    2, 0x0a /* Public */,
      62,    0,  473,    2, 0x0a /* Public */,
      63,    0,  474,    2, 0x0a /* Public */,
      64,    0,  475,    2, 0x0a /* Public */,
      65,    0,  476,    2, 0x0a /* Public */,
      66,    0,  477,    2, 0x0a /* Public */,
      67,    0,  478,    2, 0x0a /* Public */,
      68,    0,  479,    2, 0x0a /* Public */,
      69,    2,  480,    2, 0x0a /* Public */,
      72,    0,  485,    2, 0x0a /* Public */,
      73,    0,  486,    2, 0x0a /* Public */,
      74,    0,  487,    2, 0x0a /* Public */,
      75,    0,  488,    2, 0x0a /* Public */,
      76,    0,  489,    2, 0x0a /* Public */,
      77,    0,  490,    2, 0x0a /* Public */,
      78,    0,  491,    2, 0x0a /* Public */,
      79,    0,  492,    2, 0x0a /* Public */,
      80,    1,  493,    2, 0x0a /* Public */,
      82,    0,  496,    2, 0x0a /* Public */,
      83,    1,  497,    2, 0x0a /* Public */,
      85,    0,  500,    2, 0x0a /* Public */,
      86,    2,  501,    2, 0x08 /* Private */,

 // methods: name, argc, parameters, tag, flags
      89,    1,  506,    2, 0x02 /* Public */,
      91,    0,  509,    2, 0x02 /* Public */,
      92,    0,  510,    2, 0x02 /* Public */,
      93,    0,  511,    2, 0x02 /* Public */,
      94,    0,  512,    2, 0x02 /* Public */,
      95,    0,  513,    2, 0x02 /* Public */,
      96,    0,  514,    2, 0x02 /* Public */,
      97,    1,  515,    2, 0x02 /* Public */,
      99,    0,  518,    2, 0x02 /* Public */,
     100,    0,  519,    2, 0x02 /* Public */,
     101,    0,  520,    2, 0x02 /* Public */,
     102,    0,  521,    2, 0x02 /* Public */,
     103,    0,  522,    2, 0x02 /* Public */,
     104,    1,  523,    2, 0x02 /* Public */,
     105,    0,  526,    2, 0x02 /* Public */,
     106,    0,  527,    2, 0x02 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPoint,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   12,   13,
    QMetaType::Void, QMetaType::Bool, QMetaType::Bool,   15,   16,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void, QMetaType::QUrl, 0x80000000 | 25, QMetaType::Bool, 0x80000000 | 28,   24,   26,   27,   29,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   32,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 36,   34,   13,   35,   37,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   34,   13,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   41,
    QMetaType::Void, QMetaType::QColor,   43,
    QMetaType::Void, QMetaType::QColor,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   53,   54,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   53,   54,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   57,   58,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   57,   58,   54,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   57,   58,   54,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   70,   71,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   81,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPixmap,   84,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   87,   88,

 // methods: parameters
    QMetaType::Void, QMetaType::Bool,   90,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::QString,   98,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::QString,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
     107, QMetaType::QString, 0x00095001,
     108, QMetaType::QString, 0x00095001,
     109, QMetaType::QString, 0x00095001,
      94, QMetaType::Bool, 0x00095001,
     102, QMetaType::QString, 0x00095001,
     110, QMetaType::QString, 0x00485001,
      96, QMetaType::Bool, 0x00095001,

 // properties: notify_signal_id
       0,
       0,
       0,
       0,
       0,
       9,
       0,

       0        // eod
};

void WizDocumentWebView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        WizDocumentWebView *_t = static_cast<WizDocumentWebView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->statusChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->selectAllKeyPressed(); break;
        case 2: _t->focusIn(); break;
        case 3: _t->focusOut(); break;
        case 4: _t->showContextMenuRequest((*reinterpret_cast< const QPoint(*)>(_a[1]))); break;
        case 5: _t->updateEditorToolBarRequest(); break;
        case 6: _t->viewDocumentFinished(); break;
        case 7: _t->shareDocumentByLinkRequest((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 8: _t->clickingTodoCallBack((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 9: _t->currentHtmlChanged(); break;
        case 10: _t->onActionTriggered((*reinterpret_cast< QWebEnginePage::WebAction(*)>(_a[1]))); break;
        case 11: _t->onEditorLoadFinished((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 12: _t->onEditorLinkClicked((*reinterpret_cast< QUrl(*)>(_a[1])),(*reinterpret_cast< QWebEnginePage::NavigationType(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3])),(*reinterpret_cast< WizWebEnginePage*(*)>(_a[4]))); break;
        case 13: _t->onTimerAutoSaveTimout(); break;
        case 14: _t->onTitleEdited((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 15: _t->onDocumentReady((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3])),(*reinterpret_cast< WizEditorMode(*)>(_a[4]))); break;
        case 16: _t->onDocumentSaved((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 17: _t->on_editorCommandExecuteLinkInsert_accepted(); break;
        case 18: _t->on_insertCodeHtml_requset((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 19: _t->editorCommandExecuteBackColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 20: _t->editorCommandExecuteForeColor((*reinterpret_cast< const QColor(*)>(_a[1]))); break;
        case 21: _t->editorCommandExecuteBold(); break;
        case 22: _t->editorCommandExecuteItalic(); break;
        case 23: _t->editorCommandExecuteUnderLine(); break;
        case 24: _t->editorCommandExecuteStrikeThrough(); break;
        case 25: _t->editorCommandExecuteLinkInsert(); break;
        case 26: _t->editorCommandExecuteLinkRemove(); break;
        case 27: _t->editorCommandExecuteFindReplace(); break;
        case 28: _t->findPre((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 29: _t->findNext((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2]))); break;
        case 30: _t->replaceCurrent((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 31: _t->replaceAndFindNext((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 32: _t->replaceAll((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 33: _t->editorCommandExecuteIndent(); break;
        case 34: _t->editorCommandExecuteOutdent(); break;
        case 35: _t->editorCommandExecuteJustifyLeft(); break;
        case 36: _t->editorCommandExecuteJustifyRight(); break;
        case 37: _t->editorCommandExecuteJustifyCenter(); break;
        case 38: _t->editorCommandExecuteJustifyJustify(); break;
        case 39: _t->editorCommandExecuteInsertOrderedList(); break;
        case 40: _t->editorCommandExecuteInsertUnorderedList(); break;
        case 41: _t->editorCommandExecuteTableInsert((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 42: _t->editorCommandExecuteInsertDate(); break;
        case 43: _t->editorCommandExecuteInsertTime(); break;
        case 44: _t->editorCommandExecuteRemoveFormat(); break;
        case 45: _t->editorCommandExecuteFormatMatch(); break;
        case 46: _t->editorCommandExecuteInsertHorizontal(); break;
        case 47: _t->editorCommandExecuteInsertCheckList(); break;
        case 48: _t->editorCommandExecuteInsertImage(); break;
        case 49: _t->editorCommandExecuteInsertCode(); break;
        case 50: _t->editorCommandExecuteMobileImage((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 51: _t->editorCommandExecuteScreenShot(); break;
        case 52: _t->on_editorCommandExecuteScreenShot_imageAccepted((*reinterpret_cast< QPixmap(*)>(_a[1]))); break;
        case 53: _t->on_editorCommandExecuteScreenShot_finished(); break;
        case 54: _t->on_insertCommentToNote_request((*reinterpret_cast< const QString(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 55: _t->setModified((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 56: { QString _r = _t->getUserGuid();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 57: { QString _r = _t->getUserAvatarFilePath();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 58: { QString _r = _t->getUserAlias();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 59: { bool _r = _t->isPersonalDocument();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 60: { QString _r = _t->getCurrentNoteHtml();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 61: { bool _r = _t->hasEditPermissionOnCurrentNote();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 62: _t->changeCurrentDocumentType((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 63: { bool _r = _t->checkListClickable();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 64: { bool _r = _t->shouldAddCustomCSS();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 65: { bool _r = _t->canRenderMarkdown();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 66: { bool _r = _t->canEditNote();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = _r; }  break;
        case 67: { QString _r = _t->getLocalLanguage();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = _r; }  break;
        case 68: _t->OnSelectionChange((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 69: _t->saveCurrentNote(); break;
        case 70: _t->onNoteLoadFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 12:
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
            typedef void (WizDocumentWebView::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebView::statusChanged)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (WizDocumentWebView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebView::selectAllKeyPressed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (WizDocumentWebView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebView::focusIn)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (WizDocumentWebView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebView::focusOut)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (WizDocumentWebView::*_t)(const QPoint & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebView::showContextMenuRequest)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (WizDocumentWebView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebView::updateEditorToolBarRequest)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (WizDocumentWebView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebView::viewDocumentFinished)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (WizDocumentWebView::*_t)(const QString & , const QString & );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebView::shareDocumentByLinkRequest)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (WizDocumentWebView::*_t)(bool , bool );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebView::clickingTodoCallBack)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (WizDocumentWebView::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&WizDocumentWebView::currentHtmlChanged)) {
                *result = 9;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        WizDocumentWebView *_t = static_cast<WizDocumentWebView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getUserGuid(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->getUserAlias(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getUserAvatarFilePath(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isPersonalDocument(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->canEditNote(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getCurrentNoteHtml(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->hasEditPermissionOnCurrentNote(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

const QMetaObject WizDocumentWebView::staticMetaObject = {
    { &WizWebEngineView::staticMetaObject, qt_meta_stringdata_WizDocumentWebView.data,
      qt_meta_data_WizDocumentWebView,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *WizDocumentWebView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WizDocumentWebView::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_WizDocumentWebView.stringdata0))
        return static_cast<void*>(const_cast< WizDocumentWebView*>(this));
    return WizWebEngineView::qt_metacast(_clname);
}

int WizDocumentWebView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = WizWebEngineView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 71)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 71;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 71)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 71;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 7;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 7;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void WizDocumentWebView::statusChanged(const QString & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void WizDocumentWebView::selectAllKeyPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 1, Q_NULLPTR);
}

// SIGNAL 2
void WizDocumentWebView::focusIn()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void WizDocumentWebView::focusOut()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void WizDocumentWebView::showContextMenuRequest(const QPoint & _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void WizDocumentWebView::updateEditorToolBarRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 5, Q_NULLPTR);
}

// SIGNAL 6
void WizDocumentWebView::viewDocumentFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 6, Q_NULLPTR);
}

// SIGNAL 7
void WizDocumentWebView::shareDocumentByLinkRequest(const QString & _t1, const QString & _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void WizDocumentWebView::clickingTodoCallBack(bool _t1, bool _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void WizDocumentWebView::currentHtmlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
