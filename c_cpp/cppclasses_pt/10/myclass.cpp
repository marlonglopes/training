
#include "myclass.h"

#include <iostream>

MyClass::MyClass():x(0), y(0){
  std::cout << "constructor" << std::endl;
}

MyClass::~MyClass(){
  std::cout << "deconstructor" << std::endl;
}

void MyClass::pub_op(){
  std::cout << "public operation" << std::endl;
}

void MyClass::priv_op(){
  std::cout << "private operation" << std::endl;
}

