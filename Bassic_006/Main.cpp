//
// main.cpp
// Basic_006
// Processing about Function with type of parameter
// Create by Truong.Nguyen on 20/4/2017

#include<iostream>
#include<string>
#include <stdio.h>
using namespace std;

#define MAX_ARRAY 10

int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;

		if ( n < 0 )
		{
			cout << "So Nhap Vao Phai Lon Hon 0" << endl;
		}
	} while ( n < 0 );
	return n;
}

void NhapMang(int a[], int& n)
{
	cout << "Nhap Vao So Luong Phan Tu: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "a [ " << i << " ] = ";

		cin >> a[i];
	}
}

void XuatMang(int a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t";
	}
	cout << endl;
}

void CoppyArray( int a[] , int b[] , int n)
{
	for (int i = 0; i < n; i++)
	{
		b [i] = a [i];
	}
}

void TimKiem( int a[] , const int n , int x)
{
	for (int i = 0; i < n; i++)
	{
		if (x == a[i])
		{
			cout << " vi tri can tim la : " << i << endl;
		}
	}
	cout << " khong co vi tri can tim  " << endl;
}

int Fibonacy(int n)
{
	if (n == 0)
		return 0;
	if (n == 1)
		return 1;
	if ( n >= 2 )
	{
		int F0 = 0 ;
		int F1 = 1 ;
		int FN = 0 ;
		for (int i = 2; i <= n ; i++)
		{
			FN = F0 + F1;
			F0 = F1;
			F1 = FN;
		}
		return FN;
	}
}



void main()
{
	/*for ( ; ; )
	{
		int n = Input("Nhap vao so phan tu n:");

		cout << "Fibonacy là:" << Fibonacy(n) << endl;

		system("pause");
	}*/
	int a [ MAX_ARRAY ];
	int b [ MAX_ARRAY ];
	int n;
	int x = Input ( "nhap vao phan tu can tim: " ) ;

	NhapMang ( a , n );

	CoppyArray( a, b, n );

	XuatMang ( b , n );

	TimKiem( a, n, x );

	//int *a;
	//int b = 2;

	//a = &b;

	//cout << *a << endl;
	//cout << a << endl;
	//cout << b << endl;
	//cout << &a << endl;
	//cout << &b << endl;

	system ("pause");

}