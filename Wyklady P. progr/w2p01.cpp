#include <iostream>
#include <cmath>

using namespace std;

int main()
{

    double a, b, c;
    double delta = b * b - 4 * a * c;

    cout << "a: " << endl;
    cin >> a;
    cout << "b: " << endl;
    cin >> b;
    cout << "c: " << endl;
    cin >> c;

    if (delta > 0)
    {
        double x1 = (-b - sqrt(delta)) / (2 * a);
        double x2 = (-b + sqrt(delta)) / (2 * a);

        cout << "x1= " << x1 << endl;
        cout << "x2= " << x2 << endl;
    }
    else if (delta == 0)
    {

        double x0 = -b / (2 * a);
        cout << "x0= " << x0;
    }
    else
    {
        cout << "Brak Rozwiazan" << endl;
    }
    return 0;
}