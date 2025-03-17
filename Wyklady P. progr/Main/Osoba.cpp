#include <string>
#include <iostream>
#include "Osoba.h"

using namespace std;

Osoba::Osoba(string imie, string nazwisko)
{
    this->imie = imie;
    this->nazwisko = nazwisko;
}

string Osoba::getImie() const
{
    return imie;
}

string Osoba::getNazwisko() const
{
    return nazwisko;
}

void Osoba::setImie(string imie)
{
    this->imie = imie;
}

void Osoba::setNazwisko(string nazwisko)
{
    this->nazwisko = nazwisko;
}
