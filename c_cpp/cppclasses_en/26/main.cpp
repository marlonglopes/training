
#include <iostream>
#include "exep.h"

// 26: Libraries

/*
Dynamic libraries (DSOs)

When linking with another lib, the linker reads the soname form the lib
this string is then used to define linkage, instead of the filename

Its purpose is to "influence" the binaries that depend on that lib - they
will be depending on a "PK". In the future, it is possible to deploy new
versions of said lib, and the binaries will still work, because they will
search fot the "PK" to decide if the linkage is solved or not.
*/

void func(){
  throw exep("bugger");
}

int main(int agrc, char *argv[]){

	std::cout << "test for echo" << std::endl;
  try {
    func();
  } catch (...){
	  std::cout << "caught exception" << std::endl;
  }

	return 0;

}

