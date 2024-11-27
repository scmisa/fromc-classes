#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;

    if (a + b > c && a + c > b && b + c > a)
    {
        cout << "Tak (prostokatny)";
    }
    else
    {
        cout << "Nie (dowolny)";
    }
    cout << endl;
    if (a * a + b * b == c * c && a * a + c * c == b * b && b * b + c * c == a * a)
    {
        cout << "Tak (prostokatny)";
    }
    else
    {
        cout << "Nie (dowolny)";
    }
    return 0;
}