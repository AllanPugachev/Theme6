#include <iostream>
#include <conio.h>
#include <clocale>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
void vvod(int a[], int n);
void vivod(int a[], int n);
void zamena(int a[], int n);
int main()
{
	setlocale(LC_ALL, "Russian_Russia.1251");
	int n,k;
	int a[20];
	cout << "Vvedite kolichestvo elementov massiva a"; cin >> n;
	do
	{
		cout << "1. Vvod massiva celbIh chisel" << endl;
		cout << "2. VbIvod massiva v stroku" << endl;
		cout << "3. VbIchisleniye srednyego arifmeticheskogo znacheniye elementov massiva i zamena polozhitelnih \n   elementov massiva celoy chastyu ot srednyego arifmeticheskogo znacheniya" << endl;
		cout << "4. Konec rabotbI" << endl;
		cout << "Ookazhite nomer poonkta menu "; cin >> k;
		switch (k)
		{
		case 1: vvod(a, n); break;
		case 2: vivod(a, n); break;
		case 3: zamena(a, n); break;
		case 4: cout << "Konec rabotbI" << endl; break;
		default: cout << "Takogo poonkta net" << endl;
		}
		if (k == 4) break;
	} while (true);
	_getch();
}
void vvod(int a[], int n)
{
	cout << "Vvedite elementbI massiva" << endl;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}
void vivod(int a[], int n)
{
	cout << "ElementbI massiva a:" << endl;
	for (int i = 0; i < n; ++i)
		cout << a[i] << " ";
	cout << endl;
}
void zamena(int a[], int n)
{
	int b = 0;
	for (int i = 0; i < n; ++i)
		b += a[i];
	b /= n;
	for (int i = 0; i < n; ++i)
		if (a[i] > 0)
			a[i] = b;
}