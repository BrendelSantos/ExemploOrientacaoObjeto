#include "Quarto.hpp"

Quarto::Quarto()
{
}

Quarto::~Quarto()
{
}

void Quarto::setTemArmario(bool temArmario)
{
    this->temArmario = temArmario;
}

void Quarto::setBanheiro(Banheiro *banheiro)
{
    this->banheiro = banheiro;
}

Banheiro *Quarto::getBanheiro()
{
    return this->banheiro;
}
