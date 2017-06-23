//
// main.cpp
// Basic_008
// Processing about Function with type of parameter
// Create by Truong.Nguyen on 21/4/2017

#include<iostream>

#include<string>

#define MAX_ARRAY 100

using namespace std;

void Input (string sMessage);
void Input_Array (int a[], int &n);
void Output_Array(int a[],const int n);
bool KiemTraMangTang(int a[], const int n);
bool KiemTraMangGiam(int a[], const int n);
bool KiemTraMangKhongTangKhongGiam(int a[], const int n);
void TachMangSoAm(int a[], const int n, int b[], int &m);
void TachMangSoDuong(int a[], const int n, int b[], int &m);
void TachMangSo_0(int a[], const int n, int b[], int &m);
void TachMangAmDuong(int a[], const int n, int b[], int &m, int c[], int &k, int d[], int &t);
void GopMang(int b[], const int m , int c[] , const int k, int d[] , const int t, int e[], int &g);
void GopMangAmDuong(int b[], const int m, int c[], const int k, int e[], int &g);
int TimMin(int a[], const int n);
int TimMax(int a[], const int n);
void HoanVi(int &a, int &b);
void SapTang(int a[], const int n);
void SapGiam(int a[], const int n);
void SapXepMangDuongTangAmGiam(int b[], const int m, int c[], const int k, int d[], const int t, int e[], int &g);
void SapXepMangAmTangDuongGiam(int b[], const int m, int c[], const int k, int e[], int &g);

void main()
{
	int a[MAX_ARRAY];
	int n;


	Input_Array (a, n);

	/*SapGiam(a, n);*/



	Output_Array(a, n);


	
	//if (KiemTraMangTang(a,n)==true)
	//{
	//	cout << "Mang Nay La Mang Tang " << endl;
	//}
	//
	//if (KiemTraMangGiam(a,n) == true)
	//{
	//	cout << "Mang Nay La Mang Giam " << endl;
	//}
	//
	//if (KiemTraMangKhongTangKhongGiam(a,n) == true)
	//{
	//	cout << "Mang Nay La Mang Khong Tang Khong Giam" << endl;
	//}

	int b[MAX_ARRAY]; // Mang so duong
	int m = 0;
	int c[MAX_ARRAY]; // Mang so am
	int k = 0;
	int d[MAX_ARRAY]; // Mang so 0
	int t = 0;
	int e[MAX_ARRAY];
	int g = 0;

	TachMangAmDuong(a, n, b, m, c, k, d, t);

	cout << endl << "Mang so Duong" << endl;
	TachMangSoDuong(a, n, b, m);
	Output_Array(b, m);

	cout << endl << "Mang so Am" << endl;
	TachMangSoAm(a, n, c, k);
	Output_Array(c, k);

	cout << endl << "Mang so 0" << endl;
	TachMangSo_0(a, n, b, m);
	Output_Array(d, t);

	cout << endl << "Mang Duong Tang Am Giam:" << endl;
	SapXepMangDuongTangAmGiam(b, m, c, k, d, t, e, g);
	Output_Array(e, g);

	cout << endl << "Mang Duong Tang Am Giam:" << endl;
	SapXepMangAmTangDuongGiam(b, m, c, k, e, g);
	Output_Array(e, g);

	//cout << endl << "Mang Gop:" << endl;
	//GopMang(b, m, c, k, d, t, e, g);
	//Output_Array(e, g);

	//cout << endl << "Mang Gop Am Duong:" << endl;
	//GopMangAmDuong(b, m, c, k, e, g);
	//Output_Array(e, g);

	////cout << endl << "Mang Am Duong La:" << endl;
	////TachMangAmDuong(a, n, b, m, c, k, d, t);
	////Output_Array(d, t);

 // 	cout << "So Nho Nhat Trong Mang La : " << TimMin (a , n) <<  endl;

	//cout << "So Lon Nhat Trong Mang La: " << TimMax(a , n) << endl;



	system("pause");
}

void Input(string sMessage)
{
	int n;

	do
	{
		cout << sMessage;
		cin >> n;

		if ( n < 0 )
		{
			cout << "nhap lai n lon hon 0 : ";
		}

	} while ( n < 0);
}

void Input_Array(int a[], int &n)
{
	//cout << "nhap vao so phan tu cua mang : ";
	//cin >> n;
	//for (int i = 0; i < n; i++)
	//{
	//	cout << "a[" << i << "] = ";
	//	cin >> a[i];
	//}
	//cout << endl;

	n = 20;
	int b[] = { 0, 13, -12, 15, -13, 0, 9, 6, 12, 11, 5, 8, -2, -4, 3, 2, -12 , 14 ,19 ,-18 };
	
	for (int i = 0; i < n; i++)
	{
		a[i] = b[i];
	}

}

void Output_Array(int a[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << a[i] << "\t" ;
	}
	cout << endl;
}

bool KiemTraMangTang(int a[], const int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] > a[i + 1])
		{
			return false;
		}
	}
	return true;
}

bool KiemTraMangGiam(int a[], const int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		if (a[i] < a[i + 1])
		{
			return false;
		}
	}
	return true;
}

bool KiemTraMangKhongTangKhongGiam(int a[], const int n)
{
	return !(KiemTraMangTang(a, n) || KiemTraMangGiam(a, n));
}

void TachMangSoDuong(int a[], const int n, int b[], int &m) 
{
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			b[m++] = a[i];
	}
}

void TachMangSoAm(int a[], const int n, int b[], int &m)
{
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0)
			b[m++] = a[i];
	}
}

void TachMangSo_0(int a[], const int n, int b[], int &m)
{
	m = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] == 0)
			b[m++] = a[i];
	}
}

void TachMangAmDuong(int a[], const int n, int b[], int &m, int c[], int &k, int d[], int &t)
{
	m = k = t = 0;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > 0)
			b[m++] = a[i];
		else
		{
			if (a[i] < 0)
				c[k++] = a[i];
			else
				d[t++] = a[i];
		}
	}
}

void GopMang(int b[], const int m, int c[], const int k, int d[], const int t, int e[], int &g)
{
	g = 0;
	for (int i = 0; i < t; i++)
		e[g++] = d[i];
	for (int i = 0; i < m; i++)
	{
		e[g++] = b[i];
	}
	for (int i = 0; i < k; i++)
	{
		e[g++] = c[i];
	}
}

void GopMangAmDuong(int b[], const int m, int c[], const int k, int e[], int &g)
{
	 g = 0;

	for (int i = 0; i < m; i++)
	{
		e[g++] = b[i];
	}

	for (int i = 0; i < k; i++)
	{
		e[g++] = c[i];
	}
}

int TimMin(int a[], const int n)
{
	int min = a[0];

	for (int i = 1; i < n; i++)
	{
		if ( a[i] < min )
		{
			min = a[i];
		}
	}
	return min;
}

int TimMax(int a[], const int n)
{
	int max = a[0];

	for ( int i = 1; i < n; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	return max;
}

void HoanVi(int &a, int &b)
{
	int temp;

	temp = a;
	a = b;
	b = temp;
}

void SapTang(int a[], const int n)
{
	for (int i = 0; i < (n-1); i++)
	{
		for (int j = (i + 1); j < n; j++)
		{
			if (a[i] > a[j])
			{
				HoanVi(a[j], a[i]);
			}
		}
	}
}

void SapGiam(int a[], const int n)
{
	for (int i = 0; i < (n-1); i++)
	{
		for (int j = (i + 1); j < n; j++)
		{
			if (a[i] < a[j])
			{
				HoanVi(a[i], a[j]);
			}
		}
	}
}

void SapXepMangDuongTangAmGiam(int b[], const int m, int c[], const int k, int d[], const int t, int e[], int &g)
{
	// Mãng Dương
	g = 0;

	for (int  i = 0; i < m; i++)
	{
		SapTang(b, m);
		e[g++] = b[i];
	}
	// Mãng 0
	for (int i = 0; i < t; i++)
	{
		e[g++] = d[i];
	}
	// Mãng âm
	for (int i = 0; i < k; i++)
	{
		SapGiam(c, k);
		e[g++] = c[i];
	}
}

void SapXepMangAmTangDuongGiam(int b[], const int m, int c[], const int k, int e[], int &g)
{
	g = 0;
	for (int i = 0; i < k; i++)
	{
		SapTang(c, k);
		e[g++] = c[i];
	}
	for (int i = 0; i < m; i++)
	{
		SapGiam(b, m);
		e[g++] = b[i];
	}
}