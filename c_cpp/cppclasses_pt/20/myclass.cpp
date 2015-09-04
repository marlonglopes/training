
#include <iostream>

#include "myclass.h"

MyClass::MyClass(){
  std::cout << "ctor" << std::endl;
}

MyClass::~MyClass(){
  std::cout << "dtor" << std::endl;
}

void MyClass::debug(){
  std::cout << "static called" << std::endl;
}

