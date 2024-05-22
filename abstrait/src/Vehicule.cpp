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
    cout << "La marque a ete mis a jour..." << endl;
}

/*************************************************************/

void Vehicule::setCouleur(string couleur)
{
    this->couleur = couleur;
    cout << "La couleur a ete mis a jour..." << endl;
}

/*************************************************************/

void Vehicule::setNombreDePlace(int nombreDePlace)
{
    this->nombreDePlace = nombreDePlace;
    cout << "Le Nombre de place a ete mis a jour..." << endl;
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