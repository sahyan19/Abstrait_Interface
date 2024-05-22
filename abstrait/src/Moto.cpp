#include "../header/Moto.hpp"
#include <iostream>

using namespace std;

Moto::Moto() : categorie(""), puissance("") {}

Moto::~Moto() {}

void Moto::setType(string categorie)
{
    this->categorie = categorie;
}

void Moto::setPuissance(string puissance)
{
    this->puissance = puissance;
}

string Moto::getPuissance()
{
    return puissance;
}

string Moto::getType()
{
    return categorie;
}

void Moto::affichageInfo()
{
    Vehicule::affichageInfo();
    cout << "Type ->  " << categorie << endl;
    cout << "Puissance ->  " << puissance << endl;
    cout << "=====================================================" << endl;
}

void Moto::conduire()
{
    cout << "Entrain de conduire une Moto" << endl;
}
