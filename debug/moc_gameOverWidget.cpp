/****************************************************************************
** Meta object code from reading C++ file 'gameOverWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../gameOverWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gameOverWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_GameOverWidget_t {
    QByteArrayData data[7];
    char stringdata0[98];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_GameOverWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_GameOverWidget_t qt_meta_stringdata_GameOverWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "GameOverWidget"
QT_MOC_LITERAL(1, 15, 4), // "over"
QT_MOC_LITERAL(2, 20, 0), // ""
QT_MOC_LITERAL(3, 21, 19), // "playerButtonClicked"
QT_MOC_LITERAL(4, 41, 19), // "submitButtonClicked"
QT_MOC_LITERAL(5, 61, 19), // "cancelButtonClicked"
QT_MOC_LITERAL(6, 81, 16) // "mediaPlayerClose"

    },
    "GameOverWidget\0over\0\0playerButtonClicked\0"
    "submitButtonClicked\0cancelButtonClicked\0"
    "mediaPlayerClose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_GameOverWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x0a /* Public */,
       5,    0,   42,    2, 0x0a /* Public */,
       6,    0,   43,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void GameOverWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        GameOverWidget *_t = static_cast<GameOverWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->over(); break;
        case 1: _t->playerButtonClicked(); break;
        case 2: _t->submitButtonClicked(); break;
        case 3: _t->cancelButtonClicked(); break;
        case 4: _t->mediaPlayerClose(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (GameOverWidget::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&GameOverWidget::over)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject GameOverWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_GameOverWidget.data,
      qt_meta_data_GameOverWidget,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *GameOverWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GameOverWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_GameOverWidget.stringdata0))
        return static_cast<void*>(const_cast< GameOverWidget*>(this));
    return QWidget::qt_metacast(_clname);
}

int GameOverWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void GameOverWidget::over()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
