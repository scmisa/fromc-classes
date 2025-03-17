#pragma once
#ifndef OSOBA_H
#define OSOBA_H
#include <string>


class Osoba
{
	std::string imie;
	std::string nazwisko;
public:
	Osoba(std::string imie, std::string nazwisko);
	~Osoba();

	string getImie();
	string getNazwisko();

	string setImie(std::string imie);
	string setNazwisko(std::string nazwisko);
};

#endif // !OSOBA_H