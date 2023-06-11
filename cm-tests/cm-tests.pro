QT += testlib
QT -= gui

TARGET = client-tests

CONFIG += c++17
CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

TEMPLATE = app

INCLUDEPATH += source

SOURCES +=  source/models/client-tests.cpp
