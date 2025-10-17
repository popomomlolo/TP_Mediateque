#include "media.h"



int Media::getIdentifiant() const
{
    return identifiant;
}

void Media::setIdentifiant(int newIdentifiant)
{
    identifiant = newIdentifiant;
}

string Media::getTitre() const
{
    return titre;
}

void Media::setTitre(const string &newTitre)
{
    titre = newTitre;
}

string Media::getAuteur() const
{
    return auteur;
}

void Media::setAuteur(const string &newAuteur)
{
    auteur = newAuteur;
}

int Media::getAnnee() const
{
    return annee;
}

void Media::setAnnee(int newAnnee)
{
    annee = newAnnee;
}

Media::Media(int identifiant, const string &titre, const string &auteur, int annee) : identifiant(identifiant),
    titre(titre),
    auteur(auteur),
    annee(annee)
{}

void Media::afficher()
{
    cout<<"| "<<setw(7)<<identifiant<<setw(37)<<" | "<<titre<<setw(26)<<" | "<<auteur<<setw(8)<<" | "<<annee<<" |"<<endl;
}
