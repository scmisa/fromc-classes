#pragma once
#ifndef WEKTOR_H
#define WEKTOR_H

/// <summary>
/// Namespace physics contains classes and functions for physics calculations.
/// </summary>
namespace physics {

	/// <summary>
	/// Wektor class represents a vector in 2D space. It has two points: start and end.
	/// And method to calculate its length.
	/// </summary>
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

		/// <summary>
		/// Method length calculates the length of the vector.
		/// </summary>
		/// <returns>Returns a variable type double</returns>
		double length() const;

		/// <summary>
		/// Print method prints the start and end points of the vector.
		/// </summary>
		void print() const;
	};
}

#endif // !WEKTOR_H