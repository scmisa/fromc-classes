#include <iostream>
#include <Windows.h>
#include <time.h>

using namespace std;

class Vektor3d
{
	int x = 0;
	int y = 0;
	int z = 0;
public:
	Vektor3d()
	{
		this->x = x;
		this->y = y;
		this->z = z;
	};
	~Vektor3d()
	{
		cout << "Destruktor" << endl;
		this->x = 0;
		this->y = 0;
		this->z = 0;
		cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
	};
	void setX(int x)
	{
		this->x = x;
	};
	void setY(int y)
	{
		this->y = y;
	};
	void setZ(int z)
	{
		this->z = z;
	};
	int getX()
	{
		return x;
	};
	int getY()
	{
		return y;
	};
	int getZ()
	{
		return z;
	};
	void addX(int x)
	{
		this->x += x;
	};
	void addY(int y)
	{
		this->y += y;
	};
	void addZ(int z)
	{
		this->z += z;
	};
	void subX(int x)
	{
		this->x -= x;
	};
	void subY(int y)
	{
		this->y -= y;
	};
	void subZ(int z)
	{
		this->z -= z;
	};
	void print()
	{
		cout << "x: " << x << ", y: " << y << ", z: " << z << endl;
	};
};

bool AddOrSub()
{
	return rand() % 2;
}

int main()
{
	srand(time(NULL));
	Vektor3d* v = new Vektor3d();
	v->print();
	for (int i = 0; i < 10; i++)
	{
		if (AddOrSub())
		{
			v->addX(1);
			v->addY(1);
			v->addZ(1);
		}
		else
		{
			v->subX(1);
			v->subY(1);
			v->subZ(1);
		}
		v->print();
		Sleep(1000);
		system("cls");
	}
	delete v;
	return 0;
}
