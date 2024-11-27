#include <iostream>
#include <time.h>
using namespace std;

void divide()
{
    srand(time(NULL));
    int a = 5 * (rand() % 283 + 1);
    int b = 5 * (rand() % 283 + 1);
    int c = 5 * (rand() % 283 + 1);
    cout << "a: " << a << " b: " << b << " c: " << c << endl;
}

int podzielniki(int a)
{
    int ile = 0;
    for (int i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            ile++;
        }
    }
    cout << "Liczba " << a << " ma " << ile << " podzielnikow" << endl;
}
void random_numbers_to_table_and_sum()
{
    srand(time(NULL));
    int tab[15];
    int sum = 0;
    for (int i = 0; i < 10; i++)
    {
        tab[i] = rand() % 100 + 1;
        sum += tab[i];
    }
    cout << "Suma: " << sum << endl;
}
int isPrime(int a)
{
    if (a < 2)
    {
        return 0;
    }
    for (int i = 2; i * i <= a; i++)
    {
        if (a % i == 0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    podzielniki(54);
    divide();
    random_numbers_to_table_and_sum();
    cout << isPrime(7) << endl;
    return 0;
}