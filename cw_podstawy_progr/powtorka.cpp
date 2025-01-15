#include <iostream>
#include <string>
#include <fstream>
#include <cstdlib>
#include <time.h>

using namespace std;

void generateFile(string filename)
{
    fstream file;
    char znak;
    if (file.is_open() == false)
    {
        file.open(filename, ios::out);
        srand(time(NULL));
        for (int i = 0; i < 10000; i++)
        {
            char znak = (char)(rand() % 26 + 65);
            file << znak << " ";
        }
    }
    {
    }
    file.close();
}

int main()
{
    generateFile("randomchar.txt");
    return 0;
}