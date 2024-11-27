#include <iostream>

using namespace std;

void isPrime(int &n);
void potega_i_silnia(int &silnia, int &potega);

int main()
{

    for (int i = 1; i <= 100; i++)
    {
        cout << "Liczba: " << i << " ";
        isPrime(i);
        cout << endl;
    }

    return 0;
}

void potega_i_silnia(int &silnia, int &potega)
{
    int wynik = 1;
    for (int i = 1; i <= potega; i++)
    {
        wynik *= silnia;
    }
    cout << "Wynik potegowania: " << wynik << endl;

    int wynik_silnia = 1;
    for (int i = 1; i <= silnia; i++)
    {
        wynik_silnia *= i;
    }
    cout << "Wynik silni: " << wynik_silnia << endl;
}

void isPrime(int &n)
{
    bool isPrime = true;
    for (int i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            isPrime = false;
            break;
        }
    }
    if (isPrime)
    {
        cout << "jest pierwsza" << endl;
    }
    else if (n == 1)
    {
        cout << "nie jest pierwsza" << endl;
    }
    else
    {
        cout << "nie jest pierwsza" << endl;
    }
}
