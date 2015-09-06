
#ifndef _GATO_H_
#define _GATO_H_

class Gato {

  public:

    Gato();
    ~Gato();

    void miau();

  private:
    class GatoImpl;
    GatoImpl *gato;

};

#endif // _GATO_H_

