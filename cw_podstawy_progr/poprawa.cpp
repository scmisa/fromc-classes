
// 1.funkcja która wpisze do tablicy 200 liczb losowych w zakresie od 20-80
// 2. funkcja która odczyta z pliku ile jest linijek i zwróci wartość
// 3.funkcja która policzy spacje w zdaniu
// 4. funkcja która wypisze liczby pierwsze
// 5. funkcja która wypisze do pliku liczby nie parzyste większe od 50
// 6. Funkcja ktora znajdzie w stringu podanym przez uzytkowanika, spacje i napisze na ktorym sa miejscu
// 7. Funkcja ktora tworzy plik i dopisuje w nim tekst wprowadzony przez uzytkownika do momentu wpisania "koniec"

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
    fstream plik;
    plik.open("poprawa.cpp", ios::in);
    string linia;

    int licznik = 0;
    while (getline(plik, linia))
    {
        for (int i = 0; i < linia.length(); i++)
        {
            if (linia[i] == ' ')
            {
                licznik++;
            }
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

void zad6()
{
    string zdanie;
    cout << "Podaj zdanie: ";
    getline(cin, zdanie);
    for (int i = 0; i < zdanie.length(); i++)
    {
        if (zdanie[i] == ' ')
        {
            cout << "Spacja na miejscu: " << i << endl;
        }
    }
}
// 7. Funkcja ktora tworzy plik i dopisuje w nim tekst wprowadzony przez uzytkownika do momentu wpisania "koniec"
void zad7()
{
    fstream plik;
    plik.open("tekst.txt", ios::app);
    string tekst;
    while (true)
    {
        cout << "Podaj tekst: ";
        getline(cin, tekst);
        if (tekst == "koniec")
        {
            break;
        }
        plik << tekst << endl;
    }
    plik.close();
}

// 8. Funkcja ktora odczyta z pliku slowa i policzy ktore jest najdluzsze
void zad8()
{
    fstream plik;
    plik.open("poprawa.cpp", ios::in);
    string linia;
    string slowo;
    string najdluzsze;
    int dlugosc = 0;
    int najdluzszaDlugosc = 0;
    while (getline(plik, linia))
    {
        for (int i = 0; i < linia.length(); i++)
        {
            if (linia[i] != ' ')
            {
                slowo += linia[i];
            }
            else
            {
                dlugosc = slowo.length();
                if (dlugosc > najdluzszaDlugosc)
                {
                    najdluzszaDlugosc = dlugosc;
                    najdluzsze = slowo;
                }
                slowo = "";
            }
        }
    }
    cout << "Najdluzsze slowo: " << najdluzsze << endl;
    plik.close();
}

// 9. Funkcja ktora odczyta z pliku liczby i zapisze je do tablicy, a nastepnie wypisze najwieksza i najmniejsza
void zad9()
{
    fstream plik;
    plik.open("liczby.txt", ios::in);
    int liczba;
    int tab[100];
    int i = 0;
    while (plik >> liczba)
    {
        tab[i] = liczba;
        i++;
    }
    int najwieksza = tab[0];
    int najmniejsza = tab[0];
    for (int i = 0; i < 100; i++)
    {
        if (tab[i] > najwieksza)
        {
            najwieksza = tab[i];
        }
        if (tab[i] < najmniejsza)
        {
            najmniejsza = tab[i];
        }
    }
    cout << "Najwieksza liczba: " << najwieksza << endl;
    cout << "Najmniejsza liczba: " << najmniejsza << endl;
    plik.close();
}

int main()
{
    return 0;
}