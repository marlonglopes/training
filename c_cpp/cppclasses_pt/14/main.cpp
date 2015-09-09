
#include <iostream>
#include <string>

#include "myclass.h"

// 14: Operadores

/*
Sobrecarga de operadores, membros de classe
*/

int main(int argc, char *argv[]){

  MyClass cat;
  cat = cat + 10;
  std::cout << "idade do gato " << cat.age << std::endl;

  return 0;
}

