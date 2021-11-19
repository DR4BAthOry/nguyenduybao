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

int ktChanLe(int n)
{
	return (n%2==0)?1:0;
}

int main()
{
	int n = 5;
    	int kt = ktChanLe(n);
    	if(kt == 1)
      		cout<<"n là số chẵn";
    	else
      		cout<<"n là số lẻ\n";
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