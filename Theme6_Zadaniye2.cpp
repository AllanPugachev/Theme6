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
	int n, k;
	int a[20], b[20];
	cin >> n;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
	k = 0;
	for (int i = 0; i < n; ++i)
		if (a[i] != 0)
		{
			b[k] = a[i];
			++k;
		}
	for (int i = 0; i < k; ++i)
		cout << b[i] << " ";
	_getch();
}