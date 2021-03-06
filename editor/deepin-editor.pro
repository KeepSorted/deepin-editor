######################################################################
# Automatically generated by qmake (3.0) ?? 2? 4 17:49:37 2017
######################################################################

TEMPLATE = app
TARGET = deepin-editor

CONFIG += link_pkgconfig 
CONFIG += c++11 
PKGCONFIG += xcb xcb-util dtkwidget 
RESOURCES = deepin-editor.qrc

# Input
HEADERS += src/window.h \
           src/startmanager.h \		   
           src/dbusinterface.h \		   
	   src/texteditor.h \		   
	   src/jumplinebar.h \		   
	   src/findbar.h \		   
	   src/replacebar.h \		   
	   src/linebar.h \		   
	   src/settings.h \		   
	   src/tabbar.h \		   
	   src/tabwidget.h \		   
	   src/editor.h \		   
	   src/wordcompletionwindow.h \		   
	   src/wordcompletionitem.h \		   
	   src/uncommentselection.h \		   
	   src/utils.h		   
SOURCES += src/window.cpp \
           src/startmanager.cpp \		   
           src/dbusinterface.cpp \		   
	   src/texteditor.cpp \		   
	   src/jumplinebar.cpp \		   
	   src/findbar.cpp \		   
	   src/replacebar.cpp \		   
	   src/linebar.cpp \		   
	   src/settings.cpp \		   
	   src/tabbar.cpp \		   
	   src/tabwidget.cpp \		   
	   src/editor.cpp \		   
	   src/utils.cpp \		   
	   src/wordcompletionwindow.cpp \		   
	   src/wordcompletionitem.cpp \		   
	   src/uncommentselection.cpp \		   
	   src/main.cpp		   
		   
QT += KSyntaxHighlighting
QT += core
QT += dbus
QT += gui
QT += network
QT += printsupport
QT += svg
QT += widgets
QT += x11extras
QT += sql

QMAKE_CXXFLAGS += -g
LIBS += -lX11 -lXext -lXtst

binary.files += $${OUT_PWD}/deepin-editor
binary.path = $${PREFIX}/bin/
INSTALLS += binary
