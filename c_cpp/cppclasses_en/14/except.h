
#ifndef _EXCEPT_H_
#define _EXCEPT_H_

#include <iostream>
#include <string>

class Except {

  public:

    Except(const std::string &, const int);
    ~Except();

    std::string message;
    const int code;

  private:

    Except();
    Except& operator=(const Except&);

};

#endif // _EXCEPT_H_

