#include <iostream>
#include <time.h>

using namespace std;

char plansza[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void rysujPlansze()
{
    cout << "Plansza gry" << endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << plansza[i][j] << " ";
        }
        cout << endl;
    }
}

void ruchGracza1()
{
    int pole;
    cout << "Gracz 1, podaj pole: ";
    cin >> pole;

    char symbol = 'X';
    switch (pole)
    {
    case 1:
        plansza[0][0] = symbol;
        break;
    case 2:
        plansza[0][1] = symbol;
        break;
    case 3:
        plansza[0][2] = symbol;
        break;
    case 4:
        plansza[1][0] = symbol;
        break;
    case 5:
        plansza[1][1] = symbol;
        break;
    case 6:
        plansza[1][2] = symbol;
        break;
    case 7:
        plansza[2][0] = symbol;
        break;
    case 8:
        plansza[2][1] = symbol;
        break;
    case 9:
        plansza[2][2] = symbol;
        break;
    default:
        cout << "Nieprawidłowe pole!" << endl;
        break;
    }
}
void ruchKomputera()
{
    srand(time(NULL));
    int pole = rand() % 9 + 1;

    char symbol = 'O';
    switch (pole)
    {
    case 1:
        plansza[0][0] = symbol;
        break;
    case 2:
        plansza[0][1] = symbol;
        break;
    case 3:
        plansza[0][2] = symbol;
        break;
    case 4:
        plansza[1][0] = symbol;
        break;
    case 5:
        plansza[1][1] = symbol;
        break;
    case 6:
        plansza[1][2] = symbol;
        break;
    case 7:
        plansza[2][0] = symbol;
        break;
    case 8:
        plansza[2][1] = symbol;
        break;
    case 9:
        plansza[2][2] = symbol;
        break;
    default:
        cout << "Nieprawidłowe pole!" << endl;
        break;
    }
}
int main()
{
    cout << "Witaj w grze kółko i krzyżyk!" << endl;
    cout << "Gracz 1: X" << endl;
    cout << "Komputer: O" << endl;
    cout << "Gracz 1 zaczyna!" << endl;
    rysujPlansze();
    for (int i = 0; i < 9; i++)
    {
        ruchGracza1();
        rysujPlansze();
        if (i >= 4)
        {
            // sprawdzamy czy gracz 1 wygrał
            if ((plansza[0][0] == 'X' && plansza[0][1] == 'X' && plansza[0][2] == 'X') ||
                (plansza[1][0] == 'X' && plansza[1][1] == 'X' && plansza[1][2] == 'X') ||
                (plansza[2][0] == 'X' && plansza[2][1] == 'X' && plansza[2][2] == 'X') ||
                (plansza[0][0] == 'X' && plansza[1][0] == 'X' && plansza[2][0] == 'X') ||
                (plansza[0][1] == 'X' && plansza[1][1] == 'X' && plansza[2][1] == 'X') ||
                (plansza[0][2] == 'X' && plansza[1][2] == 'X' && plansza[2][2] == 'X') ||
                (plansza[0][0] == 'X' && plansza[1][1] == 'X' && plansza[2][2] == 'X') ||
                (plansza[0][2] == 'X' && plansza[1][1] == 'X' && plansza[2][0] == 'X'))
            {
                cout << "Gracz 1 wygrał!" << endl;
                break;
            }
        }
        if (i < 8)
        {
            ruchKomputera();
            rysujPlansze();
            if (i >= 4)
            {
                // sprawdzamy czy komputer wygrał
                if ((plansza[0][0] == 'O' && plansza[0][1] == 'O' && plansza[0][2] == 'O') ||
                    (plansza[1][0] == 'O' && plansza[1][1] == 'O' && plansza[1][2] == 'O') ||
                    (plansza[2][0] == 'O' && plansza[2][1] == 'O' && plansza[2][2] == 'O') ||
                    (plansza[0][0] == 'O' && plansza[1][0] == 'O' && plansza[2][0] == 'O') ||
                    (plansza[0][1] == 'O' && plansza[1][1] == 'O' && plansza[2][1] == 'O') ||
                    (plansza[0][2] == 'O' && plansza[1][2] == 'O' && plansza[2][2] == 'O') ||
                    (plansza[0][0] == 'O' && plansza[1][1] == 'O' && plansza[2][2] == 'O') ||
                    (plansza[0][2] == 'O' && plansza[1][1] == 'O' && plansza[2][0] == 'O'))
                {
                    cout << "Komputer wygrał!" << endl;
                    break;
                }
            }
        }
        else
        {
            cout << "Remis!" << endl;
        }
    }
    return 0;
}