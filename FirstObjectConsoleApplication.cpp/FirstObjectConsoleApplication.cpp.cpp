#include <iostream>
using namespace std;


/*
Zdefiniuj klase opisujac prostokat. Mozliwosci klasy:
* konstruktory
* metoda która zwórci obwód prostokata
* metoda która pole prostokata
* metodê która pokaze informacje o prostokacie.

Napisz program który zaprezentuje mozliwoœci obiektu na podstawie tej klasy.
*/


class Point
{
private:
	int x;
	int y;
	int z;

public:
	Point()
	{
		x = 3;
		y = 7;
		z = 10;
	}

	Point(int xx)
	{
		x = xx;
		y = 7;
		z = 10;
	}

	Point(int xx, int yy, int zz)
	{
		x = xx;
		y = yy;
		z = zz;
	}

	void SetX(int value)
	{
		
		if (value >= 0)
			x = value;
		else
		{
			
		}
	}

	int GetX()
	{

		return x;
	}

	double DistanceFromCenter()
	{
		double distance;
		distance = sqrt(x * x + y * y + z * z);
		return distance;
	}
};


class Rectangle
{
private:
	float lenght;
	float height;
public:
	Rectangle(float l = 1, float h = 1)
	{
		lenght = l;
		height = h;
	}



	float getArea() {
		return lenght * height;
	}

	float getPerimeter() {
		return lenght * 2 + height * 2;
	}

	void getInfo() {

		cout << "Area: " << getArea() << endl;
		cout << "Perimeter: " << getPerimeter() << endl;
		cout << "Height: " << height << endl;
		cout << "Lenght: " << lenght << endl;
	}
};


/*
ZADANIE
Zdefiniuj klase opisujace konto bankowe. Mozliwosci klasy:
* konstruktory
* metoda która dokona wplaty na konto
* metoda która wyplaty z konta
* metoda która wykona przelew na inne konto
* metodê która poka¿e informacje o koncie.

Napisz program który zaprezentuje mzliwoœci obiektu na podstawie tej klasy.
*/


class kontoBankowe
{
private:
	string numerKonta;
	string wlasciciel;
	double stanKonta;
public:
	
	kontoBankowe(string numerKonta, string wlasciciel, double stanNaPoczatku = 0.00)
	{
		this->wlasciciel = wlasciciel;
		stanKonta = stanNaPoczatku;

	}
	void Deposit(double sum)
	{
		stanKonta += sum;
	}

	void wycofano(double sum) {
		if (stanKonta >= sum) {
			stanKonta -= sum;
			cout << "Wycofany: " << sum << " PLN." << endl;
		}
		else {
			cout << "Na Twoim koncie nie ma wystarczaj¹cych œrodków." << endl;
		}
	}

	void
		Transfer(double sum, string kontoDocelowe)
	{
		if (stanKonta >= sum)
		{
			stanKonta -= sum;
			cout << "Fundusze zosta³u przes³ane na konto: " << kontoDocelowe << " in a sum of: " << sum << " PLN." << endl;

		}
		else
		{
			cout << "Niewystarczaj¹ce œrodki na koncie" << endl;
		}

	}

	void ShowInfo()
	{
		cout << "Numer konta: " << numerKonta << endl;
		cout << "w³aœciciel konta: " << wlasciciel << endl;
		cout << "stan konta: " << stanKonta << endl;
	}
};

void ShowBankInfo()
{
	kontoBankowe account("1234567890", "Jan Kowalski", 1000.0);

	account.ShowInfo();

	account.Deposit(500.0);
	account.ShowInfo();

	account.Deposit(200.0);
	account.ShowInfo();

	account.Transfer(300.0, "0987654321");
	account.ShowInfo();
}

void RectExercises()
{
	Rectangle firstRectangle;
	cout << "Area: " << firstRectangle.getArea() << endl;
	cout << "Perimeter: " << firstRectangle.getPerimeter() << endl;
	firstRectangle.getInfo();
}

void StartRectangle() {
	Rectangle firstRectangle;
	cout << "Area: " << firstRectangle.getArea() << endl;
	cout << "Perimeter: " << firstRectangle.getPerimeter() << endl;
	firstRectangle.getInfo();
}



int main()
{
	setlocale(LC_CTYPE, "Polish");
	ShowBankInfo();
}