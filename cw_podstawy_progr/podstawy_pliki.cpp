#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool czyPierwsza(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int dzielniki(int x)
{
    int dzielnik = 0;
    for (int i = 1; i <= x; i++)
    {
        if (x % i == 0)
        {
            dzielnik++;
            cout << i << " ";
        }
    }
    return dzielnik;
}

int silnia(int x)
{
    if (x == 0)
    {
        return 1;
    }
    return x * silnia(x - 1);
}

int silniaNR(int x)
{
    int result = 1;
    for (int i = 1; i <= x; i++)
    {
        result *= i;
    }
    return result;
}

int potega(int x)
{
    return x * x;
}
int main()
{
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;

    // dzielniki(liczba);
    // cout << endl;
    cout << silnia(liczba);
    cout << endl;
    cout << silniaNR(liczba);
    cout << endl;
    cout << potega(liczba);
    cout << endl;
    return 0;
}