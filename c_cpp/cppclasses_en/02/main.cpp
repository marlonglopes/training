
#include <iostream>

// 02: Basic examples to illustrate mundane functionality

/*
Merely illustrative. A look-see primer, no explanations yet.
*/

void func(const int val){
  std::cout << "func received: " << val << std::endl;
}

int main(int argc, char *argv[]){

  // Print text to "screen" (sends output to system's stdout)
  std::cout << "test for echo" << std::endl;

  // Declare two integers and set initial values
  int x = 2;
  int y = 3;

  // Sum two variables and print to screen
  std::cout << x+y << std::endl;

  // Some interaction: read an integer from user (blocking call, read from system's stdin)
  int opt;
  std::cout << "Type in some number and then RETURN" << std::endl;
  std::cin >> opt;

  std::cout << "number " << opt << std::endl;

  // call a function, passing a number as parameter
  func(21);

  return 0;
}

