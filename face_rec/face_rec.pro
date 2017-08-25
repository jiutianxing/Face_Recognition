QT += core
QT -= gui

CONFIG += c++11

TARGET = face_rec
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    take_photo.cpp \
    train.cpp \
    face_recognise.cpp

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


INCLUDEPATH += /usr/local/opencv320/include \
/usr/local/opencv320/include/opencv \
/usr/local/opencv320/include/opencv2

LIBS += /usr/local/opencv320/lib/libopencv_aruco.so \
/usr/local/opencv320/lib/libopencv_bgsegm.so \
/usr/local/opencv320/lib/libopencv_bioinspired.so \
/usr/local/opencv320/lib/libopencv_calib3d.so \
/usr/local/opencv320/lib/libopencv_ccalib.so \
/usr/local/opencv320/lib/libopencv_core.so \
/usr/local/opencv320/lib/libopencv_datasets.so \
/usr/local/opencv320/lib/libopencv_dnn.so \
/usr/local/opencv320/lib/libopencv_dpm.so \
/usr/local/opencv320/lib/libopencv_face.so \
/usr/local/opencv320/lib/libopencv_features2d.so \
/usr/local/opencv320/lib/libopencv_flann.so \
/usr/local/opencv320/lib/libopencv_freetype.so \
/usr/local/opencv320/lib/libopencv_fuzzy.so \
/usr/local/opencv320/lib/libopencv_highgui.so \
/usr/local/opencv320/lib/libopencv_imgcodecs.so \
/usr/local/opencv320/lib/libopencv_imgproc.so \
/usr/local/opencv320/lib/libopencv_ml.so \
/usr/local/opencv320/lib/libopencv_objdetect.so \
/usr/local/opencv320/lib/libopencv_optflow.so \
/usr/local/opencv320/lib/libopencv_phase_unwrapping.so \
/usr/local/opencv320/lib/libopencv_photo.so \
/usr/local/opencv320/lib/libopencv_plot.so \
/usr/local/opencv320/lib/libopencv_reg.so \
/usr/local/opencv320/lib/libopencv_rgbd.so \
/usr/local/opencv320/lib/libopencv_saliency.so \
/usr/local/opencv320/lib/libopencv_shape.so \
/usr/local/opencv320/lib/libopencv_stereo.so \
/usr/local/opencv320/lib/libopencv_stitching.so \
/usr/local/opencv320/lib/libopencv_structured_light.so \
/usr/local/opencv320/lib/libopencv_superres.so \
/usr/local/opencv320/lib/libopencv_surface_matching.so \
/usr/local/opencv320/lib/libopencv_text.so \
/usr/local/opencv320/lib/libopencv_tracking.so \
/usr/local/opencv320/lib/libopencv_video.so \
/usr/local/opencv320/lib/libopencv_videoio.so \
/usr/local/opencv320/lib/libopencv_videostab.so \
/usr/local/opencv320/lib/libopencv_xfeatures2d.so \
/usr/local/opencv320/lib/libopencv_ximgproc.so \
/usr/local/opencv320/lib/libopencv_xobjdetect.so \
/usr/local/opencv320/lib/libopencv_xphoto.so \

HEADERS += \
    take_photo.h \
    train.h \
    face_recognise.h

DISTFILES += \
    add_label.py
