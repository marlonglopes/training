
#include <iostream>
#include <string>

#include "except.h"

// 15: Exceptions

/*
How to use exceptions
*/

void raising_func(){

  std::cout << "hello, i will throw" << std::endl;
  throw Except("Gotcha", 21);

}

int main(int argc, char *argv[]){

  try {
    raising_func();
  } catch (const Except &ex){
    std::cout << "raised: " << ex.message << std::endl;
  }

  return 0;
}

