QT += core
QT -= gui

CONFIG += c++11

TARGET = DitchingBall
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    src/Block.cpp

HEADERS += \
    include/Block.h
