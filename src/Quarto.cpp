#include "Quarto.hpp"

Quarto::Quarto()
{
}

Quarto::~Quarto()
{
    delete banheiro;
}

void Quarto::setTemArmario(bool temArmario)
{
    this->temArmario = temArmario;
}

bool Quarto::getTemArmario() 
{
    return this->temArmario;
}

void Quarto::setBanheiro(Banheiro *banheiro)
{
    this->banheiro = banheiro;
}

Banheiro *Quarto::getBanheiro()
{
    return this->banheiro;
}
