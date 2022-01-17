#-------------------------------------------------
#
# Project created by QtCreator 2015-09-26T13:09:14
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Test
TEMPLATE = app


SOURCES += main.cpp\
        Widget.cpp \
    Escena.cpp \
    Pelota.cpp \
    Util.cpp

HEADERS  += Widget.h \
    Escena.h \
    Pelota.h \
    Global.h \
    Util.h

FORMS    += Widget.ui

QMAKE_CXXFLAGS += -std=gnu++14
