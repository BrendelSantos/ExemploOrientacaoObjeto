#include "Quarto.hpp"

Quarto::Quarto()
{
    this->banheiro = new Banheiro();
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

float Quarto::getArea()
{
    return this->getLargura() * this->getComprimento() + this->getBanheiro()->getArea();
}