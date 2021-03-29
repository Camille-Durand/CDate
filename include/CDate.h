#ifndef CDATE_H
#define CDATE_H


class CDate
{
    public:
        CDate(int a, int m, int j, int h, int mn, int sec);
        virtual ~CDate();

        int getDate(int& a, int& m, int& j, int& h, int& mn, int& sec);
        void ajtsec();

        bool operator>(CDate d1);
        bool operator<(CDate d1);
        bool operator==(CDate d1);

    protected:

    private:
        int annee;
        int mois;
        int jour;
        int heure;
        int minute;
        int seconde;

};

#endif // CDATE_H
