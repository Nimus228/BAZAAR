/****************************************************************************
** Meta object code from reading C++ file 'chat.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../chat.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'chat.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.5.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSChatENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSChatENDCLASS = QtMocHelpers::stringData(
    "Chat",
    "closeMain",
    "",
    "closeMini",
    "closeModMini",
    "showMessage",
    "on_mini_clicked",
    "on_bazaar_clicked",
    "on_send_clicked",
    "ReadingData"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSChatENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[5];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[13];
    char stringdata5[12];
    char stringdata6[16];
    char stringdata7[18];
    char stringdata8[16];
    char stringdata9[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSChatENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSChatENDCLASS_t qt_meta_stringdata_CLASSChatENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Chat"
        QT_MOC_LITERAL(5, 9),  // "closeMain"
        QT_MOC_LITERAL(15, 0),  // ""
        QT_MOC_LITERAL(16, 9),  // "closeMini"
        QT_MOC_LITERAL(26, 12),  // "closeModMini"
        QT_MOC_LITERAL(39, 11),  // "showMessage"
        QT_MOC_LITERAL(51, 15),  // "on_mini_clicked"
        QT_MOC_LITERAL(67, 17),  // "on_bazaar_clicked"
        QT_MOC_LITERAL(85, 15),  // "on_send_clicked"
        QT_MOC_LITERAL(101, 11)   // "ReadingData"
    },
    "Chat",
    "closeMain",
    "",
    "closeMini",
    "closeModMini",
    "showMessage",
    "on_mini_clicked",
    "on_bazaar_clicked",
    "on_send_clicked",
    "ReadingData"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSChatENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,
       3,    0,   63,    2, 0x06,    2 /* Public */,
       4,    0,   64,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    0,   67,    2, 0x08,    6 /* Private */,
       8,    0,   68,    2, 0x08,    7 /* Private */,
       9,    0,   69,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Chat::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSChatENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSChatENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSChatENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Chat, std::true_type>,
        // method 'closeMain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeMini'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeModMini'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_mini_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bazaar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_send_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ReadingData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Chat::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Chat *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeMain(); break;
        case 1: _t->closeMini(); break;
        case 2: _t->closeModMini(); break;
        case 3: _t->showMessage(); break;
        case 4: _t->on_mini_clicked(); break;
        case 5: _t->on_bazaar_clicked(); break;
        case 6: _t->on_send_clicked(); break;
        case 7: _t->ReadingData(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Chat::*)();
            if (_t _q_method = &Chat::closeMain; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Chat::*)();
            if (_t _q_method = &Chat::closeMini; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Chat::*)();
            if (_t _q_method = &Chat::closeModMini; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *Chat::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Chat::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSChatENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int Chat::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void Chat::closeMain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Chat::closeMini()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Chat::closeModMini()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
