#include <iostream>
#include <cmath>
#include <time.h>

using namespace std;

class Wektor
{
	int startX;
	int startY;
	int endX;
	int endY;

public:
	Wektor()
	{
		this->startX = 0;
		this->startY = 0;
		this->endX = 0;
		this->endY = 0;
	}
	Wektor(int startX, int startY,int endX, int endY)
	{
		this->startX = startX;
		this->startY = startY;
		this->endX = endX;
		this->endY = endY;
	}
	~Wektor()
	{
		cout << "Wektor destroyed" << endl;
	}
	void setStartXY(int startX, int startY)
	{
		this->startX = startX;
		this->startY = startY;
	}
	void setStartX(int startX)
	{
		this->startX = startX;
	}
	void setStartY(int startY)
	{
		this->startY = startY;
	}
	void setEndXY(int endX, int endY)
	{
		this->endX = endX;
		this->endY = endY;
	}
	void setEndX(int endX)
	{
		this->endX = endX;
	}
	void setEndY(int endY)
	{
		this->endY = endY;
	}

	void Length()
	{
		cout << "Length: " << abs(sqrt(pow(endX - startX, 2) + pow(endY - startY, 2))) << endl;
	}
	void print()
	{
		cout << "Start: " << "(" << startX << ";" << startY << ")" << endl;
		cout << "End: " << "(" << endX << ";" << endY << ")" << endl;
	}

};

int main()
{
	/*Wektor v1(1, -2, 3, 4);
	v1.print();
	v1.Length();
	cout << endl;

	v1.setStartX(5);
	v1.setStartY(2);
	v1.setEndX(-7);
	v1.setEndY(5);

	cout << endl;
	v1.print();
	cout << endl;
	v1.Length();*/

	Wektor *v1 = new Wektor[10];
	srand(time(NULL));

	for (int i = 0; i < 10; i++)
	{
		cout << "Wektor " << i + 1 << endl;
		v1[i].setStartXY(rand() % 10, rand() % 10);
		v1[i].setEndXY(rand() % 10, rand() % 10);
		v1[i].print();
		v1[i].Length();
		cout << endl;
	}

}

