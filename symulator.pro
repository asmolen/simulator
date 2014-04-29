#-------------------------------------------------
#
# Project created by QtCreator 2014-04-01T17:24:33
#
#-------------------------------------------------

QT       += opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = symulator
TEMPLATE = app


SOURCES += main.cpp\
    glwidget.cpp \
    mainwindow.cpp \
    city.cpp \
    objectmon.cpp \
    camera.cpp

HEADERS  += \
    qtlogo.h \
    glwidget.hpp \
    mainwindow.hpp \
    city.hpp \
    objectmon.hpp \
    camera.hpp
FORMS +=

OTHER_FILES += \
    SConstruct
