#include "Comodo.hpp"

Comodo::Comodo()
{
}

Comodo::~Comodo()
{
}

void Comodo::setLargura(float largura)
{
    this->largura = largura;
}

void Comodo::setComprimento(float comprimento)
{
    this->comprimento = comprimento;
}

void Comodo::setAltura(float altura)
{
    this->altura = altura;
}

float Comodo::getLargura()
{
    return this->largura;
}

float Comodo::getComprimento()
{
    return this->comprimento;
}

float Comodo::getAltura()
{
    return this->altura;
}

float Comodo::getArea()
{
    return this->largura * this->comprimento;
}