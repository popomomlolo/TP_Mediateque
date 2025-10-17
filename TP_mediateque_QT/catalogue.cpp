#include "catalogue.h"


Catalogue::Catalogue(int _nbMedia):nbMedia(_nbMedia)
{
    lesMedias = new Media*[nbMedia];
}

Catalogue::~Catalogue()
{
    delete lesMedias;
}

bool Catalogue::ajouterMedia(Media _ptrMedia)
{
    bool ret=false;
    if(lesMedias[index]==nullptr){
        lesMedias[index]=_ptrMedia;
        index++;
        ret=true;
    }
    return ret;
}

void Catalogue::consulter(TYPE_MEDIA _typeAffichage)
{

}
