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

    bool operator>(CDate d1)
        {
            if (seconde>59)
                int mn = mn++;
                int sec = 0;
            if (minute>59)
                int h = h++;
                int mn = 0;
            if (heure>23)
                int j = j++;
                int h = 0;
            if (jour>30)
                int m = m++;
                int j = 1;
            if (mois>12)
                int a = a++;
                int m = 1;
        }
