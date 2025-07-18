#include <iostream>
using namespace std;

//Napisati program koji će omogućiti korisniku da unese veličinu jednodimenzionalnog dinamičkog niza integer
//vrijednosti.Napisati funkciju koja će taj niz popuniti serijom Fibonacci brojeva počevši od broja 1. 
//Za pronalazenje elemenata Fibonacci serije obavezno koristiti rekurzivnu funkciju.Punjenje niza se prekida 
//kada se popuni cijeli niz ili kada se desi overflow na integer varijabli.
//(U ovom zadatku je zabranjeno indeksirati niz uglastim zagradama.Obavezno koristiti aritmetiku pokazivača.)

void popuniFibonacci(int*, int, int = 1, int = 1, int = 0);

int main()
{
	int vel;
	do {
		cout << "Unesite velicinu niza: ";
		cin >> vel;
	} while (vel <= 2);
	int* niz = new int[vel];
	popuniFibonacci(niz, vel);
	for (size_t i = 0; i < vel; i++)
	{
		cout << *(niz + i) << " ";
	}
	return 0;
}

void popuniFibonacci(int* niz, int vel, int broj1, int broj2, int brojac)
{
	if (brojac == 0)
	{
		*(niz + 0) = broj1;
		if (vel > 1) *(niz + 1) = broj2;
		else return;
		return popuniFibonacci(niz, vel, broj1, broj2, brojac + 2);
	}
	if (brojac == vel) return;
	if (broj1 + broj2 < 0) return; //overflow check
	*(niz + brojac) = broj1 + broj2;
	return popuniFibonacci(niz, vel, broj2, broj1 + broj2, ++brojac);
}
