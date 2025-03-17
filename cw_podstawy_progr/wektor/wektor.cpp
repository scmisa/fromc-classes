#include <iostream>
#include <cmath>
#include <time.h>
#include <vector>

using namespace std;

/// <summary>
/// Vector class with start and end coordinates and methods to calculate length and print the vector.
/// </summary>
/// 
/// <remarks>
/// The class has overloaded setters to update the coordinates separately.
/// </remarks>
/// 
/// <example>
/// Wektor v1(1, -2, 3, 4);
/// v1.print();
/// v1.setStart(5, 2);
/// v1.setEnd(-7, 5);
/// v1.print();
/// </example>


class Wektor {
	/// <summary>
	/// Start and End of 2D vector.
	/// </summary>
	int startX, startY, endX, endY;

public:
	Wektor(int sx = 0, int sy = 0, int ex = 0, int ey = 0)
		: startX(sx), startY(sy), endX(ex), endY(ey) {}

	// Overloaded setters: full set or single coordinate update
	void setStart(int sx, int sy) { startX = sx; startY = sy; }
	void setStart(int sx) { startX = sx; }  // Change only X
	void setStartY(int sy) { startY = sy; } // Change only Y

	void setEnd(int ex, int ey) { endX = ex; endY = ey; }
	void setEnd(int ex) { endX = ex; }  // Change only X
	void setEndY(int ey) { endY = ey; } // Change only Y

	/// <summary>
	/// A method to calculate the length of the vector.
	/// </summary>
	/// <returns>A calculated variable</returns>
	double length() const {
		return abs(sqrt(pow(endX - startX, 2) + pow(endY - startY, 2)));
	}

	/// <summary>
	///		A function that prints the vector coordinates and its calculated length.
	/// </summary>
	void print() const {
		cout << "Start: (" << startX << "," << startY << ") "
			<< "End: (" << endX << "," << endY << ") "
			<< "Length: " << length() << endl;
	}
};

int main() {
	srand(time(nullptr));

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

	Wektor v2(1, 2, 3, 4);

	return 0;
}