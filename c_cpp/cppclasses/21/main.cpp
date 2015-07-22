
#include <iostream>
#include "functor.h"

// 21: Functors

/*
Como usar object functions (functors)
*/

int main(int argc, char *argv[]){

  auto r = Functor()(2, 1);
  std::cout << "r: " << r << std::endl;

  return 0;
}

