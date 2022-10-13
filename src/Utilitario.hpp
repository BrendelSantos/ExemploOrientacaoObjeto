#include <iostream>
#include "Comodo.hpp"
#include "Quarto.hpp"
#include "Banheiro.hpp"
#include "Sala.hpp"
#include "Cozinha.hpp"

using namespace std;

#ifndef UTILITARIO_H_
#define UTILITARIO_H_

class Utilitario
{
public:
    Utilitario();
    ~Utilitario();
};
extern Quarto *construirQuarto(float largura, float comprimento, float altura, bool temArmario = false);
extern Banheiro *construirBanheiro(float largura, float comprimento, float altura, bool temChuveiro = false);
extern Sala *construirSala(float largura, float comprimento, float altura, bool temTv = false);
extern Cozinha *construirCozinha(float largura, float comprimento, float altura, bool temPia = false);

#endif // UTILITARIO_H_