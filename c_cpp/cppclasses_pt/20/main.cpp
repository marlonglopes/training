
#include <iostream>

#include "gato.h"

// 20: Pimpl

/*
Esconder definição de classe (usar ponteiro opaco, ou gato de cheshire)
*/

int main(int argc, char *argv[]){

  Gato gato = Gato();
  gato.miau();

  return 0;
}

