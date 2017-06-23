//
// Main.cpp
// Basic_009
// Processing about Function with type of parameter
// Create by Truong.Nguyen on 27/4/2017

#include<iostream>
#include<string>

using namespace std;
#define Max_Array 100
void Input(string sMessage);
void Input_Array(int a[], int &n);
void Output_Array(int a[], const int n);
void TachMangAmDuong(int a[], const int n, int b[], int &m, int c[], int &t, int d[], int &k);
bool KiemTraSoNguyenTo(int x);
bool KiemTraSoChinPhuong(int x);
void TachMangSoNguyenTo(int a[], int &n);
void TachMangSoChinPhuong(int a[], int &n);

void main()
{
	int a[Max_Array];
	int n;

	Input_Array(a, n);

	Output_Array(a, n);

	system("pause");
}

void Input(string sMessage)
{
	int n;
	
	cout << sMessage;
	cin >> n;

	do
	{
		if (n < 0)
		{
			cout << "nhap lai so lon hon khong ";
		}
	} while (n < 0);
}

void Input_Array(int a[], int &n)
{
	n = 50;

	int b[] = { 1,5,9.3,6,0,-2,-3,-5,0,-12,-17,0,0,8,0,3,6,7,2,-5,6,19,20,37,14,16,29,9,0,5,7,8,3,16,35,28,29,-16,-35,8,-35,12,26,36,17,-16,8,5,3,0 };
	for (int i = 0; i < n; i++)
	{
		a[i] = b[i];
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

bool KiemTraSoNguyenTo(int x)
{
	if (x == 0 || x == 1)
	{
		return false;
	}
	for (int i = 0; i < sqrt(x); i++)
	{
		if (x % i == 0)
		{
			return false;
		}
	}
	return true;
}

bool KiemTraSoChinPhuong(int x)
{
	for (int i = 0; i < x; i++)
	{
		if (x == (sqrt(x)*sqrt(x)))
		{
			return true;
		}
	}
	return false;
}

void TachMangAmDuong(int a[], const int n, int b[], int &m, int c[], int &t, int d[], int &k)
{
	m = t = k = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
		{
			b[m++] = a[i];
		}
		else
		{
			if (a[i] < 0)
			{
				c[t++] = a[i];
			}
			else
			{
				d[k++] = a[i];
			}
		}
	}

}

void 