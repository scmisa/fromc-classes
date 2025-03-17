#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

class Numbers
{
	int a, b, c;
public:
	Numbers()
	{
		a = rand() % 10;
		b = rand() % 10;
		c = a % b;
	};
	~Numbers()
	{
		cout << "Numbers destructor" << endl;
	};
	int getA()
	{
		return a;
	};
	int getB()
	{
		return b;
	};
	int getC()
	{
		return c;
	};
};

class PasswordGenerator
{
	Numbers numbers;
public:
	PasswordGenerator()
	{
		cout << "PasswordGenerator constructor" << endl;
	};
	void generatePass() {
		srand(time(NULL));
		string new_pass(10, ' '); // Initialize new_pass with size 10
		for (int i = 0; i < 10; i++) {
			char character = 'a';
			character = character + numbers.getC();
			new_pass[i] = character;

		}
	}
};
int main()
{
	PasswordGenerator* passwordGenerator = new PasswordGenerator();
	passwordGenerator->generatePass();
	return 0;
}
