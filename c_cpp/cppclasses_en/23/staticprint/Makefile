
.PHONY: all clean

LIBNAME=libprint_echo.a

SRC=print_echo.cpp
OBJ=print_echo.o 

all:
	g++ -c $(SRC)
	ar -rcs $(LIBNAME) $(OBJ) 

clean:
	rm -rf ./$(OBJ)
	rm -rf ./$(LIBNAME)

