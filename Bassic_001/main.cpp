//
// main.cpp
// Bassic_001

// Create by Truong.Nguyen on 7/4/2017

#include <iostream>
#include <bitset>

using namespace std;

void Hoan_Vi(int &a , int &b)
{
	int Temp;
	Temp = a;
	a = b;
	b = Temp;
	
}

void main()
{
	//int a = 10;
	//int b = 8;
	int a = 5;
	char b = 6;
	//Hoan_Vi(a, b);
	//cout << a << b  << endl;
	//cout << "-------------------------------" << endl;

	//b = 10;

	//cout << b + ++b << endl;
	//cout << b << endl;
	cout << "---------------------------------" << endl;
	cout << (a >> 1) << endl; // ??y v? sau 1 bit
	cout << (a << 1) << endl; // ??y v? tr??c 1 bit

	cout << "---------------------------------" << endl;
	cout << (a & b) << endl; //AND th� 2 c�i ph?i 1

	cout << "---------------------------------" << endl;
	cout << (a | b) << endl; //OR ch? c?n c� 1 l� 1

	cout << "---------------------------------" << endl;
	cout << (a ^ b) << endl; // XOR kh�c nhau ra 1 gi?ng nhau s? ra kh�ng 

	cout << "---------------------------------" << endl;

	char x;
	
	char t = 5;
	bitset<8> bt(t);
	cout << bt << endl;

	x = (~t);

	bitset<8> bx(x);
	cout << bx << endl;

	int i = 135;
	bitset<32> bi(i);

	cout << bi << endl;
	cout << ~bi << endl;// To�n t? not l� to�n 1 ng�i l?y b� gi� tri n?u 0 th�nh 1 1 th�nh o

	system("pause");
}