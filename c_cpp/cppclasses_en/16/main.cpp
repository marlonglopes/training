
#include <iostream>
#include <string>

#include <string.h>

// 16: Tools

/*
Linux development. How is it typically done.
vim
strace
man
gdb
gcc/g++
clang
Makefile
*/

/*
vim
o: new line underneath
y and Y: yank
hjkl: move around
i: insert
x: cut
c: change
ci": change inside quotes
n: next
ctrl+o: go back (works for all nav shortcuts)
*: find next forward
#: find next backwards
%: bracket bounds
dd: delete line
dw: delete word
.: repeat
:%s/findwhat/replacewith/g
v: visual
p: paste
A: append to the end of the line
b: beginning of word
e: end of word
gg: beginning of file
G: end of file
u: undo
ctrl+r: redo
M: middle of screen (cursor)
zz: middle of screen (screen?)
/: find forward
?: find backwards
0: beginning of line
^: first character in line
f: find char in line
ctrl+f: forward
ctrl+b: backwards
>: ident
<: unident
*/

const extern char *the_correct_pw;

bool validate_pass(const char *input, const char *answer){
  if (strcmp(input, answer) == 0){
    return true;
  } else {
    return false;
  }
}

int main(int argc, char *argv[]){

  std::cout << "Hello world." << std::endl;

  std::string inputpass;
  std::cout << "Input your password and press enter." << std::endl;
  std::cin >> inputpass;

  if (validate_pass(inputpass.c_str(), the_correct_pw)){
    std::cout << "Correct password entered." << std::endl;
  } else {
    std::cout << "Go to hell." << std::endl;
  }

  return 0;
}

