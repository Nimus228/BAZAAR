/****************************************************************************
** Meta object code from reading C++ file 'mainscreen.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainscreen.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainscreen.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSmainscreenENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSmainscreenENDCLASS = QtMocHelpers::stringData(
    "mainscreen",
    "closeModMini",
    "",
    "closeMini",
    "on_miniProf_clicked",
    "on_bazaar_clicked",
    "openObj",
    "on_filtr_clicked",
    "activeWin"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSmainscreenENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[11];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[20];
    char stringdata5[18];
    char stringdata6[8];
    char stringdata7[17];
    char stringdata8[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSmainscreenENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSmainscreenENDCLASS_t qt_meta_stringdata_CLASSmainscreenENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "mainscreen"
        QT_MOC_LITERAL(11, 12),  // "closeModMini"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 9),  // "closeMini"
        QT_MOC_LITERAL(35, 19),  // "on_miniProf_clicked"
        QT_MOC_LITERAL(55, 17),  // "on_bazaar_clicked"
        QT_MOC_LITERAL(73, 7),  // "openObj"
        QT_MOC_LITERAL(81, 16),  // "on_filtr_clicked"
        QT_MOC_LITERAL(98, 9)   // "activeWin"
    },
    "mainscreen",
    "closeModMini",
    "",
    "closeMini",
    "on_miniProf_clicked",
    "on_bazaar_clicked",
    "openObj",
    "on_filtr_clicked",
    "activeWin"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSmainscreenENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    1 /* Public */,
       3,    0,   57,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    0,   60,    2, 0x08,    5 /* Private */,
       7,    0,   61,    2, 0x08,    6 /* Private */,
       8,    0,   62,    2, 0x0a,    7 /* Public */,

 // signals: parameters
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

Q_CONSTINIT const QMetaObject mainscreen::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSmainscreenENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSmainscreenENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSmainscreenENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<mainscreen, std::true_type>,
        // method 'closeModMini'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'closeMini'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_miniProf_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bazaar_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openObj'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_filtr_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activeWin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void mainscreen::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mainscreen *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeModMini(); break;
        case 1: _t->closeMini(); break;
        case 2: _t->on_miniProf_clicked(); break;
        case 3: _t->on_bazaar_clicked(); break;
        case 4: _t->openObj(); break;
        case 5: _t->on_filtr_clicked(); break;
        case 6: _t->activeWin(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (mainscreen::*)();
            if (_t _q_method = &mainscreen::closeModMini; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (mainscreen::*)();
            if (_t _q_method = &mainscreen::closeMini; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *mainscreen::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mainscreen::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSmainscreenENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mainscreen::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void mainscreen::closeModMini()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void mainscreen::closeMini()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
