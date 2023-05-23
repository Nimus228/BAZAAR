/****************************************************************************
** Meta object code from reading C++ file 'profilemod.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../profilemod.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'profilemod.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSprofileModENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSprofileModENDCLASS = QtMocHelpers::stringData(
    "profileMod",
    "closeMini",
    "",
    "on_mini_2_clicked",
    "on_editBut_2_clicked",
    "on_bazaar_2_clicked",
    "on_img_2_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSprofileModENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[21];
    char stringdata5[20];
    char stringdata6[17];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSprofileModENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSprofileModENDCLASS_t qt_meta_stringdata_CLASSprofileModENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "profileMod"
        QT_MOC_LITERAL(11, 9),  // "closeMini"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 17),  // "on_mini_2_clicked"
        QT_MOC_LITERAL(40, 20),  // "on_editBut_2_clicked"
        QT_MOC_LITERAL(61, 19),  // "on_bazaar_2_clicked"
        QT_MOC_LITERAL(81, 16)   // "on_img_2_clicked"
    },
    "profileMod",
    "closeMini",
    "",
    "on_mini_2_clicked",
    "on_editBut_2_clicked",
    "on_bazaar_2_clicked",
    "on_img_2_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSprofileModENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   45,    2, 0x08,    2 /* Private */,
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject profileMod::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSprofileModENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSprofileModENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSprofileModENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<profileMod, std::true_type>,
        // method 'closeMini'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_mini_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_editBut_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_bazaar_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_img_2_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void profileMod::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<profileMod *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->closeMini(); break;
        case 1: _t->on_mini_2_clicked(); break;
        case 2: _t->on_editBut_2_clicked(); break;
        case 3: _t->on_bazaar_2_clicked(); break;
        case 4: _t->on_img_2_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (profileMod::*)();
            if (_t _q_method = &profileMod::closeMini; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *profileMod::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *profileMod::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSprofileModENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int profileMod::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void profileMod::closeMini()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
