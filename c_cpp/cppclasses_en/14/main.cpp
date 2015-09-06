
#include <iostream>
#include <string>

#include "myclass.h"

// 13: Operators

/*
Operator overloading, class members
*/

int main(int argc, char *argv[]){

  MyClass cat;
  cat = cat + 10;
  std::cout << "cat's age " << cat.age << std::endl;

  return 0;
}

