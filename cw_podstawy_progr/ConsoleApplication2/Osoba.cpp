#include <iostream>
#include "Osoba.h"

using namespace std;

Osoba::Osoba(string imie, string nazwisko)
{
	this->imie = imie;
	this->nazwisko = nazwisko;
}

Osoba::~Osoba()
{
	cout << "Osoba destructor" << endl;
}

string Osoba::getImie()
{
	return imie;
}

string Osoba::getNazwisko()
{
	return nazwisko;
}

string Osoba::setImie(string imie)
{
	this->imie = imie;
	return imie;
}

string Osoba::setNazwisko(string nazwisko)
{
	this->nazwisko = nazwisko;
	return nazwisko;
}

