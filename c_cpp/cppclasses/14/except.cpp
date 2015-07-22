
#include "except.h"

Except::Except(const std::string &msg, const int cd): message(msg), code(cd){
}

Except::~Except(){
}

Except::Except():message(""), code(0){
}

Except& Except::operator=(const Except &other){
  (void)other;
  return *this;
}

