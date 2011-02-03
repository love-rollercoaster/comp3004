#-------------------------------------------------
#
# Project created by QtCreator 2011-01-13T06:27:54
#
#-------------------------------------------------

QT       += core gui svg

TARGET = trol
TEMPLATE = app


SOURCES += main.cpp\
    loginform.cpp \
    usercontroller.cpp \
    createuserform.cpp \
    createfacilityform.cpp \
    addpatienttobedform.cpp \
    removepatientfrombedform.cpp \
    viewwaitinglist.cpp \
    addpatienttowaitinglistform.cpp \
    movepatienttobed.cpp \
    generatereport.cpp \
    mapview.cpp \
    mapform.cpp \
    mapcontroller.cpp \
    facilitymapnode.cpp \
    facility.cpp \
    viewfacilityinfoform.cpp \
    viewreportform.cpp

HEADERS  += loginform.h \
    usercontroller.h \
    createuserform.h \
    createfacilityform.h \
    addpatienttobedform.h \
    removepatientfrombedform.h \
    viewwaitinglist.h \
    addpatienttowaitinglistform.h \
    movepatienttobed.h \
    generatereport.h \
    mapview.h \
    mapform.h \
    mapcontroller.h \
    facilitymapnode.h \
    facility.h \
    viewfacilityinfoform.h \
    viewreportform.h

FORMS    += loginform.ui \
    createuserform.ui \
    addpatienttobedform.ui \
    createfacilityform.ui \
    removepatientfrombedform.ui \
    viewwaitinglist.ui \
    addpatienttowaitinglistform.ui \
    movepatienttobed.ui \
    generatereport.ui \
    mapform.ui \
    viewfacilityinfoform.ui \
    viewreportform.ui

RESOURCES += \
    map.qrc
