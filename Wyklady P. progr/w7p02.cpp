#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    plik.open("test.txt", ios::out);
    if (!plik.good())
    {
        cout << "Nie udalo sie otworzyc pliku!";
        exit(0);
    }
    plik << "Hello World! \t";
    plik.close();
}