
#ifndef _FUNCTOR_H_
#define _FUNCTOR_H_

#include <iostream>
#include <string>

class Functor {

  public:

    Functor();
    ~Functor();

    int operator() (const int, const int);

};

#endif // _FUNCTOR_H_

