#include <iostream>
#include "Comodo.hpp"

using namespace std;

#ifndef COZINHA_H_
#define COZINHA_H_

class Cozinha : public Comodo
{

private:
    bool temPia;

public:
    Cozinha();
    ~Cozinha();
    void setTemPia(bool temPia);
    bool getTemPia();
};

#endif // COZINHA_H_