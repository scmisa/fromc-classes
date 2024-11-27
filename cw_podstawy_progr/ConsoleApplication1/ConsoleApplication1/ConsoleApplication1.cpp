
#include <iostream>
#include <time.h>
#include <math.h>
#include <cstdlib>
using namespace std;

int main()
{
//Student database system
/*
	- zapis/odczyt uczniow do/z bazy
	- dodanie usuniecie ucznia do/z bazy
	- zapis, odczyt ocen
	- srednia tych ocen
	- data urodzenia ucznia
	- klasa ucznia
	- aktualizacja
	- zapis/odczyt tych danych do/z pliku
*/
	int a, b, c, d, e, n;
	srand(time(NULL));
	for (int i = 0; i < 10000; i++) {
		n = rand()%5;
		switch (n) {
		case 0:a++; break;
		case 1:b++; break;
		case 2:c++; break;
		case 3:d++; break;
		case 4:e++; break;

		}
	}
	cout << "a= " << a << " ";
	cout << "b= " << b << " ";
	cout << "c= " << c << " ";
	cout << "d= " << d << " ";
	cout << "e= " << e << " ";

	return 0;
}
