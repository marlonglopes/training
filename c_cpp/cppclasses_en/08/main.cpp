
#include <iostream>
#include <string>

#include <stdlib.h>

// 08: Arrays, pointers, allocation, stack and heap

/*
How to use primitive arrays, pointers, pointer arithmetic, memory allocation
*/

int main(int argc, char *argv[]){

  // primitive array, stack-allocated
  int *lala = 0;
  int isar[16]; 
  int isar1[16]; 
  int isar2[16]; 
  int isar3[16]; 
  int isar4[16]; 
  int isar5[16]; 
  int isar6[16]; 

  // c-style freestore allocs
  int *ihar_c = 0;
  ihar_c = (int*)calloc(1, sizeof(int));
  free(ihar_c);

  // cpp-style freestore allocs
  int *ihar = 0; 
  ihar = new int[16];
  delete [] ihar;

  return 0;
}

