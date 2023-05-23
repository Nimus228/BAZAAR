QT       += core gui network

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++17

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    chat.cpp \
    choosing.cpp \
    createadv.cpp \
    main.cpp \
    mainscreen.cpp \
    mainwindow.cpp \
    messages.cpp \
    minimenu.cpp \
    modminmenu.cpp \
    profilcustomer.cpp \
    profilemod.cpp \
    profileview.cpp \
    profilexecutor.cpp \
    registration.cpp \
    report.cpp \
    reportview.cpp \
    viewadv.cpp

HEADERS += \
    chat.h \
    choosing.h \
    createadv.h \
    mainscreen.h \
    mainwindow.h \
    messages.h \
    minimenu.h \
    modminmenu.h \
    profilcustomer.h \
    profilemod.h \
    profileview.h \
    profilexecutor.h \
    registration.h \
    report.h \
    reportview.h \
    viewadv.h

FORMS += \
    chat.ui \
    choosing.ui \
    createadv.ui \
    mainscreen.ui \
    mainwindow.ui \
    messages.ui \
    minimenu.ui \
    modminmenu.ui \
    profilcustomer.ui \
    profilemod.ui \
    profileview.ui \
    profilexecutor.ui \
    registration.ui \
    report.ui \
    reportview.ui \
    viewadv.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
