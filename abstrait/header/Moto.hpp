#ifndef MOTO_HPP
#define MOTO_HPP

#include "../header/Vehicule.hpp"

class Moto: public Vehicule
{

    public:
        Moto();
        ~Moto();

        void setType(string type);
        void setPuissance(string puissance);
        void affichageInfo();

        string getType();
        string getPuissance();

    private:
        string type;
        string puissance;

};

#endif