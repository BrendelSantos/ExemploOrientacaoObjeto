#include <iostream>

#include "Banheiro.hpp"
#include "Quarto.hpp"
#include "Sala.hpp"
#include "Cozinha.hpp"
#include "Casa.hpp"
#include "Utilitario.hpp"

int main()
{

    Banheiro *banheiro = construirBanheiro(1.2f, 2.2f, 3);

    Quarto *quarto = construirQuarto(3, 4, 3);
    quarto->setBanheiro(banheiro);

    banheiro = construirBanheiro(3.2f, 2.2f, 3);

    Sala *sala = construirSala(4.4f, 4, 3);
    Cozinha *cozinha = construirCozinha(4.4f, 5, 3);

    Casa *casa = new Casa();
    casa->adicionarBanheiro(banheiro);
    casa->adicionarQuarto(quarto);
    casa->adicionarSala(sala);
    casa->adicionarCozinha(cozinha);

    delete quarto; 
    delete banheiro; 
    delete sala;
    delete cozinha;

    quarto = construirQuarto(4, 4, 3);
    
    casa->adicionarQuarto(quarto);

    delete quarto; 

    cout << casa->getQuantidadeBanheiro() << endl;
    cout << casa->getQuantidadeQuarto() << endl;
    cout << casa->getQuantidadeSala() << endl;
    cout << casa->getQuantidadeCozinha() << endl;

    delete casa;
}