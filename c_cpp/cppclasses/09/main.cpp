
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// 09: Exemplo completo de uma app

/*
Como abrir arquivos, fuçar, olhar e ver
*/

void func_soma(const std::string &s, int &t){
  std::stringstream ss(s);
  int aux;
  ss >> aux;
  t += aux;
} 

int main(int argc, char *argv[]){

  std::ifstream thefile;
  std::string current_line;
  int total = 0;

  thefile.open("./sample.txt");
  while (thefile >> current_line){
     func_soma(current_line, total);
  }
  std::cout << "total: " << total << std::endl;

  thefile.close();

  return 0;
}

