#include <iostream>
using namespace std;

//Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog dinamičkog 
//niza integer vrijednosti.Napisati rekurzivnu funkciju koja će taj niz popuniti random brojevima 
//u opsegu od 1 do 100. Za generisanje random brojeva koristiti rand() % 100 + 1. Punjenje niza se
//prekida kada se popuni cijeli niz ili kada se tri puta uzastopno dobije isti random broj.U ovom 
//zadatku je zabranjeno indeksirati elemente niza uglastim zagradama.Obavezno koristiti aritmetiku pokazivača.
//(Obavezno sve riješiti jednom rekurzivnom funcijom.)

void popuniNiz(int*, int, int = 0);

int main()
{
	srand(time(NULL));
	int vel;
	do {
		cout << "Unesite velicinu niza: ";
		cin >> vel;
	} while (vel <= 2);
	int* niz = new int[vel];
	popuniNiz(niz, vel);
	for (size_t i = 0; i < vel; i++)
	{
		cout << *(niz + i) << " ";
	}
	return 0;
}

void popuniNiz(int* niz, int vel, int brojac)
{
	if (brojac >= vel) return;
	*(niz + brojac) = rand() % 100 + 1;
	if (brojac >= 2)
	{
		if (*(niz + brojac) == *(niz + brojac - 1) && *(niz + brojac - 1) == *(niz + brojac - 2)) return;
	}
	return popuniNiz(niz, vel, ++brojac);
}


