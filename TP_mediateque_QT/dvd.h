#ifndef DVD_H
#define DVD_H

#include "media.h"

class DVD : public Media
{
private:
    int duree;
public:
    DVD(int _duree,int _identifiant, string _titre, string _auteur,
        int _annee);
    virtual void afficher();
    ~DVD();
};

#endif // DVD_H
