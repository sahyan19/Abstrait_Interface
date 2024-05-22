#include "../header/Auto.hpp"
#include <iostream>

using namespace std;

Auto::Auto() : vitesseMax(0.0f), provenance("") {}

Auto::~Auto() {}

void Auto::setVitesseMax(float vitesseMax)
{
    this->vitesseMax = vitesseMax;
}

void Auto::setProvenance(string provenance)
{
    this->provenance = provenance;
}

float Auto::getVitesseMax()
{
    return vitesseMax;
}

string Auto::getProvenance()
{
    return provenance;
}

void Auto::affichageInfo()
{
    Vehicule::affichageInfo();
    cout << "Vitesse Max ->  " << vitesseMax << endl;
    cout << "Provenance ->  " << provenance << endl;
    cout << "=======================================================" << endl;
}

void Auto::conduire()
{
    cout << "Entrain de conduire une automobile.." << endl;
}
