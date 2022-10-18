#include <iostream>

#include "Banheiro.hpp"
#include "Quarto.hpp"
#include "Sala.hpp"
#include "Cozinha.hpp"
#include "Casa.hpp"
#include "Utilitario.hpp"

int main()
{

    Banheiro *banheiro = construirBanheiro(1.2f, 2.2f, 3.0f);

    Quarto *quarto = construirQuarto(3.0f, 4.0f, 3.0f, true);
    quarto->setBanheiro(banheiro);

    banheiro = construirBanheiro(3.2f, 2.2f, 3.0f, true);

    Sala *sala = construirSala(4.4f, 4.0f, 3.0f, true);

    Cozinha *cozinha = construirCozinha(4.4f, 5.0f, 3.0f, true);

    Casa *casa = new Casa();
    casa->setEndereco("Rua da casa, n 100");
    casa->adicionarBanheiro(banheiro);
    casa->adicionarQuarto(quarto);
    casa->adicionarSala(sala);
    casa->adicionarCozinha(cozinha);

    quarto = construirQuarto(4.0f, 4.0f, 3.0f);
    
    casa->adicionarQuarto(quarto);

    casa->exibirInformacoes();

    delete casa;
}