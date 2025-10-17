#include <iostream>
#include "livre.h"
#include "dvd.h"
using namespace std;

int main()
{
    Livre l1(96,1,"Le Petit Prince","Antoine de Saint-Exupery", 1943 );
    Livre l2(4300,2,"Cent ans de solitude","Gabriel García Marquez", 1967 );
    DVD d1(10,3,"Cent ans de solitude","Gabriel García Marquez", 1967);
    l1.afficher();
    l2.afficher();
    d1.afficher();
    return 0;
}
