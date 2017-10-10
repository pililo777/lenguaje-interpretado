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
CND_CONF=Debug
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/err.o \
	${OBJECTDIR}/grammar.tab.o \
	${OBJECTDIR}/lex.yy.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/run.o


# C Compiler Flags
CFLAGS=-mms-bitfields -I/cygdrive/d/gtk/include/gtk-2.0 -I/cygdrive/d/gtk/lib/gtk-2.0/include -I/cygdrive/d/gtk/include/atk-1.0 -I/cygdrive/d/gtk/include/cairo -I/cygdrive/d/gtk/include/gdk-pixbuf-2.0 -I/cygdrive/d/gtk/include/pango-1.0 -I/cygdrive/d/gtk/include/glib-2.0 -I/cygdrive/d/gtk/lib/glib-2.0/include -I/cygdrive/d/gtk/include -I/cygdrive/d/gtk/include/freetype2 -I/cygdrive/d/gtk/include/libpng14 -I/cygdrive/c/cygwin/usr/include/libgnomeui-2.0 -v -g -I/cygdrive/c/cygwin/usr/include/libgnomeui-2.0 -I/cygdrive/c/cygwin/usr/include -I/usr/include/libgnomeui-2.0 -I/usr/include -I/usr/lib/gcc/i686-pc-cygwin/4.8.3/include-fixed -I/usr/lib/gcc/i686-pc-cygwin/4.8.3/include/c++ -I/usr/x86_64-pc-cygwin/sys-root/usr/include -I/cygdrive/c/cygwin/usr/include/libgnomecanvas-2.0 -I/cygdrive/c/cygwin/usr/include/libgnomeui-2.0 -I/cygdrive/c/cygwin/usr/include/libgnome-2.0 -I/cygdrive/C/cygwin/usr/include/libbonobo-2.0 -I/cygdrive/C/cygwin/usr/include/libbonoboui-2.0 -I/cygdrive/C/cygwin/usr/include/libart-2.0 -I/cygdrive/C/cygwin/usr/include/gnome-vfs-2.0 -w

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=-L/usr/lib/i386-linux-gnu -lgobject-2.0

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ./cppapplication_1.exe

./cppapplication_1.exe: ${OBJECTFILES}
	${MKDIR} -p .
	${LINK.c} -o ./cppapplication_1 ${OBJECTFILES} ${LDLIBSOPTIONS} -L/cygdrive/d/gtk/lib -lgtk-win32-2.0 -lgdk-win32-2.0 -latk-1.0 -lgio-2.0 -lpangowin32-1.0 -lgdi32 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lpango-1.0 -lcairo -lfontconfig -lfreetype -lpng14 -lz -lgobject-2.0 -lgmodule-2.0 -lgthread-2.0 -lglib-2.0 -lintl -ldl

${OBJECTDIR}/err.o: err.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/err.o err.c

${OBJECTDIR}/grammar.tab.o: grammar.tab.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/grammar.tab.o grammar.tab.c

${OBJECTDIR}/lex.yy.o: lex.yy.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I../../../../../../Cygwin/usr/x86_64-pc-cygwin/sys-root/usr/include/sys -I../../../../../../Cygwin/usr/x86_64-pc-cygwin/sys-root/usr/include -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lex.yy.o lex.yy.c

${OBJECTDIR}/main.o: main.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I../../../../../../Cygwin/usr/x86_64-pc-cygwin/sys-root/usr/include/sys -I../../../../../../Cygwin/usr/x86_64-pc-cygwin/sys-root/usr/include -I/cygdrive/D/GTK/lib/glib-2.0/include -I/cygdrive/D/GTK/include/glib-2.0/glib -I/cygdrive/D/GTK/include/glib-2.0/gobject -I/cygdrive/D/GTK/include/pango-1.0/pango -I/cygdrive/D/GTK/include/gtk-2.0/gdk -I/cygdrive/D/GTK/include/gtk-2.0/gtk -I/cygdrive/D/GTK/include/glib-2.0 -I/cygdrive/D/GTK/include/gtk-2.0 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.c

${OBJECTDIR}/run.o: run.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -w -I/cygdrive/D/GTK/lib/glib-2.0/include -I/cygdrive/D/GTK/include/glib-2.0/glib -I/cygdrive/D/GTK/include/glib-2.0/gobject -I/cygdrive/D/GTK/include/cairo -I/cygdrive/D/GTK/include/pango-1.0/pango -I/cygdrive/D/GTK/include/gtk-2.0/gdk -I/cygdrive/D/GTK/include/gtk-2.0/gtk -I/cygdrive/D/GTK/include/glib-2.0 -I/cygdrive/D/GTK/include/gtk-2.0 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/run.o run.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ./cppapplication_1.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
