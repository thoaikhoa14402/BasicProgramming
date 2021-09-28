#include<iostream>

using namespace std;

void input(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "[" << i << "]: ";
		cin >> a[i];
	}
}

void output(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void Delete(int a[], int& n, int pos) {
	for (int i = pos; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	n--;
}

void Process(int a[], int b[], int c[],int& n, int &count1, int &count2) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			b[count1++] = a[i];
			Delete(a, n, i);
			i--;
		}
		if (a[i] == 0) {
			c[count2++] = 0;
			Delete(a,n,i);
			i--;
		}
	}
}

void descending(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (a[i] < a[j]) swap(a[i], a[j]);
		}
	}
}
int main() {
    int a[100], b[100],c[100];
	int n = 0, count = 0;
	do {
		cout << "Enter elements in array A: ";
		cin >> n;
	}while(n < 0 || n > 100);
	input(a, n);
	int count1 = 0, count2 = 0;
	Process(a,b,c,n,count1,count2); // hàm xử lý
	descending(a,n); // sắp xếp mảng a với toàn số dương giảm dần
	descending(b,count1); // sắp xếp bảng b với toàn số âm giảm dần
	cout << "The array after sorting is: " << endl;
	output(b,count1);
	output(c,count2);
	output(a,n);
	return 0;
}
