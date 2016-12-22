/****************************************************************************
** Meta object code from reading C++ file 'gui.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../source/gui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'gui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_gui_t {
    QByteArrayData data[20];
    char stringdata0[165];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_gui_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_gui_t qt_meta_stringdata_gui = {
    {
QT_MOC_LITERAL(0, 0, 3), // "gui"
QT_MOC_LITERAL(1, 4, 7), // "Newroom"
QT_MOC_LITERAL(2, 12, 0), // ""
QT_MOC_LITERAL(3, 13, 18), // "QPair<QString,int>"
QT_MOC_LITERAL(4, 32, 4), // "pair"
QT_MOC_LITERAL(5, 37, 9), // "enterRoom"
QT_MOC_LITERAL(6, 47, 2), // "ip"
QT_MOC_LITERAL(7, 50, 8), // "prepared"
QT_MOC_LITERAL(8, 59, 10), // "unprepared"
QT_MOC_LITERAL(9, 70, 6), // "goback"
QT_MOC_LITERAL(10, 77, 4), // "exit"
QT_MOC_LITERAL(11, 82, 5), // "speak"
QT_MOC_LITERAL(12, 88, 7), // "endturn"
QT_MOC_LITERAL(13, 96, 6), // "choice"
QT_MOC_LITERAL(14, 103, 9), // "openlogin"
QT_MOC_LITERAL(15, 113, 14), // "showcreateroom"
QT_MOC_LITERAL(16, 128, 10), // "onenewroom"
QT_MOC_LITERAL(17, 139, 9), // "enterroom"
QT_MOC_LITERAL(18, 149, 7), // "openweb"
QT_MOC_LITERAL(19, 157, 7) // "WArning"

    },
    "gui\0Newroom\0\0QPair<QString,int>\0pair\0"
    "enterRoom\0ip\0prepared\0unprepared\0"
    "goback\0exit\0speak\0endturn\0choice\0"
    "openlogin\0showcreateroom\0onenewroom\0"
    "enterroom\0openweb\0WArning"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_gui[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   89,    2, 0x06 /* Public */,
       5,    1,   92,    2, 0x06 /* Public */,
       7,    1,   95,    2, 0x06 /* Public */,
       8,    1,   98,    2, 0x06 /* Public */,
       9,    1,  101,    2, 0x06 /* Public */,
      10,    1,  104,    2, 0x06 /* Public */,
      11,    2,  107,    2, 0x06 /* Public */,
      12,    0,  112,    2, 0x06 /* Public */,
      13,    1,  113,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      14,    0,  116,    2, 0x08 /* Private */,
      15,    0,  117,    2, 0x08 /* Private */,
      16,    1,  118,    2, 0x08 /* Private */,
      17,    1,  121,    2, 0x08 /* Private */,
      18,    0,  124,    2, 0x08 /* Private */,
      19,    0,  125,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void gui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        gui *_t = static_cast<gui *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->Newroom((*reinterpret_cast< const QPair<QString,int>(*)>(_a[1]))); break;
        case 1: _t->enterRoom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->prepared((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->unprepared((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->goback((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->exit((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->speak((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 7: _t->endturn(); break;
        case 8: _t->choice((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->openlogin(); break;
        case 10: _t->showcreateroom(); break;
        case 11: _t->onenewroom((*reinterpret_cast< const QPair<QString,int>(*)>(_a[1]))); break;
        case 12: _t->enterroom((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 13: _t->openweb(); break;
        case 14: _t->WArning(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (gui::*_t)(const QPair<QString,int> );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gui::Newroom)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (gui::*_t)(const QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gui::enterRoom)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (gui::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gui::prepared)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (gui::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gui::unprepared)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (gui::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gui::goback)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (gui::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gui::exit)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (gui::*_t)(int , QString );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gui::speak)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (gui::*_t)();
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gui::endturn)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (gui::*_t)(int );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&gui::choice)) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject gui::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_gui.data,
      qt_meta_data_gui,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *gui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *gui::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_gui.stringdata0))
        return static_cast<void*>(const_cast< gui*>(this));
    return QObject::qt_metacast(_clname);
}

int gui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void gui::Newroom(const QPair<QString,int> _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void gui::enterRoom(const QString _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void gui::prepared(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void gui::unprepared(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void gui::goback(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void gui::exit(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void gui::speak(int _t1, QString _t2)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void gui::endturn()
{
    QMetaObject::activate(this, &staticMetaObject, 7, Q_NULLPTR);
}

// SIGNAL 8
void gui::choice(int _t1)
{
    void *_a[] = { Q_NULLPTR, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_END_MOC_NAMESPACE
