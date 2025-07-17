#include <iostream>
using namespace std;

//GOLDBACH
//Svaki paran broj se može prikazati kao suma dva prosta broja(tkz.Goldbachovo pravilo).Napisati
//program koji će najprije učitati dva prirodna broja n1 i n2(n2 > n1).
//Zatim prikazati sve parne brojeve u intervalu od n1 do n2 kao sumu dva prosta broja.
//(U glavnom programu samo unijeti navedena dva prirodna broja i pozvati funkciju koja obavlja zadani posao.)

bool daLiJeBrojPrime(int);
void goldbachRule(int, int);

int main()
{
	int pocetak, kraj;
	cout << "Unesite pocetni i krajnji broj: ";
	cin >> pocetak >> kraj;
	goldbachRule(pocetak, kraj);
	return 0;
}

bool daLiJeBrojPrime(int broj)
{
	for (size_t i = 2; i < broj / 2; i++)
	{
		if (broj % i == 0) return false;
	}
	return true;
}

void goldbachRule(int pocetak, int kraj)
{
	for (size_t i = pocetak; i < kraj; i++)
	{
		if (i % 2 == 0)
		{
			for (size_t j = 0, k = i - 1; j < k;)
			{
				if (j + k == i && daLiJeBrojPrime(j) && daLiJeBrojPrime(k))
				{
					cout << "Broj " << i << " zbir " << j << " i " << k << endl;
					break;
				}
				else
				{
					if (j + k > i) k--;
					else if (j + k < i) j++;
					else j++;
				}
			}
		}
	}
}