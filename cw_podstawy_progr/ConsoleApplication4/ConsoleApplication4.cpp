#include <iostream>

using namespace std;

class Point
{
public:
    int X;
    int Y;
};

class Player
{
    string nick;
    int level;
	Point* location;
public:
	Player()
	{
		cout << "Player created" << endl;
		this->nick = "Player";
		this->level = 1;
		this->location = new Point();
		this->location->X = 0;
		this->location->Y = 0;
	}
	Player(string myNick, int myLevel, int X, int Y)
	{
		cout << "Create with parameters" << endl;
		this->nick = myNick;
		this->level = myLevel;
		this->location = new Point();
		this->location->X = X;
		this->location->Y = Y;
	}
	Player(const Player& myPlayer)
	{
		cout << "Copy constructor" << endl;
		this->nick = myPlayer.nick;
		this->level = myPlayer.level;
		this->location = new Point();
		this->location->X = myPlayer.location->X;
		this->location->Y = myPlayer.location->Y;
	}
	void Print()
	{
		cout << "Nick: " << this->nick << endl;
		cout << "Level: " << this->level << endl;
		cout << "Location: " << this->location->X << " " << this->location->Y << endl;
	}
};

int main()
{
	Player player();
	Player player1("Player1", 2, 1, 1);
	Player player2 = player1;
	player1.Print();
	cout << endl;
	player2.Print();
	
}
