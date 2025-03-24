#include <iostream>
#include <vector>


using namespace std;

class Osoba
{
	string imie;
	string nazwisko;
	int wiek;

public:
	Osoba()
	{
		this->imie = "";
		this->nazwisko = "";
		this->wiek = 0;
	}
	Osoba(string i, string n, int w)
	{
		this->imie = i;
		this->nazwisko = n;
		this->wiek = w;
	}
	Osoba(const Osoba& a)
	{
		imie = a.imie;
		nazwisko = a.nazwisko;
		wiek = a.wiek;
	}
	~Osoba()
	{
		cout << "Obiekt Osoba zostal zniszczony" << endl;
	}

	void print()
	{
		cout << imie << endl;
		cout << nazwisko << endl;
		cout << wiek << endl;
	}
};

int main()
{
	string imie, nazwisko;
	int wiek;

	Osoba test;
	test.print();

	Osoba test2("Jan", "Kowalski",30);
	test2.print();

	Osoba* osoby[10];
	for (int i = 0; i < 10; i++)
	{
		cin >> imie;
		cin >> nazwisko;
		cin >> wiek;
		osoby[i] = new Osoba(imie, nazwisko,wiek);
	}

	delete [] osoby;
}

