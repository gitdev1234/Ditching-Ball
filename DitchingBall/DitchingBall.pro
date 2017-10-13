QT += core
QT -= gui

CONFIG += c++11

TARGET = DitchingBall
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

INCLUDEPATH += include/
INCLUDEPATH += test/

SOURCES += main.cpp \
    src/Block.cpp \
    src/Player.cpp \
    test/BlockTest.cpp \
    test/PlayerTest.cpp

HEADERS += \
    include/Block.h \
    include/Player.h \
    include/catch.hpp \
    include/types.h \
    include/Player.h
