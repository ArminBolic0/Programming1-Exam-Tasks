#include <iostream>
using namespace std;

//Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog 
//dinamičkog niza integer vrijednosti.Napisati rekurzivnu funkciju koja će taj niz popuniti 
//faktorijelom rednog broja člana niza(1!, 2!, 3!, 4!...).Rekurzija se prekida kada se popuni 
//cijeli niz ili kada se desi overflow na integer varijabli.U ovom zadatku je zabranjeno indeksirati 
//elemente niza uglastim zagradama.
//(Obavezno koristiti aritmetiku pokazivača.Obavezno sve riješiti jednom rekurzivnom funkcijom.)

void popuniFaktorijel(int*, int, int = 0);

int main()
{
	int vel;
	do {
		cout << "Unesite velicinu niza: ";
		cin >> vel;
	} while (vel <= 2);
	int* niz = new int[vel];
	popuniFaktorijel(niz, vel);
	for (size_t i = 0; i < vel; i++)
	{
		cout << *(niz + i) << " ";
	}
	return 0;
}

void popuniFaktorijel(int* niz, int vel, int brojac)
{
	if (brojac >= vel) return;
	if (brojac == 0)
	{
		*(niz + brojac) = 0;
		return popuniFaktorijel(niz, vel, ++brojac);
	}
	int broj = 1;
	for (size_t i = 1; i <= brojac; i++)
	{
		broj *= i;
		if (broj < 0) return; //overflow check
	}
	*(niz + brojac) = broj;
	return popuniFaktorijel(niz, vel, ++brojac);
}

