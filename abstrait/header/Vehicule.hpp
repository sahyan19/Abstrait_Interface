#ifndef VEHICULE_HPP
#define VEHICULE_HPP
#include <string>

using namespace std;

class Vehicule
{

    protected:
        string marque;
        string couleur;
        int nombreDePlace;

    public:
        Vehicule();
        ~Vehicule();
        
        virtual void conduire() = 0;
        
        void affichageInfo();
        void setMarque(string marque);
        void setCouleur(string couleur);
        void setNombreDePlace(int nombreDePlace);

        string getMarque();
        string getCouleur();
        int getNombreDePlace();

};

#endif