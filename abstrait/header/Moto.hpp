#ifndef MOTO_HPP
#define MOTO_HPP

#include "../header/Vehicule.hpp"
using namespace std;

class Moto: public Vehicule
{

    public:
        Moto();
        ~Moto();

        void setType(string categorie);
        void setPuissance(string puissance);
        void affichageInfo();

        string getType();
        string getPuissance();

    private:
        string categorie;
        string puissance;

};

#endif