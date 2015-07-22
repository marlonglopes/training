
#include <iostream>
#include <string>

// 03: Tipos básicos

/*
Oque e como são/funcionam os tipos de c++.
*/

int main(int argc, char *argv[]){

  // inteiro
  int x; // 32 bits

  // inteiro extendido
  long lo; // 64 bits

  // ponto flutuante, single e double precision
  float fi; // 32 bits
  double di; // 64 bits

  // inteiro sem sinal (sem negativos)
  unsigned int ui; // 32 bits

  // inteiro imutável após declaração
  int const cx = 10;

  // um caractere
  char a = 'a'; // 8 bits

  // o equivalente a um tipo byte
  unsigned char b = 0x4f; // 8 bits

  // booleano
  bool flag = true; // 1 bit

  // string tipo C imutável
  const char msg[8] = "naomuda";
  std::cout << msg << std::endl;

  // string c++
  std::string cppstr = "hello";
  std::cout << cppstr << std::endl;

  return 0;
}

