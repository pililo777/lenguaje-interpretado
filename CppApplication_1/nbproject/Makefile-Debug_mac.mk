#
# Generated Makefile - do not edit!
#
# Edit the Makefile in the project folder instead (../Makefile). Each target
# has a -pre and a -post target defined where you can add customized code.
#
# This makefile implements configuration specific macros and targets.


# Environment
MKDIR=mkdir
CP=cp
GREP=grep
NM=nm
CCADMIN=CCadmin
RANLIB=ranlib
CC=gcc
CCC=g++
CXX=g++
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU_Cygwin-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug_mac
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/bt.o \
	${OBJECTDIR}/dbase.o \
	${OBJECTDIR}/dinamic.o \
	${OBJECTDIR}/err.o \
	${OBJECTDIR}/graficos.o \
	${OBJECTDIR}/grammar.tab.o \
	${OBJECTDIR}/lex.yy.o \
	${OBJECTDIR}/minieditor.o \
	${OBJECTDIR}/run.o \
	${OBJECTDIR}/variables.o


# C Compiler Flags
CFLAGS=-std=c99

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=`pkg-config --libs cairo` `pkg-config --libs cairo-quartz` `pkg-config --libs fontconfig` `pkg-config --libs freetype2` `pkg-config --libs gdk-2.0` `pkg-config --libs gio-2.0` `pkg-config --libs glib-2.0` `pkg-config --libs gobject-2.0` `pkg-config --libs gtk+-quartz-2.0` `pkg-config --libs libpng` `pkg-config --libs pango` `pkg-config --libs pangocairo` `pkg-config --libs pixman-1`  

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/bt.o: bt.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g `pkg-config --cflags cairo` `pkg-config --cflags cairo-quartz` `pkg-config --cflags fontconfig` `pkg-config --cflags freetype2` `pkg-config --cflags gdk-2.0` `pkg-config --cflags gio-2.0` `pkg-config --cflags glib-2.0` `pkg-config --cflags gobject-2.0` `pkg-config --cflags gtk+-quartz-2.0` `pkg-config --cflags libpng` `pkg-config --cflags pango` `pkg-config --cflags pangocairo` `pkg-config --cflags pixman-1`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/bt.o bt.c

${OBJECTDIR}/dbase.o: dbase.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g `pkg-config --cflags cairo` `pkg-config --cflags cairo-quartz` `pkg-config --cflags fontconfig` `pkg-config --cflags freetype2` `pkg-config --cflags gdk-2.0` `pkg-config --cflags gio-2.0` `pkg-config --cflags glib-2.0` `pkg-config --cflags gobject-2.0` `pkg-config --cflags gtk+-quartz-2.0` `pkg-config --cflags libpng` `pkg-config --cflags pango` `pkg-config --cflags pangocairo` `pkg-config --cflags pixman-1`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/dbase.o dbase.c

${OBJECTDIR}/dinamic.o: dinamic.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g `pkg-config --cflags cairo` `pkg-config --cflags cairo-quartz` `pkg-config --cflags fontconfig` `pkg-config --cflags freetype2` `pkg-config --cflags gdk-2.0` `pkg-config --cflags gio-2.0` `pkg-config --cflags glib-2.0` `pkg-config --cflags gobject-2.0` `pkg-config --cflags gtk+-quartz-2.0` `pkg-config --cflags libpng` `pkg-config --cflags pango` `pkg-config --cflags pangocairo` `pkg-config --cflags pixman-1`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/dinamic.o dinamic.c

${OBJECTDIR}/err.o: err.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g `pkg-config --cflags cairo` `pkg-config --cflags cairo-quartz` `pkg-config --cflags fontconfig` `pkg-config --cflags freetype2` `pkg-config --cflags gdk-2.0` `pkg-config --cflags gio-2.0` `pkg-config --cflags glib-2.0` `pkg-config --cflags gobject-2.0` `pkg-config --cflags gtk+-quartz-2.0` `pkg-config --cflags libpng` `pkg-config --cflags pango` `pkg-config --cflags pangocairo` `pkg-config --cflags pixman-1`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/err.o err.c

${OBJECTDIR}/graficos.o: graficos.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g `pkg-config --cflags cairo` `pkg-config --cflags cairo-quartz` `pkg-config --cflags fontconfig` `pkg-config --cflags freetype2` `pkg-config --cflags gdk-2.0` `pkg-config --cflags gio-2.0` `pkg-config --cflags glib-2.0` `pkg-config --cflags gobject-2.0` `pkg-config --cflags gtk+-quartz-2.0` `pkg-config --cflags libpng` `pkg-config --cflags pango` `pkg-config --cflags pangocairo` `pkg-config --cflags pixman-1`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/graficos.o graficos.c

${OBJECTDIR}/grammar.tab.o: grammar.tab.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g `pkg-config --cflags cairo` `pkg-config --cflags cairo-quartz` `pkg-config --cflags fontconfig` `pkg-config --cflags freetype2` `pkg-config --cflags gdk-2.0` `pkg-config --cflags gio-2.0` `pkg-config --cflags glib-2.0` `pkg-config --cflags gobject-2.0` `pkg-config --cflags gtk+-quartz-2.0` `pkg-config --cflags libpng` `pkg-config --cflags pango` `pkg-config --cflags pangocairo` `pkg-config --cflags pixman-1`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/grammar.tab.o grammar.tab.c

${OBJECTDIR}/lex.yy.o: lex.yy.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g `pkg-config --cflags cairo` `pkg-config --cflags cairo-quartz` `pkg-config --cflags fontconfig` `pkg-config --cflags freetype2` `pkg-config --cflags gdk-2.0` `pkg-config --cflags gio-2.0` `pkg-config --cflags glib-2.0` `pkg-config --cflags gobject-2.0` `pkg-config --cflags gtk+-quartz-2.0` `pkg-config --cflags libpng` `pkg-config --cflags pango` `pkg-config --cflags pangocairo` `pkg-config --cflags pixman-1`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lex.yy.o lex.yy.c

${OBJECTDIR}/minieditor.o: minieditor.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g `pkg-config --cflags cairo` `pkg-config --cflags cairo-quartz` `pkg-config --cflags fontconfig` `pkg-config --cflags freetype2` `pkg-config --cflags gdk-2.0` `pkg-config --cflags gio-2.0` `pkg-config --cflags glib-2.0` `pkg-config --cflags gobject-2.0` `pkg-config --cflags gtk+-quartz-2.0` `pkg-config --cflags libpng` `pkg-config --cflags pango` `pkg-config --cflags pangocairo` `pkg-config --cflags pixman-1`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/minieditor.o minieditor.c

${OBJECTDIR}/run.o: run.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g `pkg-config --cflags cairo` `pkg-config --cflags cairo-quartz` `pkg-config --cflags fontconfig` `pkg-config --cflags freetype2` `pkg-config --cflags gdk-2.0` `pkg-config --cflags gio-2.0` `pkg-config --cflags glib-2.0` `pkg-config --cflags gobject-2.0` `pkg-config --cflags gtk+-quartz-2.0` `pkg-config --cflags libpng` `pkg-config --cflags pango` `pkg-config --cflags pangocairo` `pkg-config --cflags pixman-1`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/run.o run.c

${OBJECTDIR}/variables.o: variables.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g `pkg-config --cflags cairo` `pkg-config --cflags cairo-quartz` `pkg-config --cflags fontconfig` `pkg-config --cflags freetype2` `pkg-config --cflags gdk-2.0` `pkg-config --cflags gio-2.0` `pkg-config --cflags glib-2.0` `pkg-config --cflags gobject-2.0` `pkg-config --cflags gtk+-quartz-2.0` `pkg-config --cflags libpng` `pkg-config --cflags pango` `pkg-config --cflags pangocairo` `pkg-config --cflags pixman-1`   -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/variables.o variables.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
