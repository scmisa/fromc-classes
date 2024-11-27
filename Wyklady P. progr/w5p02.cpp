#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
    srand(static_cast<unsigned int>(time(0)));

    // Create an array of numbers from 1 to 49
    int numbers[49];
    for (int i = 0; i < 49; ++i)
    {
        numbers[i] = i + 1;
    }

    // Shuffle the array using Fisher-Yates algorithm
    for (int i = 48; i > 0; --i)
    {
        int j = rand() % (i + 1);
        swap(numbers[i], numbers[j]);
    }

    // Select the first 7 numbers from the shuffled array
    cout << "Random lottery numbers: ";
    for (int i = 0; i < 7; ++i)
    {
        cout << numbers[i] << "\t";
    }
    cout << endl;

    return 0;
}