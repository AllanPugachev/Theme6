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
	cout << "������� ���������� ��������� ������� � "; cin >> n;
	do
	{
		cout << "1. ���� ������� ����� �����" << endl;
		cout << "2. ����� ������� � ������" << endl;
		cout << "3. ���������� �������� ��������������� �������� ��������� ������� � ������ ������������� \n   ��������� ������� ����� ������ �� �������� ��������������� ��������" << endl;
		cout << "4. ����� ������" << endl;
		cout << "������� ����� ������ ���� "; cin >> k;
		switch (k)
		{
		case 1: vvod(a, n); break;
		case 2: vivod(a, n); break;
		case 3: zamena(a, n); break;
		case 4: cout << "����� ������" << endl; break;
		default: cout << "������ ������ ���" << endl;
		}
		if (k == 4) break;
	} while (true);
	_getch();
}
void vvod(int a[], int n)
{
	cout << "������� �������� �������" << endl;
	for (int i = 0; i < n; ++i)
		cin >> a[i];
}
void vivod(int a[], int n)
{
	cout << "�������� ������� �:" << endl;
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