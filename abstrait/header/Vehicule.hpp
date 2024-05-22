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
        
        void affichageInfo();
        void setMarque(string marque);
        void setCouleur(string couleur);
        void setNombreDePlace(int nombreDePLace);

        string getMarque();
        string getCouleur();
        int getNombreDePLace();

};

#endif