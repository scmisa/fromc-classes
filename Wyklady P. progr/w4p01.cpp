#include <iostream>

using namespace std;

int main()
{
    int tab[10000];
    int ile;
    cout << "Ile elementow wpisac: ";
    cin >> ile;
    for (int i = 0; i < ile; i++)
    {
        cout << "tab[" << i + 1 << "]=" << endl;
        cin >> tab[i];
    }
    int suma = 0;
    for (int i = 0; i < ile; i++)
    {
        suma += tab[i];
    }
    double srednia = (double)suma / ile;
    cout << "Wieksze od sredniej byly: ";

    for (int i = 0; i < ile; i++)
    {
        if (tab[i] > srednia)
            cout << " " << tab[i];
    }

    return 0;
}