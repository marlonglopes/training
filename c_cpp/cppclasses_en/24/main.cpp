
#include <iostream>
#include "exep.h"

// 24: Libraries

/*
Dynamic libraries (DSOs)
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

