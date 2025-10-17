#ifndef MEDIA_H
#define MEDIA_H
#include <iostream>
#include <iomanip>
using namespace std;

class Media
{
protected:
    int identifiant;
    string titre;
    string auteur;
    int annee;
public:
    Media(int identifiant, const string &titre, const string &auteur, int annee);
    ~Media();
    virtual void afficher();
    int getIdentifiant() const;
    void setIdentifiant(int newIdentifiant);
    string getTitre() const;
    void setTitre(const string &newTitre);
    string getAuteur() const;
    void setAuteur(const string &newAuteur);
    int getAnnee() const;
    void setAnnee(int newAnnee);
};

#endif // MEDIA_H
