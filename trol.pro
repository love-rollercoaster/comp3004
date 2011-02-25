#-------------------------------------------------
# The Rollecoaster of Love [TROL]
# Project configuration sexyness
#-------------------------------------------------

QT += core gui network svg
TARGET   = trol
TEMPLATE = app
CONFIG  += warn_on


#-------------------------------------------------
# File config
#-------------------------------------------------

warning(Using undocumented feature $$files. Must test on lambda machines.)

SOURCES   += $$files(*.cpp)
HEADERS   += $$files(*.h)
FORMS     += $$files(*.ui)
RESOURCES += $$files(*.qrc)


#-------------------------------------------------
# Build step: Mirrorring dropbox's img folder
#-------------------------------------------------

win32 {
	dropbox_image_sync.commands += @call $${PWD}/scripts/mirror_images.bat
}

unix {
    dropbox_image_sync.commands += @echo Dropbox image sync not implemented.
}

QMAKE_EXTRA_TARGETS += dropbox_image_sync
PRE_TARGETDEPS += dropbox_image_sync
