#include <iostream>
using namespace std;
int tong(int a, int b);
int hieu(int a, int b);

<<<<<<< HEAD
int hieu(int a, int b)
{
	return a - b;
=======
int tong(int a, int b)
{
	return a + b;
>>>>>>> f399ec90cf2878a25eb33e3273f1b67064237110
}

int main()
{
	int a, b;
	char phepToan;
	cout << "Nhap so nguyen 1: ";
	cin >> a;
	cout << "Nhap so nguyen 2: ";
	cin >> b;
	cout << "Chon phep toan (+,-) ";
	cin >> phepToan;
<<<<<<< HEAD
	if (phepToan == '-')
	{
		cout << "Hieu la:" << hieu(a, b);
=======
	if (phepToan == '+')
	{
		cout << "Tong la:" << tong(a, b);
>>>>>>> f399ec90cf2878a25eb33e3273f1b67064237110
	}

	system("pause");
	return 0;
}