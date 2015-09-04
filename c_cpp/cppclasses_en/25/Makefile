
.PHONY : all clean compile link libexep deps

APPNAME=tester
LIBNAME=libexep.1.so

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
	rm ./$(LIBNAME) 2>/dev/null;  ln -s ./dsoexep/$(LIBNAME) ./$(LIBNAME)
	g++ -o $(APPNAME) $(CPPFLAGS) $(OBJ) $(LDFLAGS)

clean:
	make clean -C ./dsoexep
	rm -rf ./$(APPNAME)
	rm -rf ./$(LIBNAME)
	rm -rf ./$(OBJ)

