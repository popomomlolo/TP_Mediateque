#ifndef CATALOGUE_H
#define CATALOGUE_H
#include "media.h"


class Catalogue
{
private:
    int nbMedia;
    int index;
    Catalogue *lesMedias;
public:
    Catalogue(int _nbMedia);
    ~Catalogue();
    bool ajouterMedia(Media _ptrMedia);
    void consulter(TYPE_MEDIA _typeAffichage);
};

#endif // CATALOGUE_H
