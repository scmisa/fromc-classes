#include <iostream>

using namespace std;

class Vector2d
{
	int x, y;
public:
	Vector2d()
	{
		x = 0;
		y = 0;
	};
	Vector2d(int x, int y)
	{
		this->x = x;
		this->y = y;
	};
	~Vector2d()
	{
		cout << "Vector2d destructor" << endl;
	};
	void print()
	{
		cout << "x: " << x << " y: " << y << endl;
	};
};

class Weapon
{
	string name;
	string type;
public:
	Weapon()
	{
		name = "Default";
		type = "Default";
	};
	Weapon(string name, string type)
	{
		this->name = name;
		this->type = type;
	};
	~Weapon()
	{
		cout << "Weapon destructor" << endl;
	};
	void print()
	{
		cout << "Name: " << name << " Type: " << type << endl;
	};
};

class Player
{
	Vector2d* position;
	Weapon* weapon;
public:
	Player()
	{
		position = new Vector2d(0, 0);
		weapon = new Weapon("Default", "Default");
	};
	Player(int x, int y, string n, string t)
	{
		position = new Vector2d(x, y);
		weapon = new Weapon(n, t);
	};
	~Player()
	{
		cout << "Player destructor" << endl;
		delete position;
		delete weapon;
	};
	void getPosition()
	{
		position->print();
	};
	void getWeapon()
	{
		weapon->print();
	}
};

int main()
{
	Player player = Player(1, 2, "Sword", "Melee");
	player.getPosition();
	player.getWeapon();

	return 0;

}
