
#include <iostream>
#include <string>

#include <vector>
#include <stack>
#include <queue>
#include <deque>
#include <map>

// 15: Exemplos de STL

/*
Exemplos basicos de containers STL
*/

int main(int argc, char *argv[]){
#if 0
  // VECTOR
  std::vector<std::string> vetstr;
  vetstr.push_back("str1");
  vetstr.push_back("str2");
  vetstr.push_back("str3");

  for (std::vector<std::string>::const_iterator it = vetstr.begin(); it != vetstr.end(); it++){
    std::cout << *it << std::endl;
  }

 for (unsigned int i=0;i<vetstr.size(); i++){
   std::cout << vetstr[i] << std::endl;
 } 

  // STACK
  std::stack<int> staint;
  staint.push(1);
  staint.push(2);
  staint.push(3);

  while (staint.size()){
    std::cout << "TOS: " << staint.top() << std::endl;
    staint.pop();
  }

  // QUEUE
  std::queue<std::string> questr;
  questr.push("cat");
  questr.push("dog");
  questr.push("bird");
  questr.push("cow");
  questr.push("tiger");
  questr.push("leopard");

  while (questr.size()){
    std::cout << questr.front() << std::endl;
    std::cout << questr.back() << std::endl;
    questr.pop();
  }

  // DEQUE
  std::deque<int> deqint;
  deqint.push_front(1);
  deqint.push_back(10);
  deqint.push_front(2);
  deqint.push_back(20);

  for (unsigned int i=0; i<deqint.size(); i++){
    std::cout << deqint[i] << std::endl; 
  }
#endif
  // MAP
  std::map<unsigned int, std::string> mapis;
  mapis.insert(std::pair<unsigned int, std::string>(30, "square"));
  mapis.insert(std::pair<unsigned int, std::string>(20, "rectangle"));
  mapis[3] = "box";

  for (std::map<unsigned int, std::string>::const_iterator it = mapis.begin(); it != mapis.end(); it++){
    std::cout << it->first << ": " << it->second << std::endl;
  }

  return 0;
}

