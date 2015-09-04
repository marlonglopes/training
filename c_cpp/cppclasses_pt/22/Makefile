
.PHONY : all clean compile link

APPNAME=tester

SRC= main.cpp
OBJ= ./*.o 

CPPFLAGS = -I./staticprint
LDFLAGS = -L./staticprint -lprint_echo

all: deps compile link

deps:
	make -C ./staticprint

compile:
	g++ -c $(SRC) $(CPPFLAGS) 

link:
	g++ -o $(APPNAME) $(CPPFLAGS) $(OBJ) $(LDFLAGS)

clean:
	make clean -C ./staticprint
	rm -rf ./$(APPNAME)
	rm -rf ./$(OBJ)

