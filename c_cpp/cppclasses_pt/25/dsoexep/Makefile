
.PHONY: all clean

LIBNAME=libexep.so

SRC=	exep.cpp
OBJ=	./*.o

all:
	g++ -c $(SRC) -fPIC
	g++ -o $(LIBNAME) -shared $(OBJ)

clean:
	rm -rf ./$(OBJ)
	rm -rf $(LIBNAME)

