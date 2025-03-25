#include <iostream>

using namespace std;

class Osoba
{
	// Pola klasy
	string imie;
	string nazwisko;
	int wiek;

public:
	// Metody klasy


	// Konstruktor domyślny
	Osoba()
	{
		this->imie = "";
		this->nazwisko = "";
		this->wiek = 0;
	}
	// Konstruktor z parametrami
	Osoba(string i, string n, int w)
	{
		this->imie = i;
		this->nazwisko = n;
		this->wiek = w;
	}
	// Konstruktor kopiujący
	Osoba(const Osoba& a)
	{
		imie = a.imie;
		nazwisko = a.nazwisko;
		wiek = a.wiek;
	}
	// Destruktor
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

	// Tworzenie obiektów Osoba (z kontruotrem domyślnym)
	Osoba test;
	test.print();

	// Tworzenie obiektów Osoba (z konstruktorem z parametrami)
	Osoba test2("Jan", "Kowalski",30);
	test2.print();


	// Tworzenie dynamicznej tablicy obiektów Osoba
	Osoba* osoby[10];

	for (int i = 0; i < 10; i++)
	{
		// wczytywanie danych z klawiatury
		cin >> imie;
		cin >> nazwisko;
		cin >> wiek;

		// Tworzenie obiektu Osoba i zapisanie go w dynamicznej tablicy
		osoby[i] = new Osoba(imie, nazwisko,wiek);
	}


	// Pętla wypisujaca dane osób
	for (int i = 0; i < 10; i++)
	{
		osoby[i]->print();
	}

	// Usuwanie obiektów z pamięci
	for (int i = 0; i < 10; i++)
	{
		delete osoby[i];
	}
}

