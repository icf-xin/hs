/****************************************************************************
** Meta object code from reading C++ file 'allmachineWindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../ui/allmachineWindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'allmachineWindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_allMachineWindow_t {
    QByteArrayData data[13];
    char stringdata0[189];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_allMachineWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_allMachineWindow_t qt_meta_stringdata_allMachineWindow = {
    {
QT_MOC_LITERAL(0, 0, 16), // "allMachineWindow"
QT_MOC_LITERAL(1, 17, 17), // "slotHeaderClicked"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 5), // "index"
QT_MOC_LITERAL(4, 42, 21), // "on_pushButton_clicked"
QT_MOC_LITERAL(5, 64, 7), // "getItem"
QT_MOC_LITERAL(6, 72, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(7, 90, 10), // "saveConfig"
QT_MOC_LITERAL(8, 101, 10), // "readConfig"
QT_MOC_LITERAL(9, 112, 35), // "MachineDataTimeUpdate_Control..."
QT_MOC_LITERAL(10, 148, 4), // "date"
QT_MOC_LITERAL(11, 153, 2), // "id"
QT_MOC_LITERAL(12, 156, 32) // "waveDataTimeUpdate_ControlCenter"

    },
    "allMachineWindow\0slotHeaderClicked\0\0"
    "index\0on_pushButton_clicked\0getItem\0"
    "QTableWidgetItem*\0saveConfig\0readConfig\0"
    "MachineDataTimeUpdate_ControlCenter\0"
    "date\0id\0waveDataTimeUpdate_ControlCenter"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_allMachineWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x08 /* Private */,
       4,    0,   52,    2, 0x08 /* Private */,
       5,    1,   53,    2, 0x08 /* Private */,
       7,    0,   56,    2, 0x08 /* Private */,
       8,    0,   57,    2, 0x08 /* Private */,
       9,    2,   58,    2, 0x08 /* Private */,
      12,    2,   63,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   10,   11,

       0        // eod
};

void allMachineWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<allMachineWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->slotHeaderClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pushButton_clicked(); break;
        case 2: _t->getItem((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 3: _t->saveConfig(); break;
        case 4: _t->readConfig(); break;
        case 5: _t->MachineDataTimeUpdate_ControlCenter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 6: _t->waveDataTimeUpdate_ControlCenter((*reinterpret_cast< QString(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject allMachineWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_allMachineWindow.data,
    qt_meta_data_allMachineWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *allMachineWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *allMachineWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_allMachineWindow.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int allMachineWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
