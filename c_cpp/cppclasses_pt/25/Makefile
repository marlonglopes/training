
.PHONY : all clean compile link libexep deps

APPNAME=tester
LIBNAME=libexep.so
SONAME=libexep.1.so

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
	rm ./$(SONAME) 2>/dev/null;  ln -s ./dsoexep/$(LIBNAME) ./$(SONAME)
	g++ -o $(APPNAME) $(CPPFLAGS) $(OBJ) $(LDFLAGS)

clean:
	make clean -C ./dsoexep
	rm -rf ./$(APPNAME)
	rm -rf ./$(SONAME)
	rm -rf ./$(OBJ)

