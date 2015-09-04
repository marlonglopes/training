
#include <iostream>
#include <string>

// 04: Functions

/*
How to use nonmember functions in C++
*/

// void function (can't return) and parameterless
void func1(){
  std::cout << "bug" << std::endl;
}

// void function with optional parameter (optional parameters must always come last, left to right)
void func2(int opt = 1){
  std::cout << "opt: " << opt << std::endl;
}

// parameterless function, returns 3 unconditionally
int func3(){
  return 3;
}

// function with one parameter that goes ignored. returns true unconditionally
bool func4(int number){
  return true;
}

void bigfoo(){
  std::cout << "Big Foo, no parameters" << std::endl;
}

// function that receives a pointer to another function as a parameter
void func5( void (*fp) () ){
  fp();
}

// function that receives an integer and prints it
void smallfoo(int param){
  std::cout << "Small foo, got: " << param << std::endl;
}

// function that receives a pointer to another function as a parameter, which itself also receives an int as a parameter
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

