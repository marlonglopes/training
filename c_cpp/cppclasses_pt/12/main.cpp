
#include <iostream>

// 12: Templates

/*
Templates básicos
*/

template <typename T>
T max(T a, T b){
  if (a > b){
    return a;
  } else {
    return b;
  }
}

int main(int argc, char *argv[]){

  std::string aux = max("d", "b");
  std::cout << "max: " << aux << std::endl;

  int ret = max(5, 7);
  std::cout << "max: " << ret << std::endl;

  return 0;
}

