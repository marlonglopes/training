
#include <iostream>
#include <memory>

#include "myclass.h"

// 18: Smart pointers

/*
Basic sample of smart pointer usage
*/

int main(int argc, char *argv[]){

  auto mc = std::make_shared<MyClass>(); // c++11
  //auto mc = std::make_unique<MyClass>(); //c++14 - gcc 4.8 still doesn't have it. widespread usage will have to wait until 2016, when gcc 5 arrives

  return 0;
}

