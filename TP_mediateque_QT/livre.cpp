#include "livre.h"



Livre::Livre(int _nombreDePage, int _identifiant, const string &_titre, const string &_auteur, int _annee) :
    Media(_identifiant, _titre, _auteur, _annee),
    nombreDePage(_nombreDePage)
{}

void Livre::afficher()
{
    Media::afficher();
    cout<<nombreDePage <<" pages "<<setw(13)<< "    | "<<endl;
}
