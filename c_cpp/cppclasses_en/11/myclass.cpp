
#include "myclass.h"

#include <iostream>

MyClass::MyClass():data(0){
  data = new int[8];
  std::cout << "constructor" << std::endl;
}

MyClass::~MyClass(){
  delete []data;
  std::cout << "deconstructor" << std::endl;
}

