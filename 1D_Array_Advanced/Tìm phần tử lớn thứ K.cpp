#include<iostream>

using namespace std;

void input(int a[], int n)
{
	for (int i = 0; i < n; i++) {
		cout << "[" << i << "]: ";
		cin >> a[i];
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
    int a[100], n = 0, k = 0;
	do {
		cout << "Enter elements in array A: ";
		cin >> n;
	}while(n < 0 || n > 100);
	input(a,n);
	descending(a,n);
	do {
		cout << "Enter K: ";
		cin >> k;
	}while(k < 0 || k > n);
	cout << "The K_th largest element is: " << a[k - 1] << endl;
	return 0;
}
