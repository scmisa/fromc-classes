#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

void wypisz_cos();
int rzut_kostka();
int losowanie_z_zakresu(int a = 0, int b = 0);

int main()
{
    srand(time(NULL));

    // wypisz_cos();
    // cout << rzut_kostka();
    for (int i = 0; i < 10; i++)
    {
        cout << losowanie_z_zakresu(-10, 10) << "\t";
    }
    return 0;
}
void wypisz_cos()
{
    cout << "cos";
}
int rzut_kostka()
{
    int wynik = rand() % 6 + 1;
    return wynik;
}
int losowanie_z_zakresu(int a, int b)
{
    return rand() % (a - b + 1);
}