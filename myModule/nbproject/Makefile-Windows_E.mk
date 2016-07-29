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
CND_CONF=Windows_E
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/myModule.o


# C Compiler Flags
CFLAGS=-mms-bitfields -I/cygdrive/e/gtk/include/gtk-2.0 -I/cygdrive/e/gtk/lib/gtk-2.0/include -I/cygdrive/e/gtk/include/atk-1.0 -I/cygdrive/e/gtk/include/cairo -I/cygdrive/e/gtk/include/gdk-pixbuf-2.0 -I/cygdrive/e/gtk/include/pango-1.0 -I/cygdrive/e/gtk/include/glib-2.0 -I/cygdrive/e/gtk/lib/glib-2.0/include -I/cygdrive/e/gtk/include -I/cygdrive/e/gtk/include/freetype2 -I/cygdrive/e/gtk/include/libpng14

# CC Compiler Flags
CCFLAGS=
CXXFLAGS=

# Fortran Compiler Flags
FFLAGS=

# Assembler Flags
ASFLAGS=

# Link Libraries and Options
LDLIBSOPTIONS=

# Build Targets
.build-conf: ${BUILD_SUBPROJECTS}
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/mymodule.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/mymodule.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/mymodule ${OBJECTFILES} ${LDLIBSOPTIONS} -L/cygdrive/e/gtk/lib -lgtk-win32-2.0 -lgdk-win32-2.0 -latk-1.0 -lgio-2.0 -lpangowin32-1.0 -lgdi32 -lpangocairo-1.0 -lgdk_pixbuf-2.0 -lpango-1.0 -lcairo -lfontconfig -lfreetype -lpng14 -lz -lgobject-2.0 -lgmodule-2.0 -lgthread-2.0 -lglib-2.0 -lintl

${OBJECTDIR}/myModule.o: myModule.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -g -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/myModule.o myModule.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/mymodule.exe

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
