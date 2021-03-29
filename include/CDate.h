#ifndef CDATE_H
#define CDATE_H


class CDate
{
    public:
        CDate(int a, int m, int j, int h, int mn, int sec);
        virtual ~CDate();

        int getDate(int& a, int& m, int& j, int& h, int& mn, int& sec);
        void ajtsec();

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
