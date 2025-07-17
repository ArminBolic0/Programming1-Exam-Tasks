#include <iostream>
#include <ctime>
using namespace std;

//Napisati program koji simulira bacanje 3 kockice(jedna kockica ima 6 strana i na tim 
// stranama su brojevi 1 - 6).Simuliranje bacanja svake kockice ostvariti funkcijom rand() % 6 + 1. 
// Simulirati konstantno bacanje sve tri kockice dok se u dva uzastopna bacanja ne desi da se dobiju 
// isti brojevi na sve tri kockice(npr.u šestom bacanju se dobiju brojevi 2, 2, 2, a u sedmom 4, 4, 4
// na sve tri kockice).
//Ispisati koliko je ukupno bilo bacanja dok se nije ispunio navedeni uslov.
//Nije potrebno tražiti bilo kakav unos od korisnika.

int simuliranjeKockice();

int main()
{
	srand(time(NULL));
	cout << "Broj bacanja: " << simuliranjeKockice();
	return 0;
}

int simuliranjeKockice()
{
	int broj1, broj2, broj3, brojacBacanja = 0;
	bool istiBrojevi = false;
	while (true)
	{
		brojacBacanja++;
		broj1 = rand() % 6 + 1;
		broj2 = rand() % 6 + 1;
		broj3 = rand() % 6 + 1;
		if (istiBrojevi && broj1 == broj2 && broj2 == broj3) break;
		if (!istiBrojevi && broj1 == broj2 && broj2 == broj3) istiBrojevi = true;
	}
	return brojacBacanja;
}

