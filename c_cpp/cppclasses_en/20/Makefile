
.PHONY : all clean compile link 

TESTAPPNAME=tester

SRC= main.cpp
OBJ= main.o cat.o

ARCH := $(shell getconf LONG_BIT)

ifeq ($(MODE),)
	MODE=debug
endif

ifeq ($(MODE),debug)
INTFLAGS = \
	-g \
	-Wall \
	-Wextra \
	-pedantic \
	-Weffc++ \
	-fPIC \
	-pthread \
	-std=c++11
POSTBUILD=
#DEFINES= -D _DEBUG -D _LOG 
endif

ifeq ($(MODE),release)
INTFLAGS = \
   	-O2 \
	-Wall \
	-Wextra \
	-pedantic \
	-Weffc++ \
	-fPIC \
	-pthread \
	-std=c++11
POSTBUILD= strip $(TESTAPPNAME)
#DEFINES= -D _LOG 
endif

ifeq ($(ARCH),64)
CPPFLAGS = $(INTFLAGS) -m64
else 
CPPFLAGSS = $(INTFLAGS)
endif

INCLUDES=-I.
LDFLAGS=

all: compile link 

compile:
	g++ -c $(INCLUDES) $(SRC) $(CPPFLAGS)

link:
	g++ -o $(TESTAPPNAME) $(OBJ) $(LDFLAGS)
	$(POSTBUILD)

clean:
	rm -rf $(OBJ)
	rm -rf $(TESTAPPNAME)

