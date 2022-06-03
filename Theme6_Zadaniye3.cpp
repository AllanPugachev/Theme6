#include <iostream>
#include <conio.h>
#include <clocale>
#include <time.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian_Russia.1251");
	int n, k = 1, x;
	int a[3][4];
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 4; ++j)
			cin >> a[i][j];
	x = a[1][1];
	for (int i = 0; i < 3; ++i)
		for (int j = 0; j < 4; ++j)
			if (a[i][j] < x)
			{
				x = a[i][j];
				k = j;
			}
	if (k!=2)
		for (int j = 0; j < 4; ++j)
		{
			n = a[k][j];
			a[k][j] = a[2][j];
			a[2][j] = n;
		}
	cout << endl;
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
			cout << a[i][j] << " ";
		cout << endl;
	}
	_getch();
}