#include <iostream>

using namespace std;

int main()
{
    int tab[3][2] = {{1, 2}, {4, 5}, {7, 8}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            cout << tab[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}