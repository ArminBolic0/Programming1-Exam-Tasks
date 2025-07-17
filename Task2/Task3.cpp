#include <iostream>
using namespace std;

//Napisati program koji omogu?ava unos pozitivnog broja n te pronalazi 
//njegove parne cifre i formira novi broj u kojem su parne cifre zamijenjene cifrom '5'.
//Dodatno program treba ispisati razliku unesenog i broja koji se dobije nakon zamjene.

int parneUPet(int);
int obrniBroj(int);

int main()
{
	int broj;
	cout << "Unesite broj: ";
	cin >> broj;
	cout << obrniBroj(parneUPet(broj)) << endl;
	cout << "Razlika: " << broj - obrniBroj(parneUPet(broj));
	return 0;
}

int parneUPet(int broj)
{
	int noviBroj = 0;
	while (broj > 0)
	{
		noviBroj *= 10;
		if ((broj % 10) % 2 == 0) noviBroj += 5;
		else noviBroj += broj % 10;
		broj /= 10;
	}
	return noviBroj;
}

int obrniBroj(int broj)
{
	int obrnutiBroj = 0;
	while (broj > 0)
	{
		obrnutiBroj *= 10;
		obrnutiBroj += broj % 10;
		broj /= 10;
	}
	return obrnutiBroj;
}