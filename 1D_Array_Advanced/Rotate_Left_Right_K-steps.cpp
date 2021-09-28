#include<iostream>
#include<stdlib.h>
using namespace std;

void input(int* a, int& n) {
	srand(time(NULL));
	cout << "Nhap so luong phan tu: ";
	cin >> n;
	for (int i = 0; i < n; i++) {
		a[i] = rand() % 100;
	}
}

void output(int* a, int n) {
	cout << "Cac phan tu: " << endl;
	for (int i = 0; i < n; i++) {
		cout << a[i] << "\t ";
	}
}

void RotateRight(int a[], int n, int k) {
	for (int i = 1; i <= k; i++) {
		for (int i = 0; i < n; i++) {
			swap(a[i], a[n - 1]);
		}
	}
}

void RotateLeft(int a[], int n, int k) {
	for (int i = 1; i <= k; i++) {
		for (int i = n - 1; i > 0; i--) {
			swap(a[i], a[0]);
		}
	}
}
int main() {
	int a[100], n = 0, k = 0;
	input(a, n);
	output(a, n);
	cout << "\nEnter k steps for rotating to right: " << endl;
	cin >> k;
	RotateRight(a, n, k);
	output(a, n);
	cout << "\nEnter k steps for rotating to left: " << endl;
	cin >> k;
	RotateLeft(a, n, k);
	output(a, n);
	return 0;
}