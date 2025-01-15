#include <iostream>
#include <fstream>
#include <string>

using namespace std;

void odczyt()
{
    string b;
    fstream plik;
    plik.open("dopisywanie.cpp", ios::in);
    while (!plik.eof())
    {
        getline(plik, b);
        cout << b << endl;
    }
    plik.close();
}

int main()
{
    odczyt();
    return 0;
}