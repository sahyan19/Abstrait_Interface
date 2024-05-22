#include <iostream>
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
    motor.setProvenance("Turquie");
    motor.setType("4 T");
    
    
    automobile.conduire();
    motor.conduire();
    
    motor.affichageInfo();
    automobile.affichageInfo();
    
    return(0);
}