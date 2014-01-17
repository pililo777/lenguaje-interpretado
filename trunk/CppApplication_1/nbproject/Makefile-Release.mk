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
CCC=g++-4.7
CXX=g++-4.7
FC=gfortran
AS=as

# Macros
CND_PLATFORM=GNU-Linux-x86
CND_CONF=Release
CND_DISTDIR=dist
CND_BUILDDIR=build

# Include project Makefile
include Makefile

# Object Directory
OBJECTDIR=${CND_BUILDDIR}/${CND_CONF}/${CND_PLATFORM}

# Object Files
OBJECTFILES= \
	${OBJECTDIR}/_ext/1392732482/lex.yy.o \
	${OBJECTDIR}/_ext/1267939800/colorchooser.o \
	${OBJECTDIR}/_ext/1392732482/err.o \
	${OBJECTDIR}/_ext/1392732482/grammar.tab.o \
	${OBJECTDIR}/_ext/1392732482/run.o \
	${OBJECTDIR}/_ext/1392732482/main.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.c} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1 ${OBJECTFILES} ${LDLIBSOPTIONS} 

${OBJECTDIR}/_ext/1392732482/lex.yy.o: ../../workspace/inter/lex.yy.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1392732482
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1392732482/lex.yy.o ../../workspace/inter/lex.yy.c

${OBJECTDIR}/_ext/1267939800/colorchooser.o: ../../workspace/gtk\ en\ C/colorchooser.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1267939800
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1267939800/colorchooser.o ../../workspace/gtk\ en\ C/colorchooser.c

${OBJECTDIR}/_ext/1392732482/err.o: ../../workspace/inter/err.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1392732482
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1392732482/err.o ../../workspace/inter/err.c

${OBJECTDIR}/_ext/1392732482/grammar.tab.o: ../../workspace/inter/grammar.tab.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1392732482
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1392732482/grammar.tab.o ../../workspace/inter/grammar.tab.c

${OBJECTDIR}/_ext/1392732482/run.o: ../../workspace/inter/run.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1392732482
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1392732482/run.o ../../workspace/inter/run.c

${OBJECTDIR}/_ext/1392732482/main.o: ../../workspace/inter/main.c 
	${MKDIR} -p ${OBJECTDIR}/_ext/1392732482
	${RM} $@.d
	$(COMPILE.c) -O2 -MMD -MP -MF $@.d -o ${OBJECTDIR}/_ext/1392732482/main.o ../../workspace/inter/main.c

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}
	${RM} ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/cppapplication_1

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
