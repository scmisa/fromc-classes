#include <iostream>
#include <Windows.h>

using namespace std;

class Random
{
public:
	Random()
	{
		srand(time(NULL));
	};
	int nextInt()
	{
		return rand();
	};
	double nextDouble()
	{
		return (double)rand() / RAND_MAX;
	};
};
class BubbleSort
{
public:
	void doubleSort(double tab[], int n)
	{
		for (int i = 0; i < n - 1; i++)
		{
			for (int j = 0; j < n - i - 1; j++)
			{
				if (tab[j] > tab[j + 1])
				{
					double temp = tab[j];
					tab[j] = tab[j + 1];
					tab[j + 1] = temp;
				}
			}
		}
	};
	void print(double tab[], int n)
	{
		cout << "Po Sortowaniu: " << endl;
		for (int i = 0; i < n; i++)
		{
			cout << i << "|" << tab[i] << endl;
		}
		cout << endl;
	};
};

int main()
{	
	double tab[10];
	Random random;
	for (int i = 0; i < 10; i++)
	{
		tab[i] = random.nextDouble();
	}

	cout << "Przed Sortowaniem: " << endl;
	for (int i = 0; i < 10; i++)
	{
		cout << i << "|" << tab[i] << endl;
	}
	BubbleSort bubbleSort;
	bubbleSort.doubleSort(tab, 10);
	bubbleSort.print(tab, 10);

}
