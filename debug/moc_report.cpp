/****************************************************************************
** Meta object code from reading C++ file 'report.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.5.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../report.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'report.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSreportENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSreportENDCLASS = QtMocHelpers::stringData(
    "report",
    "on_choice",
    "",
    "thisClose",
    "on_cancel_clicked",
    "on_accept_clicked",
    "choice"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSreportENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[7];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[18];
    char stringdata5[18];
    char stringdata6[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSreportENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSreportENDCLASS_t qt_meta_stringdata_CLASSreportENDCLASS = {
    {
        QT_MOC_LITERAL(0, 6),  // "report"
        QT_MOC_LITERAL(7, 9),  // "on_choice"
        QT_MOC_LITERAL(17, 0),  // ""
        QT_MOC_LITERAL(18, 9),  // "thisClose"
        QT_MOC_LITERAL(28, 17),  // "on_cancel_clicked"
        QT_MOC_LITERAL(46, 17),  // "on_accept_clicked"
        QT_MOC_LITERAL(64, 6)   // "choice"
    },
    "report",
    "on_choice",
    "",
    "thisClose",
    "on_cancel_clicked",
    "on_accept_clicked",
    "choice"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSreportENDCLASS[] = {

 // content:
      11,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    0,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   46,    2, 0x08,    3 /* Private */,
       5,    0,   47,    2, 0x08,    4 /* Private */,
       6,    0,   48,    2, 0x0a,    5 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject report::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSreportENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSreportENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSreportENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<report, std::true_type>,
        // method 'on_choice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'thisClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_cancel_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_accept_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'choice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void report::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<report *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_choice(); break;
        case 1: _t->thisClose(); break;
        case 2: _t->on_cancel_clicked(); break;
        case 3: _t->on_accept_clicked(); break;
        case 4: _t->choice(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (report::*)();
            if (_t _q_method = &report::on_choice; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (report::*)();
            if (_t _q_method = &report::thisClose; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *report::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *report::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSreportENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int report::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void report::on_choice()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void report::thisClose()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
