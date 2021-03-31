#ifndef CDATE_H
#define CDATE_H


class CDate
{
    public: // méthodes
        CDate(int a, int m, int j, int h, int mn, int s);
        virtual ~CDate();

        int getDate(int& a, int& m, int& j, int& h, int& mn, int& s);
        void ajtsec(); //ajout secondes

        bool operator>(CDate d1); //surcharge >
        bool operator<(CDate d1); //surcharge <
        bool operator==(CDate d1); //surcharge ==

    protected:

    private: // attributs
        int annee;
        int mois;
        int jour;
        int heure;
        int minute;
        int seconde;

};

#endif // CDATE_H
