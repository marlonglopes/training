
#include <iostream>
#include <string>

// 03: Primitive types

/*
What are types and how do they work in C++
*/

int main(int argc, char *argv[]){

  // integer
  int x; // 32 bits

  // extended integer
  long lo; // 64 bits

  // floating point, single and double precision
  float fi; // 32 bits
  double di; // 64 bits

  // unsigned integer (no negative numbers)
  unsigned int ui; // 32 bits

  // integer that is immutable after declaration
  int const cx = 10;

  // a character
  char a = 'a'; // 8 bits

  // the equivalent of a byte type
  unsigned char b = 0x4f; // 8 bits

  // boolean
  bool flag = true; // 1 bit

  // C-like string, immutable
  const char msg[8] = "nomod";
  std::cout << msg << std::endl;

  // C++ string
  std::string cppstr = "hello";
  std::cout << cppstr << std::endl;

  return 0;
}

