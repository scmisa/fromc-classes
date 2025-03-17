#include <iostream>
#include "Osoba.h"

using namespace std;

int main()
{
	Osoba* osoba = new Osoba("Jan", "Kowalski", 25);
	osoba->print();
	delete osoba;
	return 0;
}

