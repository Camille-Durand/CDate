#include "CDate.h"

CDate::CDate(int a, int m, int j, int h, int mn, int sec)
{
    //ctor
    this->annee = a;
    this-> mois = m;
    this-> jour = j;
    this-> heure = h;
    this-> minute = mn;
    this-> seconde = sec;

}

CDate::~CDate()
{
    //dtor
}
