#include <iostream>
#include "Comodo.hpp"
#include "Banheiro.hpp"

using namespace std;

#ifndef QUARTO_H_
#define QUARTO_H_

class Quarto : public Comodo
{

private:
    bool temArmario;
    Banheiro *banheiro;

public:
    Quarto();
    ~Quarto();
    void setTemArmario(bool temArmario);
    bool getTemArmario();
    void setBanheiro(Banheiro *banheiro);
    Banheiro *getBanheiro();
    virtual float getArea();
};

#endif // QUARTO_H_