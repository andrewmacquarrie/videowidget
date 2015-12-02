TEMPLATE = app
TARGET = videowidget

QT += multimedia multimediawidgets

HEADERS = \
    videoplayer.h \
    server.h

SOURCES = \
    main.cpp \
    videoplayer.cpp \
    server.cpp

target.path = C:/Projects/videowidget/videowidget
INSTALLS += target

QT+=widgets