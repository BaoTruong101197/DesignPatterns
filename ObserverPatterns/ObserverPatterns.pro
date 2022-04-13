TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    IBaseListener.cpp \
    IOnListener.cpp \
    DataBase.cpp \
    ObserverOne.cpp

HEADERS += \
    IBaseListener.h \
    IOnListener.h \
    DataBase.h \
    ObserverOne.h
