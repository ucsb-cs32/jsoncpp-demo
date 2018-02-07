# CXX=clang++
CXX=g++

CXXFLAGS = -std=c++11 -Wall -Wextra -Werror -I/usr/include/jsoncpp

LINK_JSONCPP= -ljsoncpp

BINARIES= jsonCppDemo00

all: ${BINARIES}

jsonCppDemo00: jsonCppDemo00.o
	${CXX} $^ ${LINK_JSONCPP}  -o $@

clean:
	/bin/rm -f ${BINARIES} *.o
