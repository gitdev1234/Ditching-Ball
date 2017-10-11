QT += core
QT -= gui

CONFIG += c++11

TARGET = DitchingBall
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    Block.cpp \
    src/Block.cpp

HEADERS += \
    Block.h \
    include/Block.h
