#ifndef OSOBA_H
#define OSOBA_H
#include <string>

using namespace std;

class Osoba
{
    string imie;
    string nazwisko;

public:
    Osoba(string imie, string nazwisko);
    string getImie() const;
    string getNazwisko() const;
    void setImie(string imie);
    void setNazwisko(string nazwisko);
};

#endif // OSOBA_H