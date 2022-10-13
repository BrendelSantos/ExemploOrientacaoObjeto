#include <iostream>

#include "Banheiro.hpp"
#include "Quarto.hpp"
#include "Sala.hpp"
#include "Casa.hpp"

Quarto* construirQuarto(float largura, float comprimento, float altura) 
{
    Quarto *quarto = new Quarto();
    quarto->setLargura(largura);
    quarto->setComprimento(comprimento);
    quarto->setAltura(altura);

    return quarto;
}

Banheiro* construirBanheiro(float largura, float comprimento, float altura) 
{
    Banheiro *banheiro = new Banheiro();
    banheiro->setLargura(largura);
    banheiro->setComprimento(comprimento);
    banheiro->setAltura(altura);

    return banheiro;
} 

int main()
{

    Banheiro *banheiro = construirBanheiro(1.2f, 2.2f, 3);

    Quarto *quarto = construirQuarto(3, 4, 3);
    quarto->setBanheiro(banheiro);

    banheiro = construirBanheiro(3.2f, 2.2f, 3);

    Casa *casa = new Casa();
    casa->adicionarBanheiro(banheiro);
    casa->adicionarQuarto(quarto);

    delete quarto; 
    delete banheiro; 

    quarto = construirQuarto(4, 4, 3);
    
    casa->adicionarQuarto(quarto);

    delete quarto; 

    cout << casa->getQuantidadeBanheiro() << endl;
    cout << casa->getQuantidadeQuarto() << endl;

    delete casa;
}