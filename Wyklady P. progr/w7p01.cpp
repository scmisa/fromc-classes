#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    fstream plik;
    string s;
    plik.open("test.txt", ios::app);
    plik << "Hello World! \t";
    plik.close();

    plik.open("test.txt", ios::in);
    if (!plik.good())
    {
        cout << "Nie udalo sie otworzyc pliku!";
        exit(0);
    }
    while (!plik.eof())
    {
        getline(plik, s);
        cout << s << endl;
    }

    plik.close();
    return 0;
}