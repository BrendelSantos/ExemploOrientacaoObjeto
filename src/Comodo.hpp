#include <iostream>
using namespace std;

#ifndef COMODO_H_
#define COMODO_H_

class Comodo
{

private:
    float largura;
    float comprimento;
    float altura;

public:
    Comodo();
    virtual ~Comodo();

    void setLargura(float largura);
    void setComprimento(float comprimento);
    void setAltura(float altura);

    float getLargura();
    float getComprimento();
    float getAltura();

    virtual float getArea();
};

#endif // COMODO_H_