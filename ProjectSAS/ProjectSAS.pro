QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjectSAS
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += main.cpp \
    application.cpp \
    appointment.cpp \
    assistant.cpp \
    dboperator.cpp \
    medjournal.cpp \
    owner.cpp \
    pet.cpp \
    user.cpp \
    vetvisits.cpp \
    logininterface.cpp \
    regularExpression.cpp \
    order.cpp





HEADERS += \
    application.h \
    appointment.h \
    assistant.h \
    dboperator.h \
    medjournal.h \
    owner.h \
    pet.h \
    user.h \
    vetvisits.h \
    regularExpression.h \
    logininterface.h \
    order.h



FORMS += \
    application.ui
