TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    GalaxyS22Ultra.cpp \
    IPhone13Pro.cpp \
    SamsungTab.cpp \
    Ipad.cpp \
    SamsungFactory.cpp \
    Product.cpp \
    Enums.cpp \
    AppleFactory.cpp \
    AbstractFactory.cpp

HEADERS += \
    GalaxyS22Ultra.h \
    IPhone13Pro.h \
    SamsungTab.h \
    Ipad.h \
    SamsungFactory.h \
    Product.h \
    Enums.h \
    AppleFactory.h \
    AbstractFactory.h
