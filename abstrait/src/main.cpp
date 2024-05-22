#include <iostream>
#include <string>
#include "../header/Vehicule.hpp" 
#include "../header/Auto.hpp"
#include "../header/Moto.hpp"

int main()
{

    Auto automobile = Auto();
    Moto motor = Moto();

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

    return(0);
}