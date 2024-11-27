#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

int main()
{
    int tab[100];
    int x, n;
    while (1)
    {
        cout << "x= ";
        cin >> x;
        if (x < 0)
        {
            break;
        }
        tab[n] = x;
        n++;
    }
    for (int i = n - 1; i >= 0; i--)
    {
        cout << tab[i] << " ";
    }
    return 0;
}