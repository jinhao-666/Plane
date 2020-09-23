/****************************************************************************
** Meta object code from reading C++ file 'readMeWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../readMeWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'readMeWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ReadMeWidget_t {
    QByteArrayData data[11];
    char stringdata0[171];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ReadMeWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ReadMeWidget_t qt_meta_stringdata_ReadMeWidget = {
    {
QT_MOC_LITERAL(0, 0, 12), // "ReadMeWidget"
QT_MOC_LITERAL(1, 13, 19), // "direction_1_Clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 19), // "direction_2_Clicked"
QT_MOC_LITERAL(4, 54, 15), // "music_1_Clicked"
QT_MOC_LITERAL(5, 70, 15), // "music_2_Clicked"
QT_MOC_LITERAL(6, 86, 16), // "bullet_0_Clicked"
QT_MOC_LITERAL(7, 103, 16), // "bullet_1_Clicked"
QT_MOC_LITERAL(8, 120, 16), // "bullet_2_Clicked"
QT_MOC_LITERAL(9, 137, 16), // "bullet_3_Clicked"
QT_MOC_LITERAL(10, 154, 16) // "bullet_4_Clicked"

    },
    "ReadMeWidget\0direction_1_Clicked\0\0"
    "direction_2_Clicked\0music_1_Clicked\0"
    "music_2_Clicked\0bullet_0_Clicked\0"
    "bullet_1_Clicked\0bullet_2_Clicked\0"
    "bullet_3_Clicked\0bullet_4_Clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ReadMeWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x0a /* Public */,
       3,    0,   60,    2, 0x0a /* Public */,
       4,    0,   61,    2, 0x0a /* Public */,
       5,    0,   62,    2, 0x0a /* Public */,
       6,    0,   63,    2, 0x0a /* Public */,
       7,    0,   64,    2, 0x0a /* Public */,
       8,    0,   65,    2, 0x0a /* Public */,
       9,    0,   66,    2, 0x0a /* Public */,
      10,    0,   67,    2, 0x0a /* Public */,

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

       0        // eod
};

void ReadMeWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        ReadMeWidget *_t = static_cast<ReadMeWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->direction_1_Clicked(); break;
        case 1: _t->direction_2_Clicked(); break;
        case 2: _t->music_1_Clicked(); break;
        case 3: _t->music_2_Clicked(); break;
        case 4: _t->bullet_0_Clicked(); break;
        case 5: _t->bullet_1_Clicked(); break;
        case 6: _t->bullet_2_Clicked(); break;
        case 7: _t->bullet_3_Clicked(); break;
        case 8: _t->bullet_4_Clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject ReadMeWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_ReadMeWidget.data,
      qt_meta_data_ReadMeWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *ReadMeWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ReadMeWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_ReadMeWidget.stringdata0))
        return static_cast<void*>(const_cast< ReadMeWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int ReadMeWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
