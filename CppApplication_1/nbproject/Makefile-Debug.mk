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
CND_PLATFORM=Cygwin_4.x-Windows
CND_DLIB_EXT=dll
CND_CONF=Debug
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
CFLAGS=`pkg-config --cflags gtk+-2.0 --libs` 

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L/usr/lib/i386-linux-gnu -lgtk-x11-2.0 -lgobject-2.0 /lib/i386-linux-gnu/glib-2.0.so.0

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe: /lib/i386-linux-gnu/glib-2.0.so.0

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/bt.o: bt.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/bt.o bt.c

${OBJECTDIR}/dbase.o: dbase.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/dbase.o dbase.c

${OBJECTDIR}/dinamic.o: dinamic.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/dinamic.o dinamic.c

${OBJECTDIR}/err.o: err.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/err.o err.c

${OBJECTDIR}/graficos.o: graficos.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/graficos.o graficos.c

${OBJECTDIR}/grammar.tab.o: grammar.tab.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/grammar.tab.o grammar.tab.c

${OBJECTDIR}/lex.yy.o: lex.yy.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lex.yy.o lex.yy.c

${OBJECTDIR}/minieditor.o: minieditor.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/minieditor.o minieditor.c

${OBJECTDIR}/run.o: run.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/run.o run.c

${OBJECTDIR}/variables.o: variables.c
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I/usr/include/glib-2.0 -I/usr/include/cairo -I/usr/include/atk-1.0 -I/usr/include/gtk-2.0 -I/usr/include/pango-1.0 -I/usr/include/libpng12 -I/usr/include/freetype2 -I/usr/lib/i386-linux-gnu/gtk-2.0/include -I/usr/lib/i386-linux-gnu/glib-2.0/include -I/lib/i386-linux-gnu -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/variables.o variables.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} -r ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/glib-2.0.so.0
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
