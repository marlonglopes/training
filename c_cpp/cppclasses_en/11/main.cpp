
#include <iostream>
#include <string>

#include "base.h"
#include "derived.h"

// 11: Inheritance and polymorphism

/*
Classes but not-so-basic
*/

int main(int argc, char *argv[]){

  //Base *base = new Base(); // error: Base is abstract
  Base *base  = new Derived();

  base->poly_op();

  return 0;
}

