#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);
int tich(int a, int b);

int hieu(int a, int b)
{
	return a - b;
}

int tich(int a, int b)
{
	return a*b;
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-,*) ";
	cin >> phepToan;
	if (phepToan == '-')
	{
		cout << "Hieu la:" << hieu(a, b);
	}
	else if (phepToan == '*')
	{
		cout << "Tich la:" << tich(a, b);
	}

	system("pause");
	return 0;
}