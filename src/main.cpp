#include <iostream>

#include "Banheiro.hpp"
#include "Quarto.hpp"
#include "Sala.hpp"
#include "Casa.hpp"

int main()
{

    Banheiro* banheiro = new Banheiro();
    banheiro->setAltura(1.4f);

    Quarto* quarto = new Quarto();
    quarto->setAltura(1.5f);
    quarto->setBanheiro(banheiro);

    cout << quarto->getAltura() << endl;
    cout << quarto->getBanheiro()->getAltura() << endl;

    Casa* casa = new Casa();
    casa->adicionarBanheiro(banheiro);
    
    cout << casa->getQuantidadeBanheiro() << endl;


}