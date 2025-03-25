#include <iostream>

using namespace std;

class Product
{
private:
	string nazwa;
	int ilosc;
	int cena;
public:
	Product()
	{
		nazwa = "";
		ilosc = 0;
		cena = 0;
	}
	Product(string naz, int cen, int il)
	{
		this->nazwa = naz;
		this->ilosc = il;
		this->cena = cen;
	}
	Product(const Product& myProduct)
	{
		this->nazwa = myProduct.nazwa;
		this->ilosc = myProduct.ilosc;
		this->cena = myProduct.cena;
	}

	~Product()
	{
		cout << "Product: \t" << nazwa << "\tzostal zniczczony" << endl;
	}
	void Wyswietl()
	{
		cout << "nazwa: " << nazwa << "\tilosc: " << ilosc << "\tcena: " << cena << endl;
	}

};


int main()
{
	Product ser("Ser", 10, 10);
	ser.Wyswietl();

	Product ser2(ser);
	ser2.Wyswietl();
}