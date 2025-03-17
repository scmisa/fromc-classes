#pragma once
#ifndef WEKTOR_H
#define WEKTOR_H

namespace physics {
	class Wektor {
		int startX, startY, endX, endY;

	public:
		Wektor(int sx = 0, int sy = 0, int ex = 0, int ey = 0);
		// Overloaded setters: full set or single coordinate update
		void setStart(int sx, int sy);
		void setStart(int sx);  // Change only X
		void setStartY(int sy); // Change only Y

		void setEnd(int ex, int ey);
		void setEnd(int ex);  // Change only X
		void setEndY(int ey); // Change only Y

		double length() const;
		void print() const;
	};
}

#endif // !WEKTOR_H