#include "../header/Vehicule.hpp"
#include <iostream>

using namespace std;

/*************************************************************/

Vehicule::Vehicule()
{

}

/*************************************************************/

Vehicule::Vehicule(string marque, string couleur, int nombreDePLace)
{
    this->marque = marque;
    this->couleur = couleur;
    this->nombreDePLace = nombreDePLace;
}

/*************************************************************/

Vehicule::~Vehicule()
{
    cout << "Destruction..." << endl;
}

/*************************************************************/

Vehicule::~Vehicule(string message)
{
    cout << message << endl;
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

void Vehicule::setNombreDePlace(int nombreDePLace)
{
    this->nombreDePLace = nombreDePLace;
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

int Vehicule::getNombreDePLace()
{
    return nombreDePLace;
}

/*************************************************************/