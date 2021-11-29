// Zadanie 2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//
// lab2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <time.h >
using namespace std;


int main()
{
	int n, temp;
	float pkt, suma = 0;

	cout << "Podaj ilosc studentow: ", cin >> n;
	temp = n;
	while (true)
	{
		cout << " Podaj ilosc punktow: ", cin >> pkt;
		if (pkt >= 0 && pkt <= 100) {


			suma += pkt;
			n--;
		}
		else continue;
		if (n == 0) break;
	}

	cout << " Suma pkt" << suma << endl;
	cout << "Srednia ilosc pkt: " << suma / temp;

	{
		int liczba, ile_d = 0, ile_u = 0, suma_d = 0, suma_u = 0;
		for (int i = 0; i < 10; i++)
		{
			cout << " Podaj liczbe: ", cin >> liczba;
			if (liczba >= 0) {
				ile_d++; suma_d += liczba;
			}
			else {
				ile_u++; suma_u += liczba;
			}
		}
		cout << "Ilosc liczb dodatnich: " << ile_d << ", suma liczb dodatnich: " << suma_d << endl;
		cout << "Ilosc liczb ujemnych: " << ile_u << ", suma liczb dodatnich: " << suma_u << endl;
		{
			int liczba, n, suma = 0;
			cout << "Podaj n : ", cin >> n;
			if (n > 0) {
				for (int i = 0; i < n; i++)
				{
					cout << " Podaj liczbe: ", cin >> liczba;
					if (liczba % 2 == 0) suma += liczba;
				}
				cout << "Suma: " << suma << endl;
			}
			else cout << "n musi byc liczbna dodatnia\n";
			suma = 0;
			cout << "\nII podejscie\n";
			while (temp > 0)
			{
				for (int i = 0; i < n; i++)
				{
					cout << "podaj liczbe: ", cin >> liczba;
					if (liczba % 2 == 0) suma += liczba;
					temp--;
				}
				cout << "Suma: " << suma << endl;
			}
		}
	}
	{
		int liczba, n, suma = 0;
		cout << "Podaj n: ", cin >> n;
		int temp = n;
		if (n > 0) {
			for (int i = 0; i < n; i++)
			{
				//cout << "Podaj liczbe: ", cin >> liczba;
				liczba = rand() % 56 - 10;
				cout << liczba << " ";
				if (liczba % 2 == 0) suma += liczba;
			}
			cout << " \nSuma: " << suma << endl;
		}
		else cout << "n musi byc liczba dodatnia\n";
	}

}


