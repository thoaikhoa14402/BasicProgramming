//Viết chương trình kiểm tra mảng có toàn dương hay không ? int n, a[100];
#include <iostream>
#include<cmath>
using namespace std;
void input(int a[100], int& n)
{
	cout << "Nhap so luong phan tu muon thuc hien: ";
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cout << "\na[" << i << "]=";
		cin >> a[i];
	}
}
//
bool isPositiveArray(int a[100], int n)
{
	for (int i = 0; i < n; i++)
	{
		if (a[i] < 0) return false;
	}
	return true;
}
int main()
{
	int a[100], n;
	input(a, n);
	if (isPositiveArray(a, n)) cout << "\nMang la mang toan duong.";
	else cout << "\nKhong phai la mang toan duong.";
}