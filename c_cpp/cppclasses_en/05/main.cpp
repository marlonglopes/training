
#include <iostream>
#include <string>

// 05: if, switch and ternary operators

/*
Basic conditionals
*/

int main(int argc, char *argv[]){

  int const x = 5;

  if (x == 5){
    std::cout << "x == 5" << std::endl;
  } else {
    std::cout << "x != 5" << std::endl; 
  }

  switch (x){
    case 4:
      std::cout << "x == 4" << std::endl; 
      break;
    case 5:
      std::cout << "x == 5" << std::endl; 
      break;
    default:
      std::cout << "who knows?" << std::endl; 
      break;
  }

  x == 5? std::cout << "x == 5" << std::endl: std::cout << "nope..." << std::endl;

  return 0;
}

