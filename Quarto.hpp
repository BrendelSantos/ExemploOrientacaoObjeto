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
    void setBanheiro(Banheiro *banheiro);
    Banheiro *getBanheiro();
};

#endif // QUARTO_H_