#include <iostream>
#include <fstream>

using namespace std;

void czytaj()
{
    fstream plik;
    plik.open("pixel.bmp", ios::in | ios::binary);
    if (plik.good() == true)
    {
        cout << "Uzyskano dostep do pliku!" << endl;
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
    czytaj();
    return 0;
}