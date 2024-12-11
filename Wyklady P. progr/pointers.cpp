#include <iostream>

using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

float average(int *arr, int n)
{
    float sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    return sum / n;
}

int main()
{
    int a = 10, b = 20;
    cout << "Before swap: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "After swap: " << a << " " << b << endl;

    int x = 30, y = 40;
    average(&x, &y);
    cout << "After swap: " << x << " " << y << endl;
    return 0;
}