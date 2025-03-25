#include <iostream>

using namespace std;

class Auto
{
	string marka;
	int rocznik;
public:
	Auto()
	{
		this->marka = "Mercedes";
		this->rocznik = 2020;
	}
	Auto(string m, int r)
	{
		this->marka = m;
		this->rocznik = r;
	}
	Auto(const Auto& myAuto)
	{
		this->marka = myAuto.marka;
		this->rocznik = myAuto.rocznik;
	}

	void print()
	{
		cout << "Marka Samochodu: " << marka << endl;
		cout << "Rocznik: " << rocznik << endl;
	}

};
int main()
{
	string marka;
	int rocznik;

	Auto mercedes;
	mercedes.print();

	Auto fiat("Fiat", 1972);
	fiat.print();

	Auto fiat2(fiat);
	fiat2.print();

	Auto* auta[10]; 
	
	for (int i = 0; i < 10; i++)
	{
		cin >> marka;
		cin >> rocznik;
		auta[i] = new Auto(marka, rocznik);
	}

	for (int i = 0; i < 10; i++)
	{
		auta[i]->print();
	}

	for (int i = 0; i < 10; i++)
	{
		delete auta[i];
	}

}
