/****************************************************************************
** Meta object code from reading C++ file 'createadv.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../createadv.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'createadv.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASScreateAdvENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASScreateAdvENDCLASS = QtMocHelpers::stringData(
    "createAdv",
    "thisClose",
    "",
    "on_cansell_clicked",
    "on_savee_clicked",
    "on_img_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASScreateAdvENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[10];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[17];
    char stringdata5[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASScreateAdvENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASScreateAdvENDCLASS_t qt_meta_stringdata_CLASScreateAdvENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "createAdv"
        QT_MOC_LITERAL(10, 9),  // "thisClose"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 18),  // "on_cansell_clicked"
        QT_MOC_LITERAL(40, 16),  // "on_savee_clicked"
        QT_MOC_LITERAL(57, 14)   // "on_img_clicked"
    },
    "createAdv",
    "thisClose",
    "",
    "on_cansell_clicked",
    "on_savee_clicked",
    "on_img_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASScreateAdvENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   39,    2, 0x08,    2 /* Private */,
       4,    0,   40,    2, 0x08,    3 /* Private */,
       5,    0,   41,    2, 0x08,    4 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject createAdv::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASScreateAdvENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASScreateAdvENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASScreateAdvENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<createAdv, std::true_type>,
        // method 'thisClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cansell_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_savee_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_img_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void createAdv::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<createAdv *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->thisClose(); break;
        case 1: _t->on_cansell_clicked(); break;
        case 2: _t->on_savee_clicked(); break;
        case 3: _t->on_img_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (createAdv::*)();
            if (_t _q_method = &createAdv::thisClose; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *createAdv::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *createAdv::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASScreateAdvENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int createAdv::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void createAdv::thisClose()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
