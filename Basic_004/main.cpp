//
// main.cpp
// Basic_004
// Processing about Function with type of parameter
// Create by Truong.Nguyen on 14/4/2017
#include<iostream>
#include<string>

using namespace std;

int Input(string sMessage);
void Output(int n);
int Sum(int a, int b, int c);
int Minus(int a, int b);

void PassByValue(int n)
{
	n = n + 5;
	cout << "--> PassByValue: " << n << " --> Dia chi o nho cua n " << &n << endl;
}

void PassByReference(int &n)
{
	n = n + 5;
	cout << "--> PassByReference: " << n << " --> Dia chi o nho cua n " << &n << endl;
}

void PassByAddress(int *n)
{
	*n = *n + 5;
	cout << "--> PassByReference: " << n << " --> Dia chi o nho cua n " << &n << endl;
}

void main()
{
	int n = 10;
	PassByValue(n);
	cout << "-> Main: " << n << " --> Dia chi o nho cua n " << &n << endl;
	PassByReference(n);
	cout << "-> Main: " << n << " --> Dia chi o nho cua n " << &n << endl;

	PassByAddress(&n);
	cout << "-> Main: " << n << " --> Dia chi o nho cua n " << &n << endl;

	int a = Input("nhap vao so a=");
	/*int a = Input("Nhap so a = ");
	int b = Input("Nhap so b = ");
	int c = Input("Nhap so c = ");

	Output(Sum(a, b, c));
	Output(Minus(a, b));*/

	system("pause");
}

int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;

		if (n <= 0)
			cout << "So nhap vao phai lon hon 0" << endl;
	} while (n <= 0);

	return n;
}

void Output(int n)
{
	cout << "Ket qua cua phep toan la: " << n << endl;
}

int Sum(int a, int b, int c)
{
	return a + b + c;
}

int Minus(int a, int b)
{
	return a - b;
}