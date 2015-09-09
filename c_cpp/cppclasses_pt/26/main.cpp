
#include <iostream>
#include "exep.h"

// 26: Libraries

/*
Bibliotecas dinamicas (DSOs)

Quando linkamos com alguma lib, o linker le o soname da lib
Esta string entao e usada pra definir a linkagem, ao inves do filename

Isto serve para "influenciar" os binarios que dependam da lib, dependentes
de uma "PK". No futuro, e possivel deployar novas versoes dessa
lib, e os binarios vao continuar funcionando, porque vao procurar a mesma
"PK" pra decidir se a linkagem esta satisfeita ou nao.
*/

void func(){
  throw exep("bugger");
}

int main(int agrc, char *argv[]){

	std::cout << "test for echo" << std::endl;
  try {
    func();
  } catch (...){
	  std::cout << "caught exception" << std::endl;
  }

	return 0;

}

