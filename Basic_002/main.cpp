//-----------------------------------------------------------------------------------------------------------------------------------
//
// main.cpp
// Basic_002

// Create by Truong.Nguyen on 10/4/2017

#include<iostream>
#include<math.h>

#define PI 3.14

using namespace std;

void main()
{
	int S1;
	S1 = (1 > 2) ? 2912 : 1706;//Nếu biểu thức đúng thì lấy sau dấu hỏi nếu biểu thức sai thì lấy sau dấu :
	

	cout << S1 << endl;

	int a = 4;

	int b = 5;

	int c = 6;

	int x;
	x = (a=1, b=2, c=3,b=c+2);// Tính toán lấy giá trị của biểu thức cuối cùng gán cho biến x
	cout << x << endl;
	cout << a << "-" << b << "-" << c << endl;

	cout << 1 / 3 << endl;

	cout << 1.0 / 3 << endl;

	int X = 4, Y = 3, Z = -5;
	float T = -1.2;
	float KQ1 = sqrt(X);// Lấy căng
	float KQ2 = pow(X, Y);// Hàm mủ
	float KQ3 = pow(X, 1 / 3);
	float KQ4 = pow(X, 1.0 / 3);
	int KQ5 = abs(Z);// Lấy giá trị tuyệt đối theo số nguyên
	float KQ6 = fabs(T);// Lấy giá trị tuyệt đối theo số thực
	cout << KQ1 << endl;
	cout << KQ2 << endl;
	cout << KQ3 << endl;
	cout << KQ4 << endl;
	cout << KQ5 << endl;
	cout << KQ6 << endl;
	cout << "------------------------------------------>" << endl;
	double goc = 30;
	double radianGoc = (goc * 3.14) / 180;// đổi giá trị x về radian
	cout << radianGoc << endl;// In ra số radiian của góc x  
	// cos
	cout << cos(radianGoc) << endl;// Tính cos của x và in ra 

	double Result;
	Result = acos(cos(radianGoc));// Acos là hàm trả về góc ban đầu trước khi tính cos
	cout << Result << endl;
	cout << "------------------------------------------>" << endl;
	// sin
	cout << (sin(radianGoc)) << endl;

	cout << asin(sin(radianGoc)) << endl;
	cout << "------------------------------------------>" << endl;
	// tan
	cout << tan(radianGoc) << endl;
	cout << atan(tan(radianGoc)) << endl;
	cout << "------------------------------------------>" << endl;
	cout << (exp(X)) << endl;//Hàm e mủ
	cout << "------------------------------------------>" << endl;
	cout << (log (X))<<endl;//Hàm log trả về logaric cơ số e
	cout << "------------------------------------------>" << endl;
	cout << (log10(X)) << endl;//Hàm log10 trả về logaric cơ số 10
	cout << "------------------------------------------>" << endl;
	cout << (ceil(X)) << endl;// Hàm trả về số nguyên nhỏ nhất không nhỏ hơn x  
	cout << "------------------------------------------>" << endl;
	cout << (floor(X)) << endl;//Hàm trả ra số nguyên lớn nhất không lớn hơn X

	//viết chương trình tính toán biểu thức sau
	//S(n) = 1/(n-1) + 2/(n-2) + 3/(n-3) + ... + n/?
	//Với ? là giá trị 0 vì khi cho chạy từ 1->n ở mẩu và ở tử thì kết quả ở mẩu sẽ trả về 0,khi chạy chương trình se báo lỗi vì không có số n nào chia hết cho 0 dc.
}
