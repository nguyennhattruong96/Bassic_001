//
// main.cpp
// Bassic_001

// Create by Truong.Nguyen on 21/06/2017
#include <iostream>
#include <string>

using namespace std;

int Input(string sMessage);
void Output(int n);

void Sum(int n);

void main()
{
	int n;


	n = Input("nhap vao so n:");
	Sum(n);
	cout << "ket qua la" << Sum << endl;
	
}

void Sum(int n)
{
	int s = 0;
	for (int i = 0; i < n; i++)
	{
		s += i;
	}
}
int Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;
		if (n<0)
		{
			cout << "So nhap phai lon hon 0" << endl;
		}
	} while (n < 0);

	return n;
}

void Output( int n)
{
	cout << "ket qua la" << n << endl;
}