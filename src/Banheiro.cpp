#include "Banheiro.hpp"

Banheiro::Banheiro()
{
}

Banheiro::~Banheiro()
{
}

void Banheiro::setTemChuveiro(bool temChuveiro)
{
    this->temChuveiro = temChuveiro;
}

bool Banheiro::getTemChuveiro()
{
    return this->temChuveiro;
}