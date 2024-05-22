
#include "../header/Moto.hpp"
#include <iostream>

using namespace std;

/**************************************************************************/ 

Moto::Moto()
{

}

/**************************************************************************/ 

Moto::~Moto()
{
    cout << "Destruction..." << endl;
}

/**************************************************************************/ 

void Moto::setType(string type)
{
    this->type = type;
}

/**************************************************************************/ 

void Moto::setPuissance(string puissance)
{
    this->puissance = puissance;
}

/**************************************************************************/

string Moto::getPuissance()
{
    return puissance;
}

/**************************************************************************/

string Moto::getType()
{
    return type;
}

/**************************************************************************/ 

void Moto::affichageInfo()
{
    Vehicule::affichageInfo();
    cout << "Type ->  " << type << endl;
    cout << "Puissance ->  " << puissance << endl;
}

/**************************************************************************/