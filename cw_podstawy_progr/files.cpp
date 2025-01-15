#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void odczyt()
{
    fstream plik;
    plik.open("pamietnik.txt", ios::in);
    if (plik.good() == true)
    {
        cout << "Uzyskano dostep do pliku!" << endl;
        string linia;
        while (getline(plik, linia))
        {
            cout << linia << endl;
        }
    }
    else
    {
        cout << "Dostep do pliku zostal zabroniony!" << endl;
        exit(0);
    }
    plik.close();
}

void wpis()
{
    fstream plik;
    plik.open("pamietnik.txt", ios::out | ios::app);
    if (plik.good() == true)
    {
        cout << "Uzyskano dostep do pliku!" << endl;
        string wpis;
        cout << "Wpisz tresc wpisu: ";
        getline(cin, wpis);
        plik << wpis << endl;
    }
    else
    {
        cout << "Dostep do pliku zostal zabroniony!" << endl;
        exit(0);
    }
    plik.close();
}

int main()
{
    int wybor;
    do
    {
        cout << "1. Odczyt" << endl;
        cout << "2. Wpis" << endl;
        cout << "Wybierz opcje: ";
        cin >> wybor;
        cin.ignore();

        if (wybor == 1)
        {
            odczyt();
            continue;
        }
        else if (wybor == 2)
        {
            wpis();
            continue;
        }
        else
        {
            cout << "Nie ma takiej opcji" << endl;
            return -1;
        }
    } while (true);

    return 0;
}