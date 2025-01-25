
// 1.funkcja która wpisze do tablicy 200 liczb losowych w zakresie od 20-80
// 2. funkcja która odczyta z pliku ile jest linijek i zwróci wartość
// 3.funkcja która policzy spacje w zdaniu
// 4. funkcja która wypisze liczby pierwsze
// 5. funkcja która wypisze do pliku liczby nie parzyste większe od 50

#include <iostream>
#include <fstream>
#include <cstdlib>
#include <ctime>
#include <string>

using namespace std;

void zad1()
{
    int tab[200];
    for (int i = 0; i < 200; i++)
    {
        tab[i] = rand() % 61 + 20;
    }
}
int zad2()
{
    fstream plik;
    plik.open("poprawa.cpp", ios::in);
    int licznik = 0;
    string linia;
    while (getline(plik, linia))
    {
        licznik++;
    }
    plik.close();
    return licznik;
}

void zad3()
{
    string zdanie = "Ala ma kota a kot ma Ale";
    int licznik = 0;
    for (int i = 0; i < zdanie.length(); i++)
    {
        if (zdanie[i] == ' ')
        {
            licznik++;
        }
    }
    cout << licznik;
}

void zad4()
{
    int liczba;
    for (int i = 2; i < 100; i++)
    {
        liczba = 0;
        for (int j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                liczba++;
            }
        }
        if (liczba == 0)
        {
            cout << i << " ";
        }
    }
}
// 5. funkcja która wypisze do pliku liczby nie parzyste większe od 50
void zad5()
{
    fstream plik;
    plik.open("liczby.txt", ios::out);
    for (int i = 51; i < 100; i++)
    {
        if (i % 2 != 0)
        {
            plik << i << endl;
        }
    }
    plik.close();
}

int main()
{
    return 0;
}