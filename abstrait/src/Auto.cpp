#include "../header/Auto.hpp"
#include <iostream>
#include "../header/Vehicule.hpp"

using namespace std;

/**************************************************************************/ 

Auto::Auto()
{

}

/**************************************************************************/

Auto::~Auto()
{
    
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
    cout << "Entrain de conduire une automobile.." << endl;
}


/**************************************************************************/