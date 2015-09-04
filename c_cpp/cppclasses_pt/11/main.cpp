
#include <iostream>
#include <string>

#include "base.h"
#include "derived.h"

// 11: Herança e polimorfismo

/*
Classes básicas
*/

int main(int argc, char *argv[]){

  //Base *base = new Base(); // erro: é abstrata
  Base *base  = new Derived();

  base->poly_op();

  return 0;
}

