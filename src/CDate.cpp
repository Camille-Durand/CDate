#include "CDate.h"

//- -- --- ---- --- -- - constructeur - -- --- ---- --- -- -
CDate::CDate(int a, int m, int j, int h, int mn, int s)
{
    a = this->annee;
    m = this-> mois;
    j = this-> jour;
    h = this-> heure;
    mn = this-> minute;
    s = this-> seconde;
}

//- -- --- ---- --- -- - destructeur - -- --- ---- --- -- -
CDate::~CDate()
{
    // [...]
}

//- -- --- ---- --- -- - bool operator - -- --- ---- --- -- -
bool CDate::operator==(CDate d1)
{
    if(this->annee==this->annee && this->mois==this->mois && this->jour==this->jour && this->heure==this->heure && this->minute==this->minute && this->seconde==this->seconde)
        return true;
}

bool CDate::operator<(CDate d1)
{
    if(this->annee<this->annee && this->mois<this->mois && this->jour<this->jour && this->heure<this->heure && this->minute<this->minute && this->seconde<this->seconde)
        return false;
}

bool CDate::operator>(CDate d1)
{
    if(this->annee>this->annee && this->mois>this->mois && this->jour>this->jour && this->heure>this->heure && this->minute>this->minute && this->seconde>this->seconde)
        return false;
}

