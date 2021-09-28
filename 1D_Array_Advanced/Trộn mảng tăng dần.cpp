/* Có 2 mảng A và B đã được sắp xếp tăng dần. Trộn mảng a,b vào c cho mảng c tăng dần */

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

void mixArray(int a[], int b[], int c[], int n, int m, int &count) {
	for (int i = 0; i < n; i++) {
		c[count++] = a[i];
	}
	for (int i = 0; i < m; i++) {
		c[count++] = b[i];
	}
}

void interchangeSort(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if(a[i] > a[j]) swap(a[i],a[j]);
		}
	}
}

int main() {
    int a[100], b[100], c[100];
	int n = 0, m = 0, count = 0;
	do {
		cout << "Enter elements in array A: ";
		cin >> n;
	}while(n < 0 || n > 100);
	input(a, n);
	do {
		cout << "Enter elements in array B: ";
		cin >> m;
	}while(m < 0 || m > 100);
	input(b,m);
	mixArray(a,b,c,n,m,count);
	interchangeSort(c,count);
	cout << "Array C: " << endl;
	output(c,count);
	return 0;
}
