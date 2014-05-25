#############################################################################
# Makefile for building: Reabilitation
# Generated by qmake (2.01a) (Qt 4.8.1) on: Sun May 25 18:40:59 2014
# Project:  Reabilitation.pro
# Template: app
# Command: /usr/bin/qmake-qt4 -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile Reabilitation.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_DECLARATIVE_LIB -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++ -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4/QtDeclarative -I/usr/include/qt4 -Iqmlapplicationviewer -I/home/dmitriy/ONPU/Диплом/ForDesign/Reabilitation/../../../../../usr/local/include -I/home/dmitriy/ONPU/Диплом/ForDesign/Reabilitation/../../../../../usr/local/include -I/home/dmitriy/ONPU/Диплом/ForDesign/Reabilitation/../../../../../usr/local/include -I/usr/local/include -I/usr/local/include -I.
LINK          = g++
LFLAGS        = -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/i386-linux-gnu -L/home/dmitriy/ONPU/Диплом/ForDesign/Reabilitation/../../../../../usr/local/lib/ -lopencv_core -lopencv_highgui -lopencv_imgproc -L/home/dmitriy/ONPU/Диплом/ForDesign/Reabilitation/../../../../../../usr/local/lib/ -lopencv_video -lopencv_nonfree -lQtDeclarative -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake-qt4
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = main.cpp \
		mainmenu.cpp \
		settings.cpp \
		process.cpp \
		algomanager.cpp \
		skeletization.cpp \
		qmlapplicationviewer/qmlapplicationviewer.cpp moc_qmlapplicationviewer.cpp \
		moc_mainmenu.cpp \
		moc_settings.cpp \
		moc_process.cpp
OBJECTS       = main.o \
		mainmenu.o \
		settings.o \
		process.o \
		algomanager.o \
		skeletization.o \
		qmlapplicationviewer.o \
		moc_qmlapplicationviewer.o \
		moc_mainmenu.o \
		moc_settings.o \
		moc_process.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		qmlapplicationviewer/qmlapplicationviewer.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		Reabilitation.pro
QMAKE_TARGET  = Reabilitation
DESTDIR       = 
TARGET        = Reabilitation

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET):  $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: Reabilitation.pro  /usr/share/qt4/mkspecs/linux-g++/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		qmlapplicationviewer/qmlapplicationviewer.pri \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/i386-linux-gnu/libQtDeclarative.prl \
		/usr/lib/i386-linux-gnu/libQtGui.prl \
		/usr/lib/i386-linux-gnu/libQtCore.prl
	$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile Reabilitation.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
qmlapplicationviewer/qmlapplicationviewer.pri:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/i386-linux-gnu/libQtDeclarative.prl:
/usr/lib/i386-linux-gnu/libQtGui.prl:
/usr/lib/i386-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -spec /usr/share/qt4/mkspecs/linux-g++ -o Makefile Reabilitation.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/Reabilitation1.0.0 || $(MKDIR) .tmp/Reabilitation1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/Reabilitation1.0.0/ && $(COPY_FILE) --parents qmlapplicationviewer/qmlapplicationviewer.h mainmenu.h settings.h process.h ialgorithm.h algomanager.h itracking.h idms.h iskeletization.h skeletization.h .tmp/Reabilitation1.0.0/ && $(COPY_FILE) --parents main.cpp mainmenu.cpp settings.cpp process.cpp algomanager.cpp skeletization.cpp qmlapplicationviewer/qmlapplicationviewer.cpp .tmp/Reabilitation1.0.0/ && (cd `dirname .tmp/Reabilitation1.0.0` && $(TAR) Reabilitation1.0.0.tar Reabilitation1.0.0 && $(COMPRESS) Reabilitation1.0.0.tar) && $(MOVE) `dirname .tmp/Reabilitation1.0.0`/Reabilitation1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/Reabilitation1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_qmlapplicationviewer.cpp moc_mainmenu.cpp moc_settings.cpp moc_process.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_qmlapplicationviewer.cpp moc_mainmenu.cpp moc_settings.cpp moc_process.cpp
moc_qmlapplicationviewer.cpp: qmlapplicationviewer/qmlapplicationviewer.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) qmlapplicationviewer/qmlapplicationviewer.h -o moc_qmlapplicationviewer.cpp

moc_mainmenu.cpp: settings.h \
		/usr/local/include/opencv/highgui.h \
		/usr/local/include/opencv2/core/core_c.h \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		process.h \
		algomanager.h \
		ialgorithm.h \
		/usr/local/include/opencv/cvaux.h \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/legacy/legacy.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/legacy/compat.hpp \
		/usr/local/include/opencv2/legacy/blobtrack.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp \
		/usr/local/include/opencv/cv.h \
		/usr/local/include/opencv2/flann/flann.hpp \
		/usr/local/include/opencv2/flann/flann_base.hpp \
		/usr/local/include/opencv2/flann/general.h \
		/usr/local/include/opencv2/flann/matrix.h \
		/usr/local/include/opencv2/flann/params.h \
		/usr/local/include/opencv2/flann/any.h \
		/usr/local/include/opencv2/flann/saving.h \
		/usr/local/include/opencv2/flann/nn_index.h \
		/usr/local/include/opencv2/flann/result_set.h \
		/usr/local/include/opencv2/flann/all_indices.h \
		/usr/local/include/opencv2/flann/kdtree_index.h \
		/usr/local/include/opencv2/flann/dynamic_bitset.h \
		/usr/local/include/opencv2/flann/dist.h \
		/usr/local/include/opencv2/flann/heap.h \
		/usr/local/include/opencv2/flann/allocator.h \
		/usr/local/include/opencv2/flann/random.h \
		/usr/local/include/opencv2/flann/kdtree_single_index.h \
		/usr/local/include/opencv2/flann/kmeans_index.h \
		/usr/local/include/opencv2/flann/logger.h \
		/usr/local/include/opencv2/flann/composite_index.h \
		/usr/local/include/opencv2/flann/linear_index.h \
		/usr/local/include/opencv2/flann/hierarchical_clustering_index.h \
		/usr/local/include/opencv2/flann/lsh_index.h \
		/usr/local/include/opencv2/flann/lsh_table.h \
		/usr/local/include/opencv2/flann/autotuned_index.h \
		/usr/local/include/opencv2/flann/ground_truth.h \
		/usr/local/include/opencv2/flann/index_testing.h \
		/usr/local/include/opencv2/flann/timer.h \
		/usr/local/include/opencv2/flann/sampling.h \
		/usr/local/include/opencv2/core/internal.hpp \
		/usr/local/include/opencv2/core/eigen.hpp \
		skeletization.h \
		iskeletization.h \
		mainmenu.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) mainmenu.h -o moc_mainmenu.cpp

moc_settings.cpp: /usr/local/include/opencv/highgui.h \
		/usr/local/include/opencv2/core/core_c.h \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		settings.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) settings.h -o moc_settings.cpp

moc_process.cpp: algomanager.h \
		ialgorithm.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/core/core_c.h \
		/usr/local/include/opencv/cvaux.h \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/legacy/legacy.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/legacy/compat.hpp \
		/usr/local/include/opencv2/legacy/blobtrack.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp \
		/usr/local/include/opencv/cv.h \
		/usr/local/include/opencv2/flann/flann.hpp \
		/usr/local/include/opencv2/flann/flann_base.hpp \
		/usr/local/include/opencv2/flann/general.h \
		/usr/local/include/opencv2/flann/matrix.h \
		/usr/local/include/opencv2/flann/params.h \
		/usr/local/include/opencv2/flann/any.h \
		/usr/local/include/opencv2/flann/saving.h \
		/usr/local/include/opencv2/flann/nn_index.h \
		/usr/local/include/opencv2/flann/result_set.h \
		/usr/local/include/opencv2/flann/all_indices.h \
		/usr/local/include/opencv2/flann/kdtree_index.h \
		/usr/local/include/opencv2/flann/dynamic_bitset.h \
		/usr/local/include/opencv2/flann/dist.h \
		/usr/local/include/opencv2/flann/heap.h \
		/usr/local/include/opencv2/flann/allocator.h \
		/usr/local/include/opencv2/flann/random.h \
		/usr/local/include/opencv2/flann/kdtree_single_index.h \
		/usr/local/include/opencv2/flann/kmeans_index.h \
		/usr/local/include/opencv2/flann/logger.h \
		/usr/local/include/opencv2/flann/composite_index.h \
		/usr/local/include/opencv2/flann/linear_index.h \
		/usr/local/include/opencv2/flann/hierarchical_clustering_index.h \
		/usr/local/include/opencv2/flann/lsh_index.h \
		/usr/local/include/opencv2/flann/lsh_table.h \
		/usr/local/include/opencv2/flann/autotuned_index.h \
		/usr/local/include/opencv2/flann/ground_truth.h \
		/usr/local/include/opencv2/flann/index_testing.h \
		/usr/local/include/opencv2/flann/timer.h \
		/usr/local/include/opencv2/flann/sampling.h \
		/usr/local/include/opencv2/core/internal.hpp \
		/usr/local/include/opencv2/core/eigen.hpp \
		/usr/local/include/opencv/highgui.h \
		skeletization.h \
		iskeletization.h \
		process.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) process.h -o moc_process.cpp

compiler_rcc_make_all:
compiler_rcc_clean:
compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all:
compiler_uic_clean:
compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean 

####### Compile

main.o: main.cpp mainmenu.h \
		settings.h \
		/usr/local/include/opencv/highgui.h \
		/usr/local/include/opencv2/core/core_c.h \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		process.h \
		algomanager.h \
		ialgorithm.h \
		/usr/local/include/opencv/cvaux.h \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/legacy/legacy.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/legacy/compat.hpp \
		/usr/local/include/opencv2/legacy/blobtrack.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp \
		/usr/local/include/opencv/cv.h \
		/usr/local/include/opencv2/flann/flann.hpp \
		/usr/local/include/opencv2/flann/flann_base.hpp \
		/usr/local/include/opencv2/flann/general.h \
		/usr/local/include/opencv2/flann/matrix.h \
		/usr/local/include/opencv2/flann/params.h \
		/usr/local/include/opencv2/flann/any.h \
		/usr/local/include/opencv2/flann/saving.h \
		/usr/local/include/opencv2/flann/nn_index.h \
		/usr/local/include/opencv2/flann/result_set.h \
		/usr/local/include/opencv2/flann/all_indices.h \
		/usr/local/include/opencv2/flann/kdtree_index.h \
		/usr/local/include/opencv2/flann/dynamic_bitset.h \
		/usr/local/include/opencv2/flann/dist.h \
		/usr/local/include/opencv2/flann/heap.h \
		/usr/local/include/opencv2/flann/allocator.h \
		/usr/local/include/opencv2/flann/random.h \
		/usr/local/include/opencv2/flann/kdtree_single_index.h \
		/usr/local/include/opencv2/flann/kmeans_index.h \
		/usr/local/include/opencv2/flann/logger.h \
		/usr/local/include/opencv2/flann/composite_index.h \
		/usr/local/include/opencv2/flann/linear_index.h \
		/usr/local/include/opencv2/flann/hierarchical_clustering_index.h \
		/usr/local/include/opencv2/flann/lsh_index.h \
		/usr/local/include/opencv2/flann/lsh_table.h \
		/usr/local/include/opencv2/flann/autotuned_index.h \
		/usr/local/include/opencv2/flann/ground_truth.h \
		/usr/local/include/opencv2/flann/index_testing.h \
		/usr/local/include/opencv2/flann/timer.h \
		/usr/local/include/opencv2/flann/sampling.h \
		/usr/local/include/opencv2/core/internal.hpp \
		/usr/local/include/opencv2/core/eigen.hpp \
		skeletization.h \
		iskeletization.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o main.cpp

mainmenu.o: mainmenu.cpp mainmenu.h \
		settings.h \
		/usr/local/include/opencv/highgui.h \
		/usr/local/include/opencv2/core/core_c.h \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		process.h \
		algomanager.h \
		ialgorithm.h \
		/usr/local/include/opencv/cvaux.h \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/legacy/legacy.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/legacy/compat.hpp \
		/usr/local/include/opencv2/legacy/blobtrack.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp \
		/usr/local/include/opencv/cv.h \
		/usr/local/include/opencv2/flann/flann.hpp \
		/usr/local/include/opencv2/flann/flann_base.hpp \
		/usr/local/include/opencv2/flann/general.h \
		/usr/local/include/opencv2/flann/matrix.h \
		/usr/local/include/opencv2/flann/params.h \
		/usr/local/include/opencv2/flann/any.h \
		/usr/local/include/opencv2/flann/saving.h \
		/usr/local/include/opencv2/flann/nn_index.h \
		/usr/local/include/opencv2/flann/result_set.h \
		/usr/local/include/opencv2/flann/all_indices.h \
		/usr/local/include/opencv2/flann/kdtree_index.h \
		/usr/local/include/opencv2/flann/dynamic_bitset.h \
		/usr/local/include/opencv2/flann/dist.h \
		/usr/local/include/opencv2/flann/heap.h \
		/usr/local/include/opencv2/flann/allocator.h \
		/usr/local/include/opencv2/flann/random.h \
		/usr/local/include/opencv2/flann/kdtree_single_index.h \
		/usr/local/include/opencv2/flann/kmeans_index.h \
		/usr/local/include/opencv2/flann/logger.h \
		/usr/local/include/opencv2/flann/composite_index.h \
		/usr/local/include/opencv2/flann/linear_index.h \
		/usr/local/include/opencv2/flann/hierarchical_clustering_index.h \
		/usr/local/include/opencv2/flann/lsh_index.h \
		/usr/local/include/opencv2/flann/lsh_table.h \
		/usr/local/include/opencv2/flann/autotuned_index.h \
		/usr/local/include/opencv2/flann/ground_truth.h \
		/usr/local/include/opencv2/flann/index_testing.h \
		/usr/local/include/opencv2/flann/timer.h \
		/usr/local/include/opencv2/flann/sampling.h \
		/usr/local/include/opencv2/core/internal.hpp \
		/usr/local/include/opencv2/core/eigen.hpp \
		skeletization.h \
		iskeletization.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainmenu.o mainmenu.cpp

settings.o: settings.cpp settings.h \
		/usr/local/include/opencv/highgui.h \
		/usr/local/include/opencv2/core/core_c.h \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/highgui/highgui.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o settings.o settings.cpp

process.o: process.cpp process.h \
		algomanager.h \
		ialgorithm.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/core/core_c.h \
		/usr/local/include/opencv/cvaux.h \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/legacy/legacy.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/legacy/compat.hpp \
		/usr/local/include/opencv2/legacy/blobtrack.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp \
		/usr/local/include/opencv/cv.h \
		/usr/local/include/opencv2/flann/flann.hpp \
		/usr/local/include/opencv2/flann/flann_base.hpp \
		/usr/local/include/opencv2/flann/general.h \
		/usr/local/include/opencv2/flann/matrix.h \
		/usr/local/include/opencv2/flann/params.h \
		/usr/local/include/opencv2/flann/any.h \
		/usr/local/include/opencv2/flann/saving.h \
		/usr/local/include/opencv2/flann/nn_index.h \
		/usr/local/include/opencv2/flann/result_set.h \
		/usr/local/include/opencv2/flann/all_indices.h \
		/usr/local/include/opencv2/flann/kdtree_index.h \
		/usr/local/include/opencv2/flann/dynamic_bitset.h \
		/usr/local/include/opencv2/flann/dist.h \
		/usr/local/include/opencv2/flann/heap.h \
		/usr/local/include/opencv2/flann/allocator.h \
		/usr/local/include/opencv2/flann/random.h \
		/usr/local/include/opencv2/flann/kdtree_single_index.h \
		/usr/local/include/opencv2/flann/kmeans_index.h \
		/usr/local/include/opencv2/flann/logger.h \
		/usr/local/include/opencv2/flann/composite_index.h \
		/usr/local/include/opencv2/flann/linear_index.h \
		/usr/local/include/opencv2/flann/hierarchical_clustering_index.h \
		/usr/local/include/opencv2/flann/lsh_index.h \
		/usr/local/include/opencv2/flann/lsh_table.h \
		/usr/local/include/opencv2/flann/autotuned_index.h \
		/usr/local/include/opencv2/flann/ground_truth.h \
		/usr/local/include/opencv2/flann/index_testing.h \
		/usr/local/include/opencv2/flann/timer.h \
		/usr/local/include/opencv2/flann/sampling.h \
		/usr/local/include/opencv2/core/internal.hpp \
		/usr/local/include/opencv2/core/eigen.hpp \
		/usr/local/include/opencv/highgui.h \
		skeletization.h \
		iskeletization.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o process.o process.cpp

algomanager.o: algomanager.cpp algomanager.h \
		ialgorithm.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/core/core_c.h \
		/usr/local/include/opencv/cvaux.h \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/legacy/legacy.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/legacy/compat.hpp \
		/usr/local/include/opencv2/legacy/blobtrack.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp \
		/usr/local/include/opencv/cv.h \
		/usr/local/include/opencv2/flann/flann.hpp \
		/usr/local/include/opencv2/flann/flann_base.hpp \
		/usr/local/include/opencv2/flann/general.h \
		/usr/local/include/opencv2/flann/matrix.h \
		/usr/local/include/opencv2/flann/params.h \
		/usr/local/include/opencv2/flann/any.h \
		/usr/local/include/opencv2/flann/saving.h \
		/usr/local/include/opencv2/flann/nn_index.h \
		/usr/local/include/opencv2/flann/result_set.h \
		/usr/local/include/opencv2/flann/all_indices.h \
		/usr/local/include/opencv2/flann/kdtree_index.h \
		/usr/local/include/opencv2/flann/dynamic_bitset.h \
		/usr/local/include/opencv2/flann/dist.h \
		/usr/local/include/opencv2/flann/heap.h \
		/usr/local/include/opencv2/flann/allocator.h \
		/usr/local/include/opencv2/flann/random.h \
		/usr/local/include/opencv2/flann/kdtree_single_index.h \
		/usr/local/include/opencv2/flann/kmeans_index.h \
		/usr/local/include/opencv2/flann/logger.h \
		/usr/local/include/opencv2/flann/composite_index.h \
		/usr/local/include/opencv2/flann/linear_index.h \
		/usr/local/include/opencv2/flann/hierarchical_clustering_index.h \
		/usr/local/include/opencv2/flann/lsh_index.h \
		/usr/local/include/opencv2/flann/lsh_table.h \
		/usr/local/include/opencv2/flann/autotuned_index.h \
		/usr/local/include/opencv2/flann/ground_truth.h \
		/usr/local/include/opencv2/flann/index_testing.h \
		/usr/local/include/opencv2/flann/timer.h \
		/usr/local/include/opencv2/flann/sampling.h \
		/usr/local/include/opencv2/core/internal.hpp \
		/usr/local/include/opencv2/core/eigen.hpp \
		/usr/local/include/opencv/highgui.h \
		skeletization.h \
		iskeletization.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o algomanager.o algomanager.cpp

skeletization.o: skeletization.cpp skeletization.h \
		iskeletization.h \
		/usr/local/include/opencv2/highgui/highgui.hpp \
		/usr/local/include/opencv2/core/core.hpp \
		/usr/local/include/opencv2/core/types_c.h \
		/usr/local/include/opencv2/core/version.hpp \
		/usr/local/include/opencv2/core/operations.hpp \
		/usr/local/include/opencv2/core/mat.hpp \
		/usr/local/include/opencv2/highgui/highgui_c.h \
		/usr/local/include/opencv2/core/core_c.h \
		/usr/local/include/opencv/cvaux.h \
		/usr/local/include/opencv2/imgproc/imgproc_c.h \
		/usr/local/include/opencv2/imgproc/types_c.h \
		/usr/local/include/opencv2/imgproc/imgproc.hpp \
		/usr/local/include/opencv2/video/tracking.hpp \
		/usr/local/include/opencv2/video/background_segm.hpp \
		/usr/local/include/opencv2/features2d/features2d.hpp \
		/usr/local/include/opencv2/flann/miniflann.hpp \
		/usr/local/include/opencv2/flann/defines.h \
		/usr/local/include/opencv2/flann/config.h \
		/usr/local/include/opencv2/calib3d/calib3d.hpp \
		/usr/local/include/opencv2/objdetect/objdetect.hpp \
		/usr/local/include/opencv2/legacy/legacy.hpp \
		/usr/local/include/opencv2/ml/ml.hpp \
		/usr/local/include/opencv2/legacy/compat.hpp \
		/usr/local/include/opencv2/legacy/blobtrack.hpp \
		/usr/local/include/opencv2/contrib/contrib.hpp \
		/usr/local/include/opencv2/contrib/retina.hpp \
		/usr/local/include/opencv2/contrib/openfabmap.hpp \
		/usr/local/include/opencv/cv.h \
		/usr/local/include/opencv2/flann/flann.hpp \
		/usr/local/include/opencv2/flann/flann_base.hpp \
		/usr/local/include/opencv2/flann/general.h \
		/usr/local/include/opencv2/flann/matrix.h \
		/usr/local/include/opencv2/flann/params.h \
		/usr/local/include/opencv2/flann/any.h \
		/usr/local/include/opencv2/flann/saving.h \
		/usr/local/include/opencv2/flann/nn_index.h \
		/usr/local/include/opencv2/flann/result_set.h \
		/usr/local/include/opencv2/flann/all_indices.h \
		/usr/local/include/opencv2/flann/kdtree_index.h \
		/usr/local/include/opencv2/flann/dynamic_bitset.h \
		/usr/local/include/opencv2/flann/dist.h \
		/usr/local/include/opencv2/flann/heap.h \
		/usr/local/include/opencv2/flann/allocator.h \
		/usr/local/include/opencv2/flann/random.h \
		/usr/local/include/opencv2/flann/kdtree_single_index.h \
		/usr/local/include/opencv2/flann/kmeans_index.h \
		/usr/local/include/opencv2/flann/logger.h \
		/usr/local/include/opencv2/flann/composite_index.h \
		/usr/local/include/opencv2/flann/linear_index.h \
		/usr/local/include/opencv2/flann/hierarchical_clustering_index.h \
		/usr/local/include/opencv2/flann/lsh_index.h \
		/usr/local/include/opencv2/flann/lsh_table.h \
		/usr/local/include/opencv2/flann/autotuned_index.h \
		/usr/local/include/opencv2/flann/ground_truth.h \
		/usr/local/include/opencv2/flann/index_testing.h \
		/usr/local/include/opencv2/flann/timer.h \
		/usr/local/include/opencv2/flann/sampling.h \
		/usr/local/include/opencv2/core/internal.hpp \
		/usr/local/include/opencv2/core/eigen.hpp \
		/usr/local/include/opencv/highgui.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o skeletization.o skeletization.cpp

qmlapplicationviewer.o: qmlapplicationviewer/qmlapplicationviewer.cpp qmlapplicationviewer/qmlapplicationviewer.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qmlapplicationviewer.o qmlapplicationviewer/qmlapplicationviewer.cpp

moc_qmlapplicationviewer.o: moc_qmlapplicationviewer.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_qmlapplicationviewer.o moc_qmlapplicationviewer.cpp

moc_mainmenu.o: moc_mainmenu.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainmenu.o moc_mainmenu.cpp

moc_settings.o: moc_settings.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_settings.o moc_settings.cpp

moc_process.o: moc_process.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_process.o moc_process.cpp

####### Install

install_itemfolder_01: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/opt/Reabilitation/qml/ || $(MKDIR) $(INSTALL_ROOT)/opt/Reabilitation/qml/ 
	-$(INSTALL_DIR) /home/dmitriy/ONPU/Диплом/ForDesign/Reabilitation/qml/Reabilitation $(INSTALL_ROOT)/opt/Reabilitation/qml/


uninstall_itemfolder_01:  FORCE
	-$(DEL_FILE) -r $(INSTALL_ROOT)/opt/Reabilitation/qml/Reabilitation
	-$(DEL_DIR) $(INSTALL_ROOT)/opt/Reabilitation/qml/ 


install_target: first FORCE
	@$(CHK_DIR_EXISTS) $(INSTALL_ROOT)/opt/Reabilitation/bin/ || $(MKDIR) $(INSTALL_ROOT)/opt/Reabilitation/bin/ 
	-$(INSTALL_PROGRAM) "$(QMAKE_TARGET)" "$(INSTALL_ROOT)/opt/Reabilitation/bin/$(QMAKE_TARGET)"
	-$(STRIP) "$(INSTALL_ROOT)/opt/Reabilitation/bin/$(QMAKE_TARGET)"

uninstall_target:  FORCE
	-$(DEL_FILE) "$(INSTALL_ROOT)/opt/Reabilitation/bin/$(QMAKE_TARGET)"
	-$(DEL_DIR) $(INSTALL_ROOT)/opt/Reabilitation/bin/ 


install:  install_itemfolder_01 install_target  FORCE

uninstall: uninstall_itemfolder_01 uninstall_target   FORCE

FORCE:

