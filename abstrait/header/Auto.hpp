#ifndef AUTO_HPP
#define AUTO_HPP

#include "../header/Vehicule.hpp"
#include <string>

class Auto: public Vehicule
{
    public:
        Auto();
        ~Auto();

        void setVitesseMax(float vitesseMax);
        void setProvenance(std::string provenance);
        void affichageInfo();
        void conduire() override;

        float getVitesseMax();
        std::string getProvenance();

    private:
        float vitesseMax;
        std::string provenance;
};

#endif
