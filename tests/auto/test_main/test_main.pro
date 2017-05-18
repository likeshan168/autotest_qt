include(../gtest_dependency.pri)

TEMPLATE = app
CONFIG += console c++11
#CONFIG += c++11

CONFIG -= app_bundle
CONFIG += thread
#CONFIG -= qt
QT += qml quick
HEADERS +=     tst_test_main.h \
    calculation.h \
    mockcalc.h

SOURCES +=     main.cpp

DISTFILES += \
    main.qml

RESOURCES += \
    qml.qrc
