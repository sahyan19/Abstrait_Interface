#ifndef MOTO_HPP
#define MOTO_HPP

#include "../header/Vehicule.hpp"
#include <string>

class Moto: public Vehicule
{
    public:
        Moto();
        ~Moto();

        void setType(std::string categorie);
        void setPuissance(std::string puissance);
        void affichageInfo() override;
        void conduire() override;

        std::string getType();
        std::string getPuissance();

    private:
        std::string categorie;
        std::string puissance;
};

#endif
