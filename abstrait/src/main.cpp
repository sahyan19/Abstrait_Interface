#include <iostream>
#include <string>
#include "../header/Vehicule.hpp" 
#include "../header/Auto.hpp"
#include "../header/Moto.hpp"

using namespace std;

int main()
{
    Auto automobile;
    Moto motor;

    automobile.setMarque("Renault");
    automobile.setCouleur("Bleu");
    automobile.setNombreDePlace(5);
    automobile.setProvenance("Allemagne");
    automobile.setVitesseMax(300);

    motor.setMarque("Honda");
    motor.setCouleur("Gris");
    motor.setNombreDePlace(2);
    motor.setType("4 T");
    motor.setPuissance("250 cc");

    motor.affichageInfo();
    motor.conduire();
    cout << endl;

    automobile.affichageInfo();
    automobile.conduire();
    cout << endl;

    return 0;
}
