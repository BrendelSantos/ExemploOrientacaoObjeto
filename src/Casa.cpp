#include "Casa.hpp"

Casa::Casa()
{
}

Casa::~Casa()
{
    for (int i = 0; i < banheiros.size(); i++)
    {
        delete banheiros[i];
    }
    for (int i = 0; i < quartos.size(); i++)
    {
        delete quartos[i];
    }
    for (int i = 0; i < cozinhas.size(); i++)
    {
        delete cozinhas[i];
    }
    for (int i = 0; i < salas.size(); i++)
    {
        delete salas[i];
    }
}

void Casa::setEndereco(string endereco)
{
    this->endereco = endereco;
}

string Casa::getEndereco()
{
    return this->endereco;
}

void Casa::adicionarBanheiro(Banheiro *banheiro)
{
    this->banheiros.push_back(banheiro);
}

int Casa::getQuantidadeBanheiro()
{
    int quantidadeBanheiroQuartos = 0;
    Quarto *quarto;

    for (int i = 0; i < quartos.size(); i++)
    {
        quarto = dynamic_cast<Quarto *>(quartos[i]);
        if (quarto->getBanheiro()->getArea() > 0.0f)
            quantidadeBanheiroQuartos++;
    }

    return this->banheiros.size() + quantidadeBanheiroQuartos;
}

void Casa::adicionarQuarto(Quarto *quarto)
{
    this->quartos.push_back(quarto);
}

int Casa::getQuantidadeQuarto()
{
    return this->quartos.size();
}

void Casa::adicionarCozinha(Cozinha *cozinha)
{
    this->cozinhas.push_back(cozinha);
}

int Casa::getQuantidadeCozinha()
{
    return this->cozinhas.size();
}

void Casa::adicionarSala(Sala *sala)
{
    this->salas.push_back(sala);
}

int Casa::getQuantidadeSala()
{
    return this->salas.size();
}

void Casa::exibirInformacoes()
{
    cout << "Informacoes do imovel:" << endl;
    cout << "Endereco:  " << this->getEndereco() << endl;
    cout << "Possui     " << this->getQuantidadeBanheiro() << " Banheiros" << endl;
    cout << "Possui     " << this->getQuantidadeQuarto() << " Quartos" << endl;
    cout << "Possui     " << this->getQuantidadeSala() << " Salas" << endl;
    cout << "Possui     " << this->getQuantidadeCozinha() << " Cozinhas" << endl;
    cout << "Area:      " << this->calcularAreaTotal() << " m2 " << endl;
}

float Casa::calcularAreaTotal()
{
    float area;

    area = getAreaArrayComodo(banheiros);
    area += getAreaArrayComodo(quartos);
    area += getAreaArrayComodo(cozinhas);
    area += getAreaArrayComodo(salas);

    return area;
}