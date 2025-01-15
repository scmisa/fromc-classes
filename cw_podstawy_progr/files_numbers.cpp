#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

void generujplik(int ile_linijek)
{
    srand(time(NULL));
    fstream plik;
    plik.open("plik.txt", ios::out | ios::app);
    if (plik.good() == true)
    {
        cout << "Uzyskano dostep do pliku!" << endl;
        for (int i = 0; i < ile_linijek; i++)
        {
            plik << "Linijka " << i + 1 << rand() << rand() << rand() << rand() << rand() << endl;
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
    int ile_linijek;
    cout << "Ile linijek chcesz wygenerowac: ";
    cin >> ile_linijek;
    generujplik(ile_linijek);
    return 0;
}