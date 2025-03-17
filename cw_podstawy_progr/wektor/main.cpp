#include <iostream>
#include <time.h>
#include <vector>
#include "Wektor.h"

using namespace std;
using namespace physics;

int main() {
	srand(NULL);

	// Single vector
	Wektor v1(1, -2, 3, 4);
	v1.print();

	v1.setStart(5, 2);
	v1.setEnd(-7, 5);
	v1.print();

	cout << endl << endl;

	// Vector table
	cout << "Vector Table of 10 random vectors and their lenght:" << endl;
	vector<Wektor> vectors(10);
	for (int i = 0; i < 10; i++) {
		vectors[i].setStart(rand() % 10, rand() % 10);
		vectors[i].setEnd(rand() % 10, rand() % 10);
		cout << "Wektor " << i + 1 << ": ";
		vectors[i].print();
	}

	return 0;
}