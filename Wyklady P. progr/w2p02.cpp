#include <iostream>

using namespace std;

int main(){
    int nr;
    cin >> nr;
    switch (nr)
    {
    case 1:
        cout << "Niedziela";
        break;
    case 2:
        cout << "Poniedzialek";
        break;
    case 3:
        cout << "Wtorek";
        break;
    case 4:
        cout << "Sroda";
        break;
    case 5:
        cout << "Czwartek";
        break;
    case 6:
        cout << "Piatek";
        break;
    case 7:
        cout << "Sobota";
        break;
    default:
        cout << "To nie jest numer dnia tygodnia!" << endl;
        break;
    }
    return 0;
}