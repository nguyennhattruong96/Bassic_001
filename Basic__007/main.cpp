//
// main.cpp
// Basic_006
// Processing about Function with type of parameter
// Create by Truong.Nguyen on 19/4/2017

#include <iostream>

#include<string>

#define MAX_ARRAY 100

using namespace std;

void Input_Array ( int a[], int & n );

void Output_Array( int a[], const int n );

void SoChan(int a[], const int n);

void SoLe(int a[], const int n);

void SoChinhPhuong(int a[], const int n);

bool KiemTraSoNguyenTo(int x);

void SoNguyenTo(int a[], const int n);

void SoAm(int a[], const int n);

void SoDuong(int a[], const int n);

void main()
{
	int a [MAX_ARRAY] ;
	int n ;

	Input_Array(a, n);
	Output_Array(a, n);

	SoChan( a, n );

	SoLe(a, n);

	SoChinhPhuong(a, n);
	
	SoNguyenTo(a, n);

	SoAm(a, n);

	SoDuong(a, n);

	system("pause");
}

void Input_Array(int a[], int &n)
{
	cout << "nhap vao so luong phan tu : ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a[" << i << "] = ";
		cin >> a[i];
	}
}
void Output_Array(int a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}

void SoChan(int a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((a[i] % 2 == 0))
		{
			cout << a[i] << "\t";
		}
	}
	cout << endl;
}
void SoLe(int a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			cout << a[i] << "\t";
		}
	}
	cout << endl;
}

void SoChinhPhuong(int a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		if ((a[i] == (sqrt(a[i]) * sqrt(a[i]))))
		{
			cout << a[i] << "\t";
		}
	}
	cout << endl;
}

bool KiemTraSoNguyenTo(int x)
{
	if (x == 0 || x == 1)
		return false;
	for (int i = 2; i <= sqrt(x); i++)
	{
		if (x % i == 0)
			return false;
	}
	return true;
}

void SoNguyenTo(int a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		if (KiemTraSoNguyenTo(a[i]) == true)
		{
			cout << a[i] << "\t";
		}
	}
	cout << " khong co so nguyen to  ";
	cout << endl;
}


void SoAm(int a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			cout << a[i] << "\t";
	}
	cout << " khong co so am ";
	cout << endl;
}


void SoDuong(int a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			cout << a[i] << "\t";
	}
	cout << " khong co so duong ";
	cout << endl;
}