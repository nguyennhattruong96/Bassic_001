//
// main.cpp
// Bassic_011

// Create by Truong.Nguyen on 23/06/2017

#include <iostream>
#include <string>

using namespace std ;

int Input(string sMasage);
void Output(int n);

//------------- 1+2+3....+n-----------------------------------
int Sum_001(int n);
//------------------------------------------------------------

//------------- 1^2+2^2+3^2....+n^2---------------------------
int Sum_002(int n);
//------------------------------------------------------------

//------------- 1+1/2+1/3....+1/n---------------------------
double Sum_003(int n);
//-----------------------------------------------------------

//------------- 1+2+1/4....+1/2n---------------------------
double Sum_004(int n);
//------------------------------------------------------------
void main()
{
	int x = Input("nhap vao x:");

	//cout <<"ket qua la" << Sum001(x) << endl;

	//cout << "ket qua la:" << Sum_002(x) << endl;

	//cout << "ket qua la:" << Sum_003(x) << endl;

	cout << "ket qua la:" << Sum_004(x) << endl;
	system("Pause");

}

int Input(string sMessage)
{
	int n;
	do
	{
		cout << sMessage;
		cin >> n;
		if (n < 0)
			cout << "phai nhap vao so lon hon 0" << endl;

	} while (n<0);
	return n;
}

void Output(int n)
{
	cout << "ket qua la:" << n << endl;
}

//------------- 1+2+3....+n-----------------------------------
int Sum_001(int n)
{
	int s=0;
	for (int i = 1; i < n; i++)
	{
		s = s + i;
	}
	return s;
}
//------------------------------------------------------------

//------------- 1^2+2^2+3^2....+n^2-----------------------------------
int Sum_002(int n)
{
	int s = 0;
	for (int i = 1; i <= n; i++)
	{
		s += i * i;
	}
	return s;
}

//------------------------------------------------------------

//------------- 1+1/2+1/3....+1/n---------------------------
double Sum_003(int n)
{
	double s = 0;
	for (int i = 1; i < n; i++)
	{
		s += 1.0 / i;
	}
	return s;
}
//------------------------------------------------------------

//------------- 1+2+1/4....+1/2n---------------------------
double Sum_004(int n)
{
	double s = 0;
	for (int i = 1; i < n; i++)
	{
		s += 1.0 / i;
		
		i = 2 * i;
	}
	return s;
}
//------------------------------------------------------------