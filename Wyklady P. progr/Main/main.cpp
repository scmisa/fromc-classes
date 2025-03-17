#include <iostream>
#include <string>
#include "Osoba.h"

using namespace std;

int main()
{
    Osoba osoba("Jan", "Kowalski");
    cout << "Imie: " << osoba.getImie() << endl;
    cout << "Nazwisko: " << osoba.getNazwisko() << endl;
    osoba.setImie("Adam");
    osoba.setNazwisko("Nowak");
    cout << "Imie: " << osoba.getImie() << endl;
    cout << "Nazwisko: " << osoba.getNazwisko() << endl;

    return 0;
}