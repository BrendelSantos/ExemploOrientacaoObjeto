#include <iostream>
#include "Comodo.hpp"

using namespace std;

#ifndef SALA_H_
#define SALA_H_

class Sala : public Comodo
{

private:
    bool temTv;

public:
    Sala();
    ~Sala();
    void setTemTv(bool temTv);
    bool getTemTv();
};

#endif // SALA_H_