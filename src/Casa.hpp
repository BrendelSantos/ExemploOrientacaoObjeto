#include <iostream>
#include <vector>
#include "Comodo.hpp"
#include "Banheiro.hpp"
#include "Quarto.hpp"
#include "Cozinha.hpp"
#include "Sala.hpp"

using namespace std;

#ifndef CASA_H_
#define CASA_H_

class Casa
{

private:
    string endereco;
    vector<Banheiro *> banheiros;
    vector<Cozinha *> cozinhas;
    vector<Quarto *> quartos;
    vector<Sala *> salas;

public:
    Casa();
    ~Casa();
    void adicionarBanheiro(Banheiro *banheiro);
    int getQuantidadeBanheiro();
    void adicionarQuarto(Quarto *quarto);
    int getQuantidadeQuarto();
    void adicionarCozinha(Cozinha *cozinha);
    int getQuantidadeCozinha();
    void adicionarSala(Sala *sala);
    int getQuantidadeSala();
};

#endif // CASA_H_