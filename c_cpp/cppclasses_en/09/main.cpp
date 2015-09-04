
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

// 09: Sample app

/*
How to open files and read their contents
*/

void func_sum(const std::string &s, int &t){
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
     func_sum(current_line, total);
  }
  std::cout << "total: " << total << std::endl;

  thefile.close();

  return 0;
}

