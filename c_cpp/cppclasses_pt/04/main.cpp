
#include <iostream>
#include <string>

// 04: Funções

/*
Como usar funções não-membros em C++
*/

// função void (sem retorno) e sem parmâmetro
void func1(){
  std::cout << "nao faz nada..." << std::endl;
}

// função void com um parâmetro opcional (parâmetros opcionais devem vir por último)
void func2(int opt = 1){
  std::cout << "opt: " << opt << std::endl;
}

// função sem parâmetro, retorna 3 incondicionalmente
int func3(){
  return 3;
}

// função com parâmetro ignorado, retorna true incondicionalmente
bool func4(int number){
  return true;
}

void bigfoo(){
  std::cout << "Big Foo, no parameters" << std::endl;
}

// função que recebe um ponteiro para outra função como parâmetro
void func5( void (*fp) () ){
  fp();
}

void smallfoo(int param){
  std::cout << "Small foo, got: " << param << std::endl;
}

// função que recebe um ponteiro para outra função como parâmetro, que também tem parâmetro
void func6( void (*fp) (int) ){
  fp(11);
}

int main(int argc, char *argv[]){

  func1();
  func2();
  std::cout << "func3: " << func3() << std::endl;
  std::cout << "func4: " << func4(10) << std::endl;
  func5(bigfoo);
  func6(smallfoo);

  return 0;
}

