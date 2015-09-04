
#ifndef _CAT_H_
#define _CAT_H_

class Cat {

  public:

    Cat();
    ~Cat();

    void meow();

  private:
    class CatImpl;
    CatImpl *cat;

};

#endif // _CAT_H_

