#include "Utilitario.hpp"

Utilitario::Utilitario()
{
}

Utilitario::~Utilitario()
{
}

Quarto *construirQuarto(float largura, float comprimento, float altura, bool temArmario)
{
    Quarto *quarto = new Quarto();
    quarto->setLargura(largura);
    quarto->setComprimento(comprimento);
    quarto->setAltura(altura);
    quarto->setTemArmario(temArmario);

    return quarto;
}

Banheiro *construirBanheiro(float largura, float comprimento, float altura, bool temChuveiro)
{
    Banheiro *banheiro = new Banheiro();
    banheiro->setLargura(largura);
    banheiro->setComprimento(comprimento);
    banheiro->setAltura(altura);
    banheiro->setTemChuveiro(temChuveiro);

    return banheiro;
}

Sala *construirSala(float largura, float comprimento, float altura, bool temTv)
{
    Sala *sala = new Sala();
    sala->setLargura(largura);
    sala->setComprimento(comprimento);
    sala->setAltura(altura);
    sala->setTemTv(temTv);

    return sala;
}

Cozinha *construirCozinha(float largura, float comprimento, float altura, bool temPia)
{
    Cozinha *cozinha = new Cozinha();
    cozinha->setLargura(largura);
    cozinha->setComprimento(comprimento);
    cozinha->setAltura(altura);
    cozinha->setTemPia(temPia);

    return cozinha;
}

float getAreaArrayComodo(vector<Comodo *> comodos)
{
    float areaTotal = 0.0f;
    for (int i = 0; i < comodos.size(); i++)
    {
        areaTotal += comodos[i]->getArea();
    }
    return areaTotal;
}