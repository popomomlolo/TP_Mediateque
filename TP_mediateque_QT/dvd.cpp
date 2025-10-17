#include "dvd.h"
#include <iomanip>

DVD::DVD(int _duree,int _identifiant, string _titre, string _auteur,
             int _annee):
    Media(_identifiant,_titre,_auteur,_annee),
    duree(_duree)
{

}


void DVD::afficher()
{
    Media::afficher();
    cout<<duree  << " minutes "<<setw(13)<< " | "<<endl;
}


DVD::~DVD()
{

}
