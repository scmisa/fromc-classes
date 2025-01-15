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

string vineger(string &z, string klucz)
{
    for (int i = 0; z[i] != '\0'; i++)
    {
        if (z[i] >= 'A' && z[i] <= 'Z')
        {
            z[i] = (z[i] - 'A' + klucz[i % klucz.length()] - 'A') % 26 + 'A';
        }
        else if (z[i] >= 'a' && z[i] <= 'z')
        {
            z[i] = (z[i] - 'a' + klucz[i % klucz.length()] - 'A') % 26 + 'a';
        }
    }
    return z;
}

string devineger(string &z, string klucz)
{
#define KEY klucz
#define KEY_LEN klucz.length()
#define KEY_CHAR(i) klucz[i % KEY_LEN]
#define KEY_CHAR_VAL(i) (KEY_CHAR(i) >= 'A' && KEY_CHAR(i) <= 'Z' ? KEY_CHAR(i) - 'A' : KEY_CHAR(i) - 'a')
#define KEY_CHAR_VAL_UPPER(i) (KEY_CHAR(i) - 'A')
#define KEY_CHAR_VAL_LOWER(i) (KEY_CHAR(i) - 'a')
#define CHAR_VAL_UPPER(c) (c - 'A')
#define CHAR_VAL_LOWER(c) (c - 'a')
#define CHAR_VAL(c) (c >= 'A' && c <= 'Z' ? CHAR_VAL_UPPER(c) : CHAR_VAL_LOWER(c))
#define CHAR_VAL_MOD(c) (c >= 'A' && c <= 'Z' ? CHAR_VAL_UPPER(c) % 26 : CHAR_VAL_LOWER(c) % 26)
#define CHAR_VAL_MOD_KEY(i, c) (c >= 'A' && c <= 'Z' ? CHAR_VAL_UPPER(c) - KEY_CHAR_VAL_UPPER(i) : CHAR_VAL_LOWER(c) - KEY_CHAR_VAL_LOWER(i))
#define CHAR_VAL_MOD_KEY_POS(i, c) (CHAR_VAL_MOD_KEY(i, c) >= 0 ? CHAR_VAL_MOD_KEY(i, c) : CHAR_VAL_MOD_KEY(i, c) + 26)
#define CHAR_VAL_MOD_KEY_NEG(i, c) (CHAR_VAL_MOD_KEY(i, c) < 0 ? CHAR_VAL_MOD_KEY(i, c) : CHAR_VAL_MOD_KEY(i, c) - 26)
#define CHAR_VAL_MOD_KEY_POS_MOD(i, c) (CHAR_VAL_MOD_KEY_POS(i, c) % 26)
#define CHAR_VAL_MOD_KEY_NEG_MOD(i, c) (CHAR_VAL_MOD_KEY_NEG(i, c) % 26)
#define CHAR_VAL_MOD_KEY_POS_MOD_CHAR(i, c) (CHAR_VAL_MOD_KEY_POS_MOD(i, c) + 'A')
#define CHAR_VAL_MOD_KEY_NEG_MOD_CHAR(i, c) (CHAR_VAL_MOD_KEY_NEG_MOD(i, c) + 'A')
#define CHAR_VAL_MOD_KEY_POS_MOD_CHAR_LOWER(i, c) (CHAR_VAL_MOD_KEY_POS_MOD(i, c) + 'a')
#define CHAR_VAL_MOD_KEY_NEG_MOD_CHAR_LOWER(i, c) (CHAR_VAL_MOD_KEY_NEG_MOD(i, c) + 'a')
#define CHAR_VAL_MOD_KEY_POS_MOD_CHAR_FINAL(i, c) (c >= 'A' && c <= 'Z' ? CHAR_VAL_MOD_KEY_POS_MOD_CHAR(i, c) : CHAR_VAL_MOD_KEY_POS_MOD_CHAR_LOWER(i, c))

    // decrypt vineger

    for (int i = 0; z[i] != '\0'; i++)
    {
        if (z[i] >= 'A' && z[i] <= 'Z')
        {
            z[i] = CHAR_VAL_MOD_KEY_POS_MOD_CHAR_FINAL(i, z[i]);
        }
        else if (z[i] >= 'a' && z[i] <= 'z')
        {
            z[i] = CHAR_VAL_MOD_KEY_POS_MOD_CHAR_FINAL(i, z[i]);
        }
    }
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
    cout << zdanie << endl;
    cout << cezar(zdanie, 10);
    cout << endl;
    string zaszyfrowane = vineger(zdanie, "pomidor");
    cout << zaszyfrowane;
    cout << endl;
    cout << devineger(zaszyfrowane, "pomidor");
    return 0;
}