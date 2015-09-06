
#include <iostream>
#include "myclass.h"

// 18: Op. overload, nonmember

/*
Operator overloading, nonmembers
*/

int operator+(const MyClass &a, const MyClass &b){
  return 21;
}

int main(int argc, char *argv[]){

  MyClass mc1 = MyClass();
  MyClass mc2 = MyClass();

  int ret = mc1 + mc2;
  std::cout << ret << std::endl;

  return 0;
}

