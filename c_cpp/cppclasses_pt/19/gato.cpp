
#include <iostream>

#include "gato.h"

class Gato::GatoImpl {
  public:
    void miau(){
      std::cout << "oh long johnson" << std::endl;
    }
};

Gato::Gato():gato(new GatoImpl()){
}

Gato::~Gato(){
  delete gato;
}

void Gato::miau(){
  gato->miau();
}

