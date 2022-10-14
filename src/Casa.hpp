#include <iostream>
#include <vector>
#include "Comodo.hpp"
#include "Banheiro.hpp"
#include "Quarto.hpp"
#include "Cozinha.hpp"
#include "Sala.hpp"
#include "Utilitario.hpp"

using namespace std;

#ifndef CASA_H_
#define CASA_H_

class Casa
{

private:
    string endereco;
    vector<Comodo *> banheiros;
    vector<Comodo *> cozinhas;
    vector<Comodo *> quartos;
    vector<Comodo *> salas;
    
public:
    Casa();
    ~Casa();
    void setEndereco(string endereco);
    string getEndereco();
    void adicionarBanheiro(Banheiro *banheiro);
    int getQuantidadeBanheiro();
    void adicionarQuarto(Quarto *quarto);
    int getQuantidadeQuarto();
    void adicionarCozinha(Cozinha *cozinha);
    int getQuantidadeCozinha();
    void adicionarSala(Sala *sala);
    int getQuantidadeSala();

    void exibirInformacoes();
    float calcularAreaTotal();
};

#endif // CASA_H_