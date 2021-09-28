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


int GCD(int a, int b) {
	int min = a < b ? a : b;
	for (int i = min; i >= 1; i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
			break;
		}
	}
}

int find_GCD_Of_Elements_In_Array(int a[], int n) {
	int temp = a[0];
	for (int i = 1; i < n; i++) {
		temp = GCD(temp, a[i]);
	}
	return temp;
}
int main() {
	int a[100], n = 0;
	do {
		cout << "Enter elements in array A: ";
		cin >> n;
	} while (n < 0 || n > 100);
	input(a, n);
	cout << "Array A is created: " << endl;
	output(a, n);
	cout << "\nThe Greatest Common Divisor In Array is: " << find_GCD_Of_Elements_In_Array(a, n);
	return 0;
}
;