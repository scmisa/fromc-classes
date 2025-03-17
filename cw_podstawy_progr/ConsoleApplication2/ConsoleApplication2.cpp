// klasa generujaca hasla (parametr dlugosci (default:10) )
#include <iostream>

using namespace std;

class Generator
{
    int length;
public:
    Generator() { length = 10; }
    Generator(int s) { length = s; }
    string Password()
    {
        string new_pass;
        for (int i = 0; i < length; i++)
        {
            char character = 'a';
            character = character + rand() % 15;
            new_pass[i] = character;
        }
        cout << new_pass;
        return new_pass;
    }
};

int main()
{
    Generator newGenerate;
    newGenerate.Password();
    return 0;
}