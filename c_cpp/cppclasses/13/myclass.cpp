
#include "myclass.h"

MyClass::MyClass():age(1){
}

MyClass::~MyClass(){
}

MyClass& MyClass::operator=(const MyClass &other){
  if (this == &other) return (*this);
  std::cout << "operador igual" << std::endl;
  return (*this);
}

MyClass& MyClass::operator+(const int thenum){
  this->age -= thenum;
  return (*this);
}

