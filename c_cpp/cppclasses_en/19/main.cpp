
#include <iostream>

#include "cat.h"

// 19: Pimpl

/*
Hide class implementation (opaque "pointers", or Ceshire Cat)
*/

int main(int argc, char *argv[]){

  Cat cat = Cat();
  cat.meow();

  return 0;
}

