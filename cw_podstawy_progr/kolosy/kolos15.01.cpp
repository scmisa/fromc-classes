#include <iostream>
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

void RandFile()
{
    fstream file;
    file.open("kolos15.01.txt", ios::out);
    char znak;
    if (!file.is_open())
    {
        cout << "Error while opening file" << endl;
        return;
    }
    else
    {
        cout << "File opened successfully" << endl;
        for (int i = 0; i < 1501; i++)
        {
            znak = rand() % 126 + 35;
            file << znak;
        }
    }
    file.close();
}

int ReadFile()
{
    fstream file;
    file.open("kolos15.01.txt", ios::in);
    char znak;
    if (!file.is_open())
    {
        cout << "Error while opening file" << endl;
        return -1;
    }
    else
    {
        cout << "File opened successfully" << endl;
        int starCount = 0;
        int digitCount[10] = {0};
        int charCount = 0;
        while (!file.eof())
        {
            file >> znak;

            // cout << znak;

            while (file >> znak)
            {                // Wczytujemy znak po znaku
                charCount++; // Zwiększamy licznik znaków
                if (znak >= '0' && znak <= '9')
                {                             // Sprawdzamy, czy to cyfra
                    digitCount[znak - '0']++; // Zwiększamy licznik dla danej cyfry
                }
                else if (znak == '*')
                {
                    starCount++;
                }
            }

            // Wyświetlenie wyników
            for (int i = 0; i < 10; i++)
            {
                cout << i << " - " << digitCount[i] << endl;
            }
            cout << "\nNumber of '*' characters: " << starCount << endl;
            cout << "Number of characters: " << charCount << endl;
        }
        file.close();
    }
}
void ndLetterToBig(string x)
{
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] != (char)32)
        {
            if (i % 2 == 1)
            {
                cout << (char)toupper(x[i]);
            }
            else
            {
                cout << x[i];
            }
        }
    }
}

int LetterCounter(string x)
{
    int small = 0;
    int big = 0;
    for (int i = 0; i < x.length(); i++)
    {
        if (x[i] != (char)32)
        {
            if (x[i] >= 'a' && x[i] <= 'z')
            {
                small++;
            }
            else if (x[i] >= 'A' && x[i] <= 'Z')
            {
                big++;
            }
        }
    }
    return big;
}

void ReverseString(string x)
{
    for (int i = x.length() - 1; i >= 0; i--)
    {
        // if (x[i] != (char)32)
        // {
        cout << x[i] << x[i];
        // }
    }
}

int main()
{
    srand(time(NULL));
    RandFile();
    cout << ReadFile();

    cout << endl;

    string x = "hELlO World";
    cout << LetterCounter(x);
    ReverseString(x);

    cout << endl;

    ndLetterToBig(x);

    return 0;
}