/****************************************************************************
** Meta object code from reading C++ file 'hall.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source/hall.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'hall.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_hall_t {
    QByteArrayData data[17];
    char stringdata0[229];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_hall_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_hall_t qt_meta_stringdata_hall = {
    {
QT_MOC_LITERAL(0, 0, 4), // "hall"
QT_MOC_LITERAL(1, 5, 20), // "createbutton_clicked"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 9), // "enterroom"
QT_MOC_LITERAL(4, 37, 2), // "ip"
QT_MOC_LITERAL(5, 40, 9), // "openlogin"
QT_MOC_LITERAL(6, 50, 7), // "openweb"
QT_MOC_LITERAL(7, 58, 7), // "warning"
QT_MOC_LITERAL(8, 66, 21), // "on_action_Q_triggered"
QT_MOC_LITERAL(9, 88, 21), // "on_action_J_triggered"
QT_MOC_LITERAL(10, 110, 21), // "on_action_2_triggered"
QT_MOC_LITERAL(11, 132, 19), // "on_action_triggered"
QT_MOC_LITERAL(12, 152, 23), // "on_createButton_clicked"
QT_MOC_LITERAL(13, 176, 7), // "getitem"
QT_MOC_LITERAL(14, 184, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(15, 202, 4), // "item"
QT_MOC_LITERAL(16, 207, 21) // "on_pushButton_clicked"

    },
    "hall\0createbutton_clicked\0\0enterroom\0"
    "ip\0openlogin\0openweb\0warning\0"
    "on_action_Q_triggered\0on_action_J_triggered\0"
    "on_action_2_triggered\0on_action_triggered\0"
    "on_createButton_clicked\0getitem\0"
    "QTableWidgetItem*\0item\0on_pushButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_hall[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   74,    2, 0x06 /* Public */,
       3,    1,   75,    2, 0x06 /* Public */,
       5,    0,   78,    2, 0x06 /* Public */,
       6,    0,   79,    2, 0x06 /* Public */,
       7,    0,   80,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       8,    0,   81,    2, 0x08 /* Private */,
       9,    0,   82,    2, 0x08 /* Private */,
      10,    0,   83,    2, 0x08 /* Private */,
      11,    0,   84,    2, 0x08 /* Private */,
      12,    0,   85,    2, 0x08 /* Private */,
      13,    1,   86,    2, 0x08 /* Private */,
      16,    0,   89,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,

       0        // eod
};

void hall::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        hall *_t = static_cast<hall *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->createbutton_clicked(); break;
        case 1: _t->enterroom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->openlogin(); break;
        case 3: _t->openweb(); break;
        case 4: _t->warning(); break;
        case 5: _t->on_action_Q_triggered(); break;
        case 6: _t->on_action_J_triggered(); break;
        case 7: _t->on_action_2_triggered(); break;
        case 8: _t->on_action_triggered(); break;
        case 9: _t->on_createButton_clicked(); break;
        case 10: _t->getitem((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 11: _t->on_pushButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (hall::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&hall::createbutton_clicked)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (hall::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&hall::enterroom)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (hall::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&hall::openlogin)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (hall::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&hall::openweb)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (hall::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&hall::warning)) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject hall::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_hall.data,
      qt_meta_data_hall,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *hall::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *hall::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_hall.stringdata0))
        return static_cast<void*>(const_cast< hall*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int hall::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void hall::createbutton_clicked()
{
    QMetaObject::activate(this, &staticMetaObject, 0, Q_NULLPTR);
}

// SIGNAL 1
void hall::enterroom(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void hall::openlogin()
{
    QMetaObject::activate(this, &staticMetaObject, 2, Q_NULLPTR);
}

// SIGNAL 3
void hall::openweb()
{
    QMetaObject::activate(this, &staticMetaObject, 3, Q_NULLPTR);
}

// SIGNAL 4
void hall::warning()
{
    QMetaObject::activate(this, &staticMetaObject, 4, Q_NULLPTR);
}
QT_END_MOC_NAMESPACE
