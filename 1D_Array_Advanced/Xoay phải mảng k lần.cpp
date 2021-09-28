#include<iostream>

using namespace std;

void input(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "[" << i << "]: ";
		cin >> a[i];
	}
}

void output(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

// dời mảng
void Move(int a[], int n) {
	for (int i = n - 1; i > 0; i--) {
		a[i] = a[i - 1];
	}
}

void rotateArray(int a[], int n, int k) {
	for (int i = 1; i <= k; i++) {
		int temp = a[n - 1];
		Move(a,n);
		a[0] = temp;
	}
}
int main() {
	int a[100], n = 0, k = 0;
	do {
		cout << "Enter elements in array A: ";
		cin >> n;
	} while (n < 0 || n > 100);
	input(a, n);
	cout << "Array A is created: " << endl;
	output(a, n);
	do {
		cout << "\nEnter k: ";
		cin >> k;
	}while(k < 0);
	rotateArray(a,n,k);
	cout << "Array A after rotating to right is: " << endl;
	output(a,n);
	return 0;
}