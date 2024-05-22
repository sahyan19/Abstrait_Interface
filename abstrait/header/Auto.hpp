#ifndef AUTO_HPP
#define AUTO_HPP

#include "../header/Vehicule.hpp"
using namespace std;

class Auto: public Vehicule
{

    public:
        Auto();
        ~Auto();

        void setVitesseMax(float vitesseMax);
        void setProvenance(string provenance);
        void affichageInfo();
        void conduire();


        float getVitesseMax();
        string getProvenance();

    private:
        float vitesseMax;
        string provenance;

};

#endif