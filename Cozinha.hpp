#include <iostream>
#include "Comodo.hpp"

using namespace std;

#ifndef COZINHA_H_
#define COZINHA_H_

class Cozinha : public Comodo
{

private:
    int quantidadeArmarios;

public:
    Cozinha();
    ~Cozinha();
    void setQuantidadeArmarios(bool quantidadeArmarios);
};

#endif // COZINHA_H_