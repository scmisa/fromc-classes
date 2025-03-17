#include <iostream>
#include <vector>
#include "Wektor.h"

physics::Wektor::Wektor(int sx, int sy, int ex, int ey) : startX(sx), startY(sy), endX(ex), endY(ey) {};

void physics::Wektor::setStart(int sx, int sy) {
	startX = sx;
	startY = sy;
}
void physics::Wektor::setStart(int sx) { startX = sx; }  // Change only X
void physics::Wektor::setStartY(int sy) { startY = sy; } // Change only Y

void physics::Wektor::setEnd(int ex, int ey) { endX = ex; endY = ey; }
void physics::Wektor::setEnd(int ex) { endX = ex; }  // Change only X
void physics::Wektor::setEndY(int ey) { endY = ey; } // Change only Y

double physics::Wektor::length() const {
	return abs(sqrt(pow(endX - startX, 2) + pow(endY - startY, 2)));
}

void physics::Wektor::print() const {
	std::cout << "Start: (" << startX << ", " << startY << "), End: (" << endX << ", " << endY << ")" << std::endl;
}
