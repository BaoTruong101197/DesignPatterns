TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += \
        main.cpp \
    Ticket.cpp \
    PromotionTicket.cpp \
    NoDiscountTicket.cpp \
    HalfDiscountTicket.cpp \
    QuarterDiscountTicket.cpp \
    PlainTicket.cpp

HEADERS += \
    Ticket.h \
    PromotionTicket.h \
    NoDiscountTicket.h \
    HalfDiscountTicket.h \
    QuarterDiscountTicket.h \
    PlainTicket.h
