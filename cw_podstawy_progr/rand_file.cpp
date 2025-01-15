#include <iostream>
#include <fstream>
#include <cstdlib>

using namespace std;

void zapisplik()
{
    fstream plik;
    plik.open("losowe.txt", ios::app);
    for (int i = 0; i < 10; i++)
    {
        plik << rand() % 100 << endl;
    }
    plik.close();
}

void odczytplik()
{
    long long a, suma = 0, ile = 0;
    fstream plik;
    plik.open("losowe.txt", ios::in);
    while (!plik.eof())
    {
        plik >> a;
        suma += a;
        ile++;
    }
    cout << "Ilosc liczb: " << ile << endl;
    cout << "Suma: " << suma << endl;
    plik.close();
}

void ile_liter()
{
    fstream plik;
    plik.open("rand_file.cpp", ios::in);
    int ile = 0;
    char znak;
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            plik.get(znak);
            ile++;
        }
        cout << "Plik zawiera " << ile << " znakow." << endl;
    }
    else
    {
        cout << "Dostep do pliku zostal zabroniony!" << endl;
        exit(0);
    }
}
void ile_znakow()
{
    fstream plik;
    plik.open("rand_file.cpp", ios::in);
    int ile = 0;
    char znak;
    if (plik.good() == true)
    {
        while (!plik.eof())
        {
            for (char i = 32; i < 127; i++)
            {
                plik.get(znak);
                cout << i << " " << znak << endl;
            }
        }
    }
    else
    {
        cout << "Dostep do pliku zostal zabroniony!" << endl;
        exit(0);
    }
}
int main()
{
    ile_liter();
    return 0;
}