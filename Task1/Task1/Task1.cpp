#include <iostream>
using namespace std;

//
//Napisati program u kojem je potrebno unijeti odabrani broj cifara po?evši od cifre najve?e težinske vrijednosti,
//pa od njih sastaviti i napisati prirodni broj.Unos cifara se prekida kada se unese broj manji od 0, ukoliko korisnik
//unese cifru ve?u od 9, ispisati poruku da cifra nije validna, ali se unos ne prekida.
//

int rekurzivnaFunkcija(int = 0);
int loopFunkcija();

int main()
{
	int odabirFunkcije;
	cout << "Odaberi funkciju:\n1.Rekurzivna\n2.Loop" << endl;
	cin >> odabirFunkcije;
	if (odabirFunkcije == 1) cout << rekurzivnaFunkcija();
	else cout << loopFunkcija();
}

//rekurzivno
int rekurzivnaFunkcija(int broj)
{
	int uneseniBroj;
	cout << "Unesite broj: ";
	cin >> uneseniBroj;
	if (uneseniBroj < 0) return broj;
	if (uneseniBroj > 9)
	{
		cout << "Cifra nije validna" << endl;
		return rekurzivnaFunkcija(broj);
	}
	return rekurzivnaFunkcija(broj * 10 + uneseniBroj);
}

//kroz petlju
int loopFunkcija()
{
	int uneseniBroj, broj = 0;
	while (true)
	{
		cout << "Unesite broj: ";
		cin >> uneseniBroj;
		if (uneseniBroj < 0)
		{
			return broj;
		}
		if (uneseniBroj > 9)
		{
			cout << "Cifra nije validna" << endl;
		}
		else
		{
			broj *= 10;
			broj += uneseniBroj;
		}
	}
}
