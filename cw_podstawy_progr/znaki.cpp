#include <iostream>
#include <windows.h>
#include <ctime>

using namespace std;

void na_male(char *napis)
{
    for (int i = 0; napis[i] != '\0'; i++)
    {
        if (napis[i] >= 'A' && napis[i] <= 'Z')
        {
            napis[i] += 32;
        }
    }
    cout << napis << endl;
}
void na_duze(char *napis)
{
    for (int i = 0; napis[i] != '\0'; i++)
    {
        if (napis[i] >= 'a' && napis[i] <= 'z')
        {
            napis[i] -= 32;
        }
    }
    cout << napis << endl;
}

void szyfr_cezara(char *napis, int przesuniecie)
{
    for (int i = 0; napis[i] != '\0'; i++)
    {
        if (napis[i] >= 'A' && napis[i] <= 'Z')
        {
            napis[i] = (napis[i] - 'A' + przesuniecie) % 26 + 'A';
        }
        else if (napis[i] >= 'a' && napis[i] <= 'z')
        {
            napis[i] = (napis[i] - 'a' + przesuniecie) % 26 + 'a';
        }
    }
    cout << napis << endl;
}
void rysuj_prostokat(int a, int b)
{
    char znak = 178;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            cout << znak;
        }
        cout << endl;
    }
}

char rys_prost_rekurencja(int a, int b)
{
    char znak = 178;
    if (a == 0)
    {
        return 0;
    }
    for (int i = 0; i < b; i++)
    {
        cout << znak;
    }
    cout << endl;
    rys_prost_rekurencja(a - 1, b);
}

void pusty_prost(int a, int b)
{
    char znak = 223;
    char spacja = 32;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == 0 || i == a - 1 || j == 0 || j == b - 1)
            {
                cout << znak;
            }
            else
            {
                cout << spacja;
            }
        }
        cout << endl;
    }
}
void prostokat(int a, int b)
{
    char lewy_gorny = 201;
    char prawy_gorny = 187;
    char lewy_dolny = 200;
    char prawy_dolny = 188;
    char pozioma = 205;
    char pionowa = 186;
    char spacja = 32;

    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if (i == 0 && j == 0)
            {
                cout << lewy_gorny;
            }
            else if (i == 0 && j == b - 1)
            {
                cout << prawy_gorny;
            }
            else if (i == a - 1 && j == 0)
            {
                cout << lewy_dolny;
            }
            else if (i == a - 1 && j == b - 1)
            {
                cout << prawy_dolny;
            }
            else if (i == 0 || i == a - 1)
            {
                cout << pozioma;
            }
            else if (j == 0 || j == b - 1)
            {
                cout << pionowa;
            }
            else
            {
                cout << spacja;
            }
        }
        cout << endl;
    }
}

void szachownica(int a, int b)
{
    char czarny = 219;
    char bialy = 176;
    for (int i = 0; i < a; i++)
    {
        for (int j = 0; j < b; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << czarny;
            }
            else
            {
                cout << bialy;
            }
        }
        cout << endl;
    }
}

void choinka(int wysokosc)
{
    srand(time(NULL));
    char znak = '*', spacja = ' ';
    HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hConsole, 10);
    for (int i = 0; i < wysokosc; i++)
    {
        for (int j = 0; j < wysokosc - i; j++)
        {
            cout << spacja;
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j == 0 || j == 2 * i)
            {
                SetConsoleTextAttribute(hConsole, 14);
                cout << znak;
            }
            else if (i == wysokosc - 1)
            {
                SetConsoleTextAttribute(hConsole, rand() % 15 + 1);
                cout << znak;
            }
            else
            {
                cout << znak;
            }
        }
        cout << endl;
    }
}
int main()
{
    // char napis[] = "Ala ma kota";
    // na_duze(napis);
    // na_male(napis);
    // szyfr_cezara(napis, 3);
    // for (char t = ' '; t <= '~'; t++)
    // {
    //     cout << t << '-' << (int)t << endl;
    // }
    // rysuj_prostokat(5, 9);
    // cout << endl;
    // rys_prost_rekurencja(9, 9);
    // cout << endl;
    // pusty_prost(19, 19);
    // prostokat(10, 10);
    // szachownica(10, 10);
    choinka(10);
    return 0;
}