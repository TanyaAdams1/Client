#-------------------------------------------------
#
# Project created by QtCreator 2016-12-11T10:03:07
#
#-------------------------------------------------

QT       += multimedia
QT       += core gui network
#QT       += webkitwidgets
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = werewolf
TEMPLATE = app


SOURCES += main.cpp\
        hall.cpp \
    warning.cpp \
    createroom.cpp \
    login.cpp \
    gui.cpp \
    gamewindow.cpp \
    music.cpp \
    dialog.cpp \
    message.cpp \
    tcpsock.cpp \
    core.cpp\
    search.cpp

HEADERS  += hall.h \
    warning.h \
    createroom.h \
    login.h \
    gui.h \
    gamewindow.h \
    music.h \
    dialog.h \
    message.h \
    tcpsock.h \
    core.h\
    search.h

FORMS    += hall.ui \
    warning.ui \
    createroom.ui \
    login.ui \
    gamewindow.ui \
    music.ui  \
    dialog.ui\
    search.ui
RESOURCES += \
    myresource.qrc \
    image.qrc
    image.qrc

RC_FILE  += myico.rc
