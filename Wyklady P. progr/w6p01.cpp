#include <iostream>

using namespace std;

int main()
{
    string imie;
    cout << "Podaj imie: ";
    cin >> imie;
    cout << endl;
    cout << "Witaj " << imie << "!" << endl;
    for (int i = 0; i < imie.length(); i++)
    {
        cout << imie[i] << endl;
    }
    string nazwisko;
    cout << "Podaj nazwisko: ";
    cin >> nazwisko;
    cout << endl;
    for (int i = 0; i < nazwisko.length(); i++)
    {
        cout << nazwisko[i] << endl;
    }
    imie.append(" " + nazwisko);
    cout << imie << endl;
    return 0;
}