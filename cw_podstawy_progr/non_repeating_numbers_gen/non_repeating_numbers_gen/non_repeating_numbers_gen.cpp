// non_repeating_numbers_gen.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void shuffleArray(int arr[], int n) {
    for (int i = n - 1; i > 0; --i) {
        int j = rand() % (i + 1);
        swap(arr[i], arr[j]);
    }
}

int main()
{
    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(0)));

    // Define the range of numbers
    int min = 1;
    int max = 100;
    int count = 10; // Number of non-repeating random numbers to generate

    // Create an array with the range of numbers
    int numbers[max - min + 1];
    for (int i = 0; i < max - min + 1; ++i) {
        numbers[i] = min + i;
    }

    // Shuffle the array to get random order
    shuffleArray(numbers, max - min + 1);

    // Output the first 'count' numbers from the shuffled array
    cout << "Non-repeating random numbers: ";
    for (int i = 0; i < count; ++i) {
        cout << numbers[i] << " ";
    }
    cout << endl;

    return 0;
}
