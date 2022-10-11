#include <iostream>
#include "Comodo.hpp"

using namespace std;

#ifndef BANHEIRO_H_
#define BANHEIRO_H_

class Banheiro : public Comodo
{

private:
    bool temChuveiro;

public:
    Banheiro();
    ~Banheiro();
    void setTemChuveiro(bool temChuveiro);
};

#endif // BANHEIRO_H_