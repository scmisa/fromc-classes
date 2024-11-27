#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main()
{
    srand(time(NULL));
    int n;
    cout << "n= ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cout << rand() % 100 << endl;
    }

    return 0;
}