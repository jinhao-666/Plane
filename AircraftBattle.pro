
QT       += multimedia
QT       += core gui
QT       += sql
QT       += widgets

TARGET = AircraftBattle
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS
RC_FILE  += AircraftBattle.rc



SOURCES += main.cpp \
    battleWidget.cpp \
    aircraft.cpp \
    myAircraft.cpp \
    otherAircraft.cpp \
    bullet.cpp \
    myBullet.cpp \
    otherBullet.cpp \
    global.cpp \
    mainMenuWidget.cpp \
    newGameWidget.cpp \
    themeWidget.cpp \
    gameBoardWidget.cpp \
    gameOverWidget.cpp

HEADERS  += \
    battleWidget.h \
    aircraft.h \
    myAircraft.h \
    otherAircraft.h \
    bullet.h \
    myBullet.h \
    otherBullet.h \
    global.h \
    mainMenuWidget.h \
    newGameWidget.h \
    themeWidget.h \
    gameBoardWidget.h \
    gameOverWidget.h

RESOURCES += \
    image.qrc \
    sound.qrc \
    sql.qrc
CONFIG += resources_big

