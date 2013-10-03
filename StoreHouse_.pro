#-------------------------------------------------
#
# Project created by QtCreator 2012-10-29T19:53:57
#
#-------------------------------------------------

QT       += core gui opengl


INCLUDEPATH +=D:\MySQL\include
LIBS +=D:\MySQL\lib\opt\libmysql.lib
LIBS +=D:\MySQL\lib\opt\mysqlclient.lib
LIBS +=D:\MySQL\lib\opt\libmysql.dll

TARGET = StoreHouse_
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dbms.cpp \
    conhouse.cpp \
    conshelf.cpp \
    conitem.cpp \
    conbill.cpp \
    storescene.cpp \
    shelfdialog.cpp \
    housedialog.cpp \
    h3dDialog.cpp  \
    glwidget.cpp  \
    qtlogo.cpp
HEADERS  += mainwindow.h \
    dbms.h \
    storeitem.h \
    storeshelf.h \
    storehouse.h \
    storebill.h \
    conhouse.h \
    conshelf.h \
    conitem.h \
    conbill.h \
    storescene.h \
    shelfdialog.h \
    housedialog.h \
    user.h \
    h3dDialog.h \
    glwidget.h \
    qtlogo.h

FORMS    += mainwindow.ui \
    shelfdialog.ui \
    housedialog.ui
