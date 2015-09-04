
#include <iostream>

#include "cat.h"

class Cat::CatImpl {
  public:
    void meow(){
      std::cout << "oh long johnson" << std::endl;
    }
};

Cat::Cat():cat(new CatImpl()){
}

Cat::~Cat(){
  delete cat;
}

void Cat::meow(){
  cat->meow();
}

