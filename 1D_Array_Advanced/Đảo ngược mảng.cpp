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

void reverseArray(int a[], int n) {
	int left = 0, right = n - 1;
	for (int i = 0; i <= n / 2; i++) {
		if(left >= right) break;
		swap(a[left++], a[right--]);
	}
}
int main() {
	int a[100], n = 0, x = 0;
	do {
		cout << "Enter elements in array A: ";
		cin >> n;
	} while (n < 0 || n > 100);
	input(a, n);
	cout << "Array A is created: " << endl;
	output(a, n);
	reverseArray(a,n);
	cout << "\nArray A after reversing is: " << endl;
	output(a,n);
	return 0;
}