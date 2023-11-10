#include <iostream>
#include <cmath>

using namespace std;
/*
int zad1()
{
	const double pi = 3.14; 
	double r;

	cout << "Podaj r:";
	cin >> r;
	
	if (r<=0)
	{
		cout << "blad, promien mniejszy od 0";
			return 1;
	}

	double pole = pi * pow(r, 2);

	cout << "pole kola o promieniu wynosi";
	return 0; 
}

int zad2()
{
	int liczba; 
	cout << "Podaj liczbe";
	cin >> liczba <<endl;

	if (liczba % 5 == 0)
	{
		cout << liczba << "jest podzielna przez 5";
	}
		else
		{
		cout << "liczba nie jest podzielna przez 5";
		}
	
	return 0; 
}

int zad3()
{
	int licz;
	cout << "Podaj liczbe sprawdzana"<< endl;
	cin >> licz;
	
	if (licz >= -78 && licz <= 12);
	{
		cout << licz << " nalezy do przedzialu";
	}

		else
		{
			cout << licz << "nie nalezy do przedzialu";
		}
return;0
}
*/
const int maxliczby = 5;
int zad4()
{
	int liczb;
	int sumaujemnych = 0;
	cout << "Podaj liczbe" << maxliczby << "liczba(a)" << endl;

	for (int i = 0; i < maxliczby; i++)
	{
		cout << "liczba" << i + 1 << ":";
		cin >> liczb;
		
		if (liczb < 0)
		{
			sumaujemnych += liczb;

		}
		cout << "suma liczb ujemnych wynosi" << sumaujemnych;
	}
	return 0;
}
