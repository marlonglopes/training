
#include <iostream>
#include <memory>

#include "myclass.h"

// 17: Smart pointers

/*
Exemplo básico de uso de smart pointers
*/

int main(int argc, char *argv[]){

  auto mc = std::make_shared<MyClass>(); // c++11
  //auto mc = std::make_unique<MyClass>(); //c++14 - gcc 4.8 ainda nao tem. só vai ser pervasivo em 2016, com o gcc 5

  return 0;
}

