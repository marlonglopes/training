
#include <iostream>
#include <string>

// 06: for, while

/*
Basic loops
*/

int main(int argc, char *argv[]){

  for (int i=0; i < 5; ++i){
    std::cout << "i: " << i << std::endl;
  }

  int z=0;
  while (z < 5){
    std::cout << "z: " << z << std::endl;
    z++;
  }

  return 0;
}

