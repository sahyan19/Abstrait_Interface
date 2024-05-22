#include "../header/Auto.hpp"
#include <iostream>

using namespace std;

/**************************************************************************/ 

Auto::Auto()
{

}

/**************************************************************************/

Auto:Auto(string marque, string couleur, int nombreDePLace, float vitesseMax, string provenance): Vehicule (string marque, string couleur, int nombreDePLace)
{
    this->vitesseMax = vitesseMax;
    this->provenance = provenance;
}

/**************************************************************************/

Auto::~Auto()
{
    cout << "Destruction..." << endl;
}

/**************************************************************************/

void Auto::setVitesseMax(float vitesseMax)
{
    this->vitesseMax = vitesseMax;
}

/**************************************************************************/

void Auto::setProvenance(string provenance)
{
    this->provenance = provenance;
}


/**************************************************************************/

float Auto::getVitesseMax()
{
    return vitesseMax;
}

/**************************************************************************/

string Auto::getProvenance()
{
    return provenance;
}

/**************************************************************************/

void Auto::affichageInfo()
{
    Vehicule::affichageInfo();
    cout << "Vitesse Max ->  " << vitesseMax << endl;
    cout << "Provenance ->  " << provenance << endl;
    cout << "=======================================================" << endl;
}
/********| implémentation des méthodes abstraites de la class Vehicule|*************/

void Auto::conduire()
{
    cout << "Entraine de conduire..." << endl;
}


/**************************************************************************/