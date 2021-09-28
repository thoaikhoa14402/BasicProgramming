// Tìm phần tử trong mảng xa x nhất với x được nhập từ bàn phím
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
// hàm check coi có phần tử giống nhau không
bool check(int a[], int n) {
	for (int i = 0; i < n - 1; i++) {
		if (a[i] != a[i + 1]) return false;
	}
	return true;
}
int process(int a[], int n, int x) {
	int val = a[0], distance = a[0] - x;
	for (int i = 1; i < n; i++) {
		if ((a[i] - x) > distance) {
			distance = a[i] - x;
			val = a[i];
		}
	}
	return val;
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
	cout << "\nEnter x: ";
	cin >> x;
	if(check(a,n)) cout << "The farthest element from x is: " << a[0];
	else {
		cout << "\nThe farthest element from x is: " << process(a, n, x);
	}
	return 0;
}
;