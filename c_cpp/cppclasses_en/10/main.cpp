
#include <iostream>
#include <string>

#include "myclass.h"

// 10: Classes

/*
Basic classes
*/

int main(int argc, char *argv[]){

  // stack-allocated instance
  MyClass myc_stack = MyClass();

  // heap-allocated instance
  MyClass *myc_heap = new MyClass();
  delete myc_heap;

  return 0;
}

