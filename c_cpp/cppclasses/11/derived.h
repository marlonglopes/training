
#ifndef _DERIVED_H_
#define _DERIVED_H_

#include "base.h"

class Derived : public Base {

  public:

    Derived();
    ~Derived();

    virtual void poly_op();

};

#endif // _DERIVED_H_

