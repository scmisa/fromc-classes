#include <iostream>

using namespace std;

string zdanie = "Ala Ma KoTa, A MarYsia mA pSa";

string na_duze(string z)
{
    for (int i = 0; i < z.length(); i++)
    {
        if (z[i] >= 'a' && z[i] <= 'z')
        {
            z[i] -= 32;
        }
    }
    return z;
}

string invert(string z)
{
    for (int i = 0; i < z.length(); i++)
    {
        if (z[i] >= 'a' && z[i] <= 'z')
        {
            z[i] -= 32;
        }
        else if (z[i] >= 'A' && z[i] <= 'Z')
        {
            z[i] += 32;
        }
    }
    return z;
}

string reverse(string z)
{
    string temp = "";
    for (int i = z.length(); i >= 0; i--)
    {
        temp += z[i];
    }
    return temp;
}

string palindrom(string z)
{
    string temp = "";
    for (int i = z.length() - 1; i >= 0; i--)
    {
        temp += z[i];
    }
    if (z == temp)
    {
        return "jest palindromem";
    }
    else
    {
        return "nie jest palindromem";
    }
}

int ilosc_liter(string z, char litera)
{
    int ilosc = 0;
    for (int i = 0; i < z.length(); i++)
    {
        if (z[i] == litera || z[i] == litera - 32 || z[i] == litera + 32)
        {
            ilosc++;
        }
    }
    return ilosc;
}

int ile_znakow(string z)
{
    int ilosc = 0;
    for (int i = 0; i < z.length(); i++)
    {
        if (z[i] != ' ')
        {
            ilosc++;
        }
    }
    return ilosc;
}

void liczba_liter(string z)
{
    for (int i = 0; i < 123; i++)
    {
        if ((char)i >= 'A' && (char)i <= 'Z' || (char)i >= 'a' && (char)i <= 'z')
            cout << "Ilosc liter " << (char)i << " w zdaniu: " << ilosc_liter(z, (char)i) << endl;
    }
}

void remove_letter(string z, char litera)
{
    for (int i = 0; i < z.length(); i++)
    {
        if (z[i] == litera || z[i] == litera - 32 || z[i] == litera + 32)
        {
            z.erase(i, 1);
        }
    }
    cout << z << endl;
}

string cezar(string z, int przesuniecie)
{
    for (int i = 0; z[i] != '\0'; i++)
    {
        if (z[i] >= 'A' && z[i] <= 'Z')
        {
            z[i] = (z[i] - 'A' + przesuniecie) % 26 + 'A';
        }
        else if (z[i] >= 'a' && z[i] <= 'z')
        {
            z[i] = (z[i] - 'a' + przesuniecie) % 26 + 'a';
        }
    }
    return z;
}

int main()
{
    // string zdanie1;

    // cout << reverse(zdanie) << endl;

    // cout << "Podaj slowo: ";
    // cin >> zdanie1;
    // cout << "Slowo " << zdanie1 << " " << palindrom(zdanie1) << " " << endl;

    // cout << "Ilosc liter 'a' w zdaniu: " << ilosc_liter(zdanie, 'a') << endl;
    // cout << "Ilosc znakow w zdaniu: " << ile_znakow(zdanie) << endl;

    // liczba_liter(zdanie);

    // remove_letter(zdanie, 'a');

    cout << cezar(zdanie, 10);
    return 0;
}