
#ifndef _MYCLASS_H_
#define _MYCLASS_H_

#include <iostream>
#include <string>

class MyClass {

  public:

    MyClass();
    ~MyClass();

    MyClass& operator=(const MyClass&);
    MyClass& operator+(const int);

    int age;

};

#endif // _MYCLASS_H_

