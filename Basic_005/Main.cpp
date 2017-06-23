//
// main.cpp
// Basic_005
// Processing about Function with type of parameter
// Create by Truong.Nguyen on 18/4/2017

#include<iostream>
#include<string>

using namespace std;

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

int SoDaoNguoc(int x)
{
	int soNguyen = x;
	int soDu = 0;
	
	int nd = 0;

	while (soNguyen>0)
	{
		soDu = soNguyen % 10;
		soNguyen = soNguyen / 10;
		nd = nd * 10 + soDu;
	}

	return nd;
}

int DemNutBanSoXe(int x)
{
	int soNguyen = x;
	int soDu = 0;
	int tong = 0 ;

	while ( soNguyen > 0 )
	{
		soDu = soNguyen % 10;
		soNguyen = soNguyen / 10;
		
		tong += soDu;
	}

	return tong % 10;
}

bool KiemTraSoChinhPhuong(int x)
{
	return (x == (sqrt(x) * sqrt(x)));
}
 
bool KiemTraSoDoiXung(int x) 
{
	return (x == SoDaoNguoc(x));
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

int TongChuSoLe(int x)
{
	int tong = 0;
	
	int soNguyen = x;
	int soDu = 0;
	
	while (soNguyen !=0)
	{
		soDu = soNguyen % 10;
		soNguyen = soNguyen / 10;

		tong += (soDu % 2 != 0) ? soDu : 0;
	}

	return tong;
}

int TongChuSoChan(int x)
{
	int tong = 0; 
	
	int soNguyen = x;
	int soDu = 0;

	while (soNguyen !=0)
	{
		soDu = soNguyen % 10;
		soNguyen = soNguyen / 10;

		tong += (soDu % 2 == 0) ? soDu : 0;
	}
		
	return tong;
}

int TongChuSoNguyenTo(int x)
{
	int tong = 0;

	int soNguyen = x;
	int soDu = 0;

	while (soNguyen != 0)
	{
		soDu = soNguyen % 10;
		soNguyen = soNguyen / 10;

		tong += (KiemTraSoNguyenTo(soDu) == true) ? soDu : 0;
	}

	return tong;
}

int TongChuSoChinPhuong(int x)
{
	int tong = 0;

	int soNguyen = x;
	int soDu = 0;

	while (soNguyen != 0)
	{
		soDu = soNguyen % 10;
		soNguyen = soNguyen / 10;

		tong += (KiemTraSoChinhPhuong(soDu) == true) ? soDu : 0;
	}

	return tong;
}

int Tong_S01(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
	{
		tong = tong + i;
	}
	return tong;
}

int Tong_S02(int n)
{
	int tong = 0;
	for (int i = 1; i <= n; i++)
	{
		tong += i * i;
	}
	return tong;
}

double Tong_S03(int n)
{
	double tong = 0.0;
	for (int i = 1; i <=n; i++)
	{
		tong += 1.0 / i;
	}
	return tong;
}

double Tong_S04(int n)
{
	double tong = 1.0;
	for (int i = 1; i <=n; i++)
	{
		tong *= i;
	}
	return tong;
}

double TinhGiaiThua(int n)
{
	if (n == 0)
		return 1.0;

	double giaTri = 1.0;
	for (int i = 1; i <= n; i++)
		giaTri *= i;
	
	return giaTri;
}

double Tong_S05(int n)
{
	if (n == 0)
		return TinhGiaiThua(n);

	double tong = 0.0;

	for (int i = 1; i <= n; i++)
	{
		tong += TinhGiaiThua(i);
	}

	return tong;
}

int UCLN(int x, int n)
{
	if (x > n)
	{
		int temp = x;
		x = n;
		n = temp;
	}

	for (int i = x / 2; i >= 1; i--)
		if ((x % i == 0) && (n % i == 0))
			return i;

	return 1;
}

void main()
{
	int x = Input("Nhap vao so x:") ;
	int n = Input("Nhap vao so n:");

	cout << SoDaoNguoc(x) << endl;
	cout << DemNutBanSoXe(x) << endl;

	if (KiemTraSoDoiXung(x))
		cout << x << " la so doi xung" << endl;
	else
		cout << x << " khong phai la so doi xung" << endl;

	if (KiemTraSoChinhPhuong(x))
		cout << x << " la so Chinh Phuong" << endl;
	else
		cout << x << " khong phai la so Chinh Phuong" << endl;

	if (KiemTraSoNguyenTo(x))
		cout << x << " la so So Nguyen To" << endl;
	else
		cout << x << " khong phai la So Nguyen To" << endl;

	cout << "Tong chu so le: " << TongChuSoLe(x) << endl;
	cout << "Tong chu so chan: " << TongChuSoChan(x) << endl;
	cout << "Tong chu so nguyen to: " << TongChuSoNguyenTo(x) << endl;
	cout << "Tong chu so chin phuong: " << TongChuSoChinPhuong(x) << endl;
	cout << "tong S(n) = 1 + 2 + ... + " << x << " = " << Tong_S01(x) << endl;
	cout << "tong S(n) = 1^2 + 2^2 + ... + " << x << " = " << Tong_S02(x) << endl;
	cout << "tong S(n) = 1/1 + 1/2 + ... + " << x << " = " << Tong_S03(x) << endl;
	cout << "tong S(n) = 1*2 + ... + " << x << " = " << Tong_S04(x) << endl;
	cout << "tong S(n) = 1! + 2! + ... + " << x << " = " << Tong_S05(x) << endl;
	cout << "UCLN la:" << UCLN(x,n) << endl;
	system("pause");
}