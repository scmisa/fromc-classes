#include <iostream>

using namespace std;

float srednia(float a, float b, float c, float d, float e)
{
    return (a + b + c + d + e) / 5;
}

void number_reverse(int number)
{
    int reversed = 0;
    while (number != 0)
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    cout << reversed;
}

int palindrome(int number)
{
    int reversed = 0;
    int temp = number;
    while (number != 0)
    {
        reversed = reversed * 10 + number % 10;
        number /= 10;
    }
    if (temp == reversed)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    cout << "Podaj 5 liczb: ";
    cout << srednia(4, 3, 8, 2, 6);
    cout << "\nPodaj liczbe do odwrocenia: ";
    number_reverse(12345);
    cout << "\nPodaj liczbe do sprawdzenia czy jest palindromem: ";
    cout << palindrome(101);
    return 0;
}