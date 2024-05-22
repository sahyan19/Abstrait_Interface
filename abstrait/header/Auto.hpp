#ifndef AUTO_HPP
#define AUTO_HPP

#include "../header/Vehicule.hpp"

class Auto: public Vehicule
{

    public:
        Auto();
        Auto(string marque, string couleur, int nombreDePLace, float vitesseMax, string provenance);
        ~Auto();

        void setVitesseMax(float vitesseMax);
        void setProvenance(string provenance);
        void affichageInfo();


        float getVitesseMax();
        string getProvenance();

    private:
        float vitesseMax;
        string provenance;

};

#endif