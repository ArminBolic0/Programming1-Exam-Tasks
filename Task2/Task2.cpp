#include <iostream>
#include <ctime>
using namespace std;

//Napisati program koji ?e omogu?iti unos prirodnog broja A(A > 100000), te kreirati i 
// ispisati broj B koji ?e se sastojati od cifara broja A u obrnutom redoslijedu gdje je 
// svaka parna cifra uklonjena.
//Npr.ako se unese 45362792, funkcija treba vratiti 9735Ispisati razliku brojava A i B
//(Obavezno koristiti bar jednu korisni?ki definisanu funkciju)

int obrnutiNeparniBroj(int);

int main()
{
	int broj;
	cout << "Unesite broj: ";
	cin >> broj;
	cout << obrnutiNeparniBroj(broj);
	return 0;
}

int obrnutiNeparniBroj(int broj)
{
	int obrnuti = 0;
	while (broj > 0)
	{
		if ((broj % 10) % 2 != 0)
		{
			obrnuti *= 10;
			obrnuti += broj % 10;
		}
		broj /= 10;
	}
	return obrnuti;
}
