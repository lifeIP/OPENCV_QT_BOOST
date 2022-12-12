#-------------------------------------------------
#
# Project created by QtCreator 2022-11-25T22:20:41
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FaceID
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

QT += sql

SOURCES += \
        main.cpp \
        mainwindow.cpp \
    sqlite-amalgamation-3400000/shell.c \
    sqlite-amalgamation-3400000/sqlite3.c \
    webcam.cpp \
    facerecognition.cpp \
    database.cpp

HEADERS += \
        mainwindow.h \
    sqlite-amalgamation-3400000/sqlite3.h \
    sqlite-amalgamation-3400000/sqlite3ext.h \
    sqlite-amalgamation-3400000/DB.hpp \
    webcam.h \
    facerecognition.h \
    database.h \
    constants.h

FORMS += \
        mainwindow.ui \
    webcam.ui

INCLUDEPATH += C:\library\OpenCV\build_for_qt_desctop3\install\include

LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_calib3d3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_core3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_dnn3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_face3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_features2d3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_flann3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_highgui3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_imgcodecs3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_imgproc3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_ml3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_objdetect3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_photo3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_shape3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_stitching3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_superres3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_video3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_videoio3415.dll
LIBS += C:\library\OpenCV\build_for_qt_desctop3\install\x64\mingw\bin\libopencv_videostab3415.dll




# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
