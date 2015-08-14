
.PHONY : all clean compile link deps

APPNAME=tester

SRC= main.cpp

OBJ= ./*.o 

CPPFLAGS = -I./dsoexep
LDFLAGS = -L./dsoexep -lexep -Wl,-rpath,"."

all: deps compile link

deps:
	make -C ./dsoexep

compile:
	g++ -c $(SRC) $(CPPFLAGS) 

link:
	g++ -o $(APPNAME) $(CPPFLAGS) $(OBJ) $(LDFLAGS)

clean:
	make clean -C ./dsoexep
	rm -rf ./$(APPNAME)
	rm -rf ./$(OBJ)

