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
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/1023490377/bt.o \
	${OBJECTDIR}/_ext/1023490377/dbase.o \
	${OBJECTDIR}/_ext/1023490377/dinamic.o \
	${OBJECTDIR}/_ext/1023490377/err.o \
	${OBJECTDIR}/_ext/1023490377/graficos.o \
	${OBJECTDIR}/_ext/1023490377/grammar.tab.o \
	${OBJECTDIR}/lex.yy.o \
	${OBJECTDIR}/minieditor.o \
	${OBJECTDIR}/run.o \
	${OBJECTDIR}/variables.o


# C Compiler Flags
CFLAGS=

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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1 ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/_ext/1023490377/bt.o: /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/bt.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1023490377
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1023490377/bt.o /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/bt.c

${OBJECTDIR}/_ext/1023490377/dbase.o: /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/dbase.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1023490377
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1023490377/dbase.o /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/dbase.c

${OBJECTDIR}/_ext/1023490377/dinamic.o: /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/dinamic.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1023490377
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1023490377/dinamic.o /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/dinamic.c

${OBJECTDIR}/_ext/1023490377/err.o: /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/err.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1023490377
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1023490377/err.o /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/err.c

${OBJECTDIR}/_ext/1023490377/graficos.o: /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/graficos.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1023490377
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1023490377/graficos.o /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/graficos.c

${OBJECTDIR}/_ext/1023490377/grammar.tab.o: /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/grammar.tab.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1023490377
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/_ext/1023490377/grammar.tab.o /cygdrive/C/Users/Ruben/Documents/GitHub/repo/lenguaje-interpretado/CppApplication_1/grammar.tab.c

${OBJECTDIR}/lex.yy.o: lex.yy.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/lex.yy.o lex.yy.c

${OBJECTDIR}/minieditor.o: minieditor.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/minieditor.o minieditor.c

${OBJECTDIR}/run.o: run.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/run.o run.c

${OBJECTDIR}/variables.o: variables.c 
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.c) -O2 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/variables.o variables.c

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
