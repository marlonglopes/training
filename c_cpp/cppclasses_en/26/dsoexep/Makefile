
.PHONY: all clean

LIBNAME=libexep.so
SONAME=libexep.1.so

SRC=exep.cpp
OBJ=./*.o

all:
	g++ -c $(SRC) -fPIC
	g++ -o $(LIBNAME) -shared $(OBJ) -Wl,-soname,$(SONAME)

clean:
	rm -rf ./$(OBJ)
	rm -rf $(LIBNAME)

