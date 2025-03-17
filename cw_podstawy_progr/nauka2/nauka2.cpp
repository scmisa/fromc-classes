#include <iostream>
#include <string>

using namespace std;

class ksiazka
{
	string tytul;
	string autor;
	int rok_wydania;
public:
	void setTytul(string tytul)
	{
		this->tytul = tytul;
	}
	void setAutor(string autor)
	{
		this->autor = autor;
	}
	void setRok_wydania(int rok_wydania)
	{
		this->rok_wydania = rok_wydania;
	}
	void print()
	{
		cout << "Tytul: " << tytul << ", autor: " << autor << ", rok wydania: " << rok_wydania << endl;
	};
};

class student
{
	string imie;
	string nazwisko;
	int nr_indeksu;
public:
	void setImie(string imie)
	{
		if (imie.length() < 3)
		{
			throw exception("Imie musi miec przynajmniej 3 znaki");
		}
		else {
			this->imie = imie;
		}
	}

	void setNazwisko(string nazwisko)
	{
		if (nazwisko.length() < 3)
		{
			cout << "Imie musi miec przynajmniej 3 znaki" << endl;
			return;
		}
		else {
			this->nazwisko = nazwisko;
		}
	}
	void setNr_indeksu(int nr_indeksu)
	{
		this->nr_indeksu = nr_indeksu;
	}
	void print()
	{
		cout << "Imie: " << imie << ", nazwisko: " << nazwisko << ", nr indeksu: " << nr_indeksu << endl;
	};
};



int main()
{
	ksiazka _quo_vadis;
	_quo_vadis.setTytul("Quo Vadis");
	_quo_vadis.setAutor("Henryk Sienkiewicz");
	_quo_vadis.setRok_wydania(1896);
	student _s1;
	try {
		_s1.setImie("Jan");
	}
	catch(exception){
		cout << "Blad" << endl;
		
	}
	_s1.setNazwisko("Kowalski");
	_s1.setNr_indeksu(12345);

	_quo_vadis.print();
	_s1.print();

}