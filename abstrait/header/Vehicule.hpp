#ifndef VEHICULE_HPP
#define VEHICULE_HPP

class Vehicule
{

    protected:
        string marque;
        string couleur;
        int nombreDePLace;

    public:
        Vehicule();
        Vehicule(string marque, string couleur, int nombreDePLace);
        ~Vehicule(string message);
        ~Vehicule();
        
        virtual void conduire() = 0;
        virtual void affichageInfo() = 0;
        
        void setMarque(string marque);
        void setCouleur(string couleur);
        void setNombreDePlace(int nombreDePLace);

        string getMarque();
        string getCouleur();
        int getNombreDePLace();

};

#endif