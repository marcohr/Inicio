#-------------------------------------------------
#
# Project created by QtCreator 2014-02-24T16:32:30
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Inicio
TEMPLATE = app


SOURCES += main.cpp\
        inicio.cpp \
    insertar.cpp \
    crearcuenta.cpp \
    administrador.cpp \
    dibujar.cpp

HEADERS  += inicio.h \
    insertar.h \
    crearcuenta.h \
    administrador.h \
    dibujar.h

FORMS    += inicio.ui \
    insertar.ui \
    crearcuenta.ui \
    administrador.ui

RESOURCES += \
    imagenes.qrc
