#include <iostream>

using namespace std;

class Point2d
{
private:
	int x;
	int y;
public:
	void setX(int x)
	{
		if (x >= 0) {
			this->x = x;
		}
		else {
			cout << "x musi byc >= 0" << endl;
		}
	}
	void setY(int y)
	{
		if (x >= 0) {
			this->y = y;
		}
		else {
			cout << "y musi byc >= 0" << endl;
		}
	}
	void print()
	{
		cout << "x = " << x << ", y = " << y << endl;
	}
};

int main()
{
	Point2d p1;
	p1.setX(10);
	p1.setY(20);
	p1.print();
	return 0;
}
