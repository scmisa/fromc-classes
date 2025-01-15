#include <iostream>
#include <fstream>

using namespace std;

void generuj_liczby()
{
    fstream plik;
    plik.open("liczby.txt", ios::out);
    for (int i = 0; i < 10; i++)
    {
        plik << rand() % 100 << ' ' << rand() % 100 << ' ' << rand() % 100 << ' ' << rand() % 100 << ' ' << endl;
    }
    plik.close();
}

void parzyste()
{
    cout << "Liczby parzyste: " << endl;
    fstream plik;
    plik.open("liczby.txt", ios::in);
    int liczba;
    while (!plik.eof())
    {
        plik >> liczba;
        if (liczba % 2 == 0)
        {
            cout << liczba << endl;
        }
    }
    plik.close();
}

void nieparzyste()
{
    cout << "Nieparzyste liczby:" << endl;
    fstream plik;
    plik.open("liczby.txt", ios::in);
    int liczba;
    while (!plik.eof())
    {
        plik >> liczba;
        if (liczba % 2 != 0)
        {
            cout << liczba << endl;
        }
    }
    plik.close();
}

void Prime_numbers()
{
    cout << "Liczby pierwsze:" << endl;
    fstream plik;
    plik.open("liczby.txt", ios::in);
    int liczba;
    while (!plik.eof())
    {
        plik >> liczba;
        if (liczba == 2 || liczba == 3 || liczba == 5 || liczba == 7)
        {
            cout << liczba << endl;
        }
        else if (liczba % 2 != 0 && liczba % 3 != 0 && liczba % 5 != 0 && liczba % 7 != 0)
        {
            cout << liczba << endl;
        }
    }
    plik.close();
}

int main()
{
    generuj_liczby();
    parzyste();
    nieparzyste();
    Prime_numbers();
    return 0;
}