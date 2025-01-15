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

void funkcja(int &z);

float dyn_tab()
{
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;
    int *arr = new int[n];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    float avg = average(arr, n);
    delete[] arr;
    return avg;
}
void avg_tab(float avg)
{
    cout << "Average of the elements of the array is: " << avg << endl;
}

int main()
{
    int a = 10, b = 20, z = 10;
    cout << "Before swap: " << a << " " << b << endl;
    swap(&a, &b);
    cout << "After swap: " << a << " " << b << endl;

    int x = 30, y = 40;
    average(&x, y);
    cout << "After swap: " << x << " " << y << endl;

    cout << z << endl;

    cout << "Przeslanie referencja";
    funkcja(z);

    float avg = dyn_tab();
    avg_tab(avg);
    return 0;
}

void funkcja(int &z)
{
    z++;
    cout << "Przeslano" << z << endl;
}