#include "../header/Vehicule.hpp"
#include <iostream>

using namespace std;

/*************************************************************/

Vehicule::Vehicule()
{

}

/*************************************************************/

Vehicule::~Vehicule()
{
    cout << "Destruction..." << endl;
}

/*************************************************************/

void Vehicule::setMarque(string marque)
{
    this->marque = marque;
}

/*************************************************************/

void Vehicule::setCouleur(string couleur)
{
    this->couleur = couleur;
}

/*************************************************************/

void Vehicule::setNombreDePlace(int nombreDePlace)
{
    this->nombreDePlace = nombreDePlace;
}

/*************************************************************/

string Vehicule::getMarque()
{
    return marque;
}

/*************************************************************/

string Vehicule::getCouleur()
{
    return couleur;
}

/*************************************************************/

int Vehicule::getNombreDePlace()
{
    return nombreDePlace;
}

/*************************************************************/

void Vehicule::affichageInfo()
{
    cout << "=====================| A PROPOS |=====================" << endl;
    cout << "Marque ->  " << getMarque() << endl;
    cout << "Couleur ->  " << getCouleur() << endl;
    cout << "Nombre de place ->  " << getNombreDePlace() << endl;
}

/*************************************************************/