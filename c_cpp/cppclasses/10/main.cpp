
#include <iostream>
#include <string>

#include "myclass.h"

// 10: Classes

/*
Classes básicas
*/

int main(int argc, char *argv[]){

  // instancia na stack
  MyClass myc_stack = MyClass();

  // instancia na heap
  MyClass *myc_heap = new MyClass();
  delete myc_heap;

  return 0;
}

