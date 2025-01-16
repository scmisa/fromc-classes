#include <iostream>
#include <fstream>
#include <string>

using namespace std;

bool czyPierwsza(int x)
{
    if (x < 2)
    {
        return false;
    }
    for (int i = 2; i * i <= x; i++)
    {
        if (x % i == 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    cout << czyPierwsza(9);
    return 0;
}