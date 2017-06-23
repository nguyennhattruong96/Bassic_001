//
// main.cpp
// Basic_002

// Create by Truong.Nguyen on 13/4/2017

#include<iostream>

using namespace std;

void TachChuSo(int x, int &a, int &b, int &c, int &d)
{

	int soNguyen = x;
	int soDu = 0;
	soDu = soNguyen % 10;
	d = soDu;
	soNguyen = soNguyen / 10;

	soDu = soNguyen % 10;
	c = soDu;
	soNguyen = soNguyen / 10;

	soDu = soNguyen % 10;
	b = soDu;
	soNguyen = soNguyen / 10;

	soDu = soNguyen % 10;
	a = soDu;

	//cout << a << " ngan ";
	//cout << b << " tram ";
	//cout << c << " muoi ";
	//cout << d << " " << endl;

	if (a != 0)
	{
		cout << a << " ngan ";
	}

	if (b != 0)
	{
		cout << b << " tram ";
	}
	else
	{
		if(a != 0)
		{
			if(c != 0 || d != 0)
				cout << " khong tram ";
		}
	}

	// c > 1, c = 1, c = 0
	if (c > 1)
	{
		cout << c << " muoi ";
	}
	else
	{
		// c = 1 hoac c = 0
		if (c == 1)
		{
			cout << " muoi ";
		}
		else
		{
			//c = 0
			if ((a != 0) || (b != 0))
			{
				if(d != 0)
				 cout << " le ";
			}
		}
	}

	/*if ( c!=0 )
	{
		if (c != 1)
		{
			cout << c << "mươi";
		}
		else
		{
			cout << "muoi";
		}
	}
	else
	{
		if (a==0 && b==0 && c==0 )
		{
			cout << "";
		}
		if (a!=0 && b!=0)
		{
			cout << "le";
		}
	}*/

	if (d != 0)
	{
		cout << d;
	}

	if (a == 0 && b == 0 && c == 0 && d == 0)
		cout << "Khong";




	//while (soNguyen != 0 )
	//{
	//	soDu = soNguyen % 10;
	//	soNguyen = soNguyen / 10;

	//	b = soDu;
	//	c = soDu;
	//	d = soDu;
	//	e = soDu;
	//}
}


void main()
{

	int x;
	int a;
	int b;
	int c;
	int d;
	for (;;) {



		cout << "nhap vào x=";
		cin >> x;
		TachChuSo(x, a, b, c, d);




		/*switch (a)
		{
			case 1: cout << "A là Mot" << endl;
				break;
			case 2: cout << " A là Hai" << endl;
				break;
			case 3: cout << "A là Ba" << endl;
				break;
			case 4: cout << "A là Bon" << endl;
				break;
			case 5: cout << "A là Nam" << endl;
				break;
			case 6: cout << "A là Sau" << endl;
				break;
			case 7: cout << "A là Bay" << endl;
				break;
			case 8: cout << "A là Tam" << endl;
				break;
			case 9: cout << "A là Chin" << endl;
				break;
			default: cout << "KHONG CO SO ";
			break;
		}*/
		cout << endl;
	}
}