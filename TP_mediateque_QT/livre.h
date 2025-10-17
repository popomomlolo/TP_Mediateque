#ifndef LIVRE_H
#define LIVRE_H

#include "media.h"

class Livre : public Media
{
private:
    int nombreDePage;
public:
    Livre(int _nombreDePage, int _identifiant, const string &_titre, const string &_auteur, int _annee);
    void afficher();
};

#endif // LIVRE_H
