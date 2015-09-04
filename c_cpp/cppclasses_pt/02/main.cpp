
#include <iostream>

// 02: Exemplos básicos de funcionalidade.

/*
Exemplos de como fazer coisas bem básicas.
Sem explicações, somente para efeito ilustrativo.
*/

void func(const int val){
  std::cout << "func recebeu: " << val << std::endl;
}

int main(int argc, char *argv[]){

  // Printar texto "na tela" (enviar texto pro stdout do sistema)
  std::cout << "test for echo" << std::endl;

  // Declarar dois inteiros e atribuir valores iniciais
  int x = 2;
  int y = 3;

  // Somar as duas variáveis e printar na tela
  std::cout << x+y << std::endl;

  // Interação básica: ler um inteiro do usuário (fazer chamada bloqueante e ler do stdin do sistema)
  int opt;
  std::cout << "digite algum numero e depois RETURN" << std::endl;
  std::cin >> opt;

  std::cout << "digitado: " << opt << std::endl;

  // Chamar uma função passando parâmetros
  func(21);

  return 0;
}

