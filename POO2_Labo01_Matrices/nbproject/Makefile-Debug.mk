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
CND_PLATFORM=MinGW-Windows
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
	${OBJECTDIR}/Matrix.o \
	${OBJECTDIR}/main.o \
	${OBJECTDIR}/operator/AndOperator.o \
	${OBJECTDIR}/operator/Operator.o \
	${OBJECTDIR}/operator/OrOperator.o \
	${OBJECTDIR}/operator/RandomOperator.o \
	${OBJECTDIR}/operator/XorOperator.o \
	${OBJECTDIR}/utils.o


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
	"${MAKE}"  -f nbproject/Makefile-${CND_CONF}.mk ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/poo2_labo01_matrices.exe

${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/poo2_labo01_matrices.exe: ${OBJECTFILES}
	${MKDIR} -p ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}
	${LINK.cc} -o ${CND_DISTDIR}/${CND_CONF}/${CND_PLATFORM}/poo2_labo01_matrices ${OBJECTFILES} ${LDLIBSOPTIONS}

${OBJECTDIR}/Matrix.o: Matrix.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/Matrix.o Matrix.cpp

${OBJECTDIR}/main.o: main.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/main.o main.cpp

${OBJECTDIR}/operator/AndOperator.o: operator/AndOperator.cpp
	${MKDIR} -p ${OBJECTDIR}/operator
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/operator/AndOperator.o operator/AndOperator.cpp

${OBJECTDIR}/operator/Operator.o: operator/Operator.cpp
	${MKDIR} -p ${OBJECTDIR}/operator
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/operator/Operator.o operator/Operator.cpp

${OBJECTDIR}/operator/OrOperator.o: operator/OrOperator.cpp
	${MKDIR} -p ${OBJECTDIR}/operator
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/operator/OrOperator.o operator/OrOperator.cpp

${OBJECTDIR}/operator/RandomOperator.o: operator/RandomOperator.cpp
	${MKDIR} -p ${OBJECTDIR}/operator
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/operator/RandomOperator.o operator/RandomOperator.cpp

${OBJECTDIR}/operator/XorOperator.o: operator/XorOperator.cpp
	${MKDIR} -p ${OBJECTDIR}/operator
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/operator/XorOperator.o operator/XorOperator.cpp

${OBJECTDIR}/utils.o: utils.cpp
	${MKDIR} -p ${OBJECTDIR}
	${RM} "$@.d"
	$(COMPILE.cc) -g -std=c++11 -MMD -MP -MF "$@.d" -o ${OBJECTDIR}/utils.o utils.cpp

# Subprojects
.build-subprojects:

# Clean Targets
.clean-conf: ${CLEAN_SUBPROJECTS}
	${RM} -r ${CND_BUILDDIR}/${CND_CONF}

# Subprojects
.clean-subprojects:

# Enable dependency checking
.dep.inc: .depcheck-impl

include .dep.inc
