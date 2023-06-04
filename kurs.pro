#-------------------------------------------------
#
# Project created by QtCreator 2023-05-13T19:22:24
#
#-------------------------------------------------

QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = kurs
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dobavit.cpp \
    dobavit_comand.cpp \
    dobavit_ucha.cpp \
    dobavit_proved.cpp \
    pac.cpp \
    redact.cpp

HEADERS  += mainwindow.h \
    dobavit.h \
    dobavit_comand.h \
    dobavit_ucha.h \
    dobavit_proved.h \
    pac.h \
    redact.h

FORMS    += mainwindow.ui \
    dobavit.ui \
    dobavit_comand.ui \
    dobavit_ucha.ui \
    dobavit_proved.ui \
    pac.ui \
    redact.ui
