
#include <iostream>

#include "functor.h"

Functor::Functor(){
  std::cout << "ctor" << std::endl;
}

Functor::~Functor(){
  std::cout << "dtor" << std::endl;
}

int Functor::operator() (const int a, const int b){
  if (a > b){
    return a;
  } else {
    return b;
  }
}

