//********************************************************
// Auteur : MP Pinaud
// date : 19/03/2021
// fichier: TU_CDate.cpp
// Programme de test unitaire de la classe CDate
// Difficult� C
//********************************************************
#include <iostream>
using namespace std;
#include "../include/CDate.h"


void test_constructeur();
void test_egal();
void test_constructeurSansParametre();
void test_sup();
void test_inf();
void test_incrementerSec();
void saisirDate(int &j, int &m, int &a, int &s, int &mn, int &h);
void afficherDate(CDate &d);

int main ()
{
	int rep;
	do
	{
		cout << "Test de la classe CDate ----- ---- --- -- -" << endl;
		cout << "****************** * ** * * ** *" << endl<< endl;
		cout << "Quelle methode voulez-vous tester ?" << endl;
		cout << "1 - Constructeur " << endl;
		cout << "2 - Constructeur sans parametre" << endl;
		cout << "3 - operateur ==" << endl;
		cout << "4 - operateur >" << endl;
		cout << "5 - operateur <" << endl;
		cout << "6 - incrementerSec" << endl;
		cout << "0 - Sortie du test de la classe CDate\n" <<endl;
		cout << "************************* * ** * * ** *" << endl;

		cin >> rep;

		switch (rep)
		{
			case 1 :	test_constructeur();
						break;
			case 2 :	test_constructeurSansParametre();
						break;
            case 3 :	test_egal();
						break;
			case 4 :	test_sup();
						break;
			case 5 :	test_inf();
						break;
            case 6:     test_incrementerSec();
						break;
			case 0 :	cout << "Deconnexion..." << endl;
                        break;
			default :	cout << "Erreur de saisie" <<endl;
						break;
		}
		cout <<endl << endl;
	} while (rep != 0);

	return 0;
}

//**************************************************************
// Fonction:saisirDate
// R�le :	permet de saisir les informations d'une date
// Param�tres de sortie : le jour, mois, ann�e, secondes, minutes, heures saisies
//***************************************************************
void saisirDate(int &j, int &m, int &a, int &s, int &mn, int &h)
{
    cout << "Saisir les informations de la date a creer" << endl;
	cout << "jour : ";
	cin >>j;
	cout << "mois : ";
	cin >>m;
	cout << "annee : ";
	cin >>a;
	cout << "heure : ";
	cin >>h;
	cout << "minutes : ";
	cin >>mn;
	cout << "secondes : ";
	cin >>s;

}
//**************************************************************
// Fonction:afficherDate
// R�le :	affiche la date pass�e en param�tre
// Param�tre d'entr�e : la date � afficher
//***************************************************************
void afficherDate (CDate &d)
{
    cout << "Date: " << &d << endl;
}

//**************************************************************
// Fonction:test_constructeur
// R�le :	teste le constructeur et affiche la date  � l'aide des m�thodes d'acc�s
//***************************************************************

void test_constructeur()//1
{
	int j, m, a,s,mn,h;
	cout << "Test du constructeur de la classe CDate:" << endl;
	cout << "-----------------------------------------------" << endl;
	cout << "Saisir la date utilisee pour tester" << endl;

    saisirDate(j,m,a,s,mn,h);

	// Cr�ation de la date
	cout << "On est le " << j << "/" << m << "/" << a << " et il est " << h << ":" << mn << ":" << s << endl;
}

//**************************************************************
// Fonction:test_constructeur
// R�le :	teste le constructeur sans param�tre de la classe CDate
//***************************************************************

void test_constructeurSansParametre()//2
{

	cout << "Test du constructeur sans parametre de la classe CDate:" << endl;
	cout << "-------------------------------------------------------" << endl;

	cout << "On est le " << "j" << "/" << "m" << "/" << "a" << " et il est " << "h" << ":" << "mn" << ":" << "s" << endl;

}

//**************************************************************
// Fonction:test_egal
// R�le :	teste de l'op�rateur == de la classe CDate
//***************************************************************
void test_egal()//3
{
	int j, m, a,s,mn,h;
	cout << "Test de la methode isEqual de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	// Cr�ation de la 1�re date
	// A COMPLETER


	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	// Cr�ation de la 2�me date
	// A COMPLETER


	// Comparer les deux dates avec == et afficher le r�sultat de la comparaison
	// A COMPLETER
}

//**************************************************************
// Fonction:test_sup
// R�le :	teste de l'op�rateur >  de la classe CDate
//***************************************************************

void test_sup()//4
{
	int j, m, a,s,mn,h;
	cout << "Test de la methode isLater  de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	// Cr�ation de la 1�re date
	// A COMPLETER

	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	// Cr�ation de la 2�me date
	// A COMPLETER

	// Comparer les deux dates avec > et afficher le r�sultat de la comparaison
	// A COMPLETER
}


//**************************************************************
// Fonction:test_inf
// R�le :	teste l'op�rateur < de la classe CDate
//***************************************************************

void test_inf()//5
{
	int j, m, a,s,mn,h;
	cout << "Test de la methode isEarlier de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;

	cout << "Saisir la 1ere date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	// Cr�ation de la 1�re date
	// A COMPLETER



	cout << "Saisir la 2eme date utilisee pour tester" << endl;
    saisirDate(j,m,a,s,mn,h);

	// Cr�ation de la 2�me date
	// A COMPLETER


	// Comparer les deux dates avec > et afficher le r�sultat de la comparaison
	// A COMPLETER
}

//**************************************************************
// Fonction:test_incrementerSec
// R�le :	teste la la m�thode incr�menterSec de la classe CDate
//***************************************************************
void test_incrementerSec()//6
{
	int j, m, a, h, mn, s;
	cout << "Test de la methode incrementerSec de la classe CDate:" << endl;
	cout << "--------------------------------------------" << endl;


}
