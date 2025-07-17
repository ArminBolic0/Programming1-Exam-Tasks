#include <iostream>
using namespace std;

//Omogu?iti unos dva broja X i Y iz intervala od 10 do 5000. Kreirati program koji ?e prona?i i 
//ispisati sve brojeve od X do Y(uklju?uju?i grani?ne vrijednosti) za koje važi da je obrnuti broj 
//deljiv sa njegovom sumom cifara.Za olakšanje rješenja zadataka napraviri funkcije za obrtanje poretka 
//cifara i za sumu cifara.Npr.Za broj 144 vrijedi da mu je suma cifara 9 i da je broj koji se dobije nakon
//što se njegove cifre obrnu 441, djeljiv sa 9.
//
//Definišite vrijednosti intervala[X, Y]: 11 150 Brojevi koji ispunjuju dati uslov : 18 20 21 24 27

int sumaCifara(int = 0, int = 0);
int obrnutBroj(int);

int main()
{
	int x, y;
	cout << "Unesite granicne vrijednost: ";
	cin >> x >> y;
	for (size_t i = x; i <= y; i++)
	{
		if (obrnutBroj(i) % sumaCifara(i) == 0) cout << i << endl;
	}
	return 0;
}

int sumaCifara(int broj, int suma)
{
	if (broj == 0) return suma;
	return sumaCifara(broj / 10, suma += broj % 10);
}

int obrnutBroj(int broj)
{
	int obrnutBroj = 0;
	while (broj > 0)
	{
		obrnutBroj *= 10;
		obrnutBroj += broj % 10;
		broj /= 10;
	}
	return obrnutBroj;
}