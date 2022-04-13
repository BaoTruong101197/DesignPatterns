TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    AppService.cpp \
    UserProfileService.cpp \
    AccountsHmiService.cpp

HEADERS += \
    AppService.h \
    UserProfileService.h \
    AccountsHmiService.h
