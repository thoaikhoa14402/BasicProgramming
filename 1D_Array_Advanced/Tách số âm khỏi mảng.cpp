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

void Del(int a[], int& n, int pos) {
	for (int i = pos; i < n - 1; i++) {
		a[i] = a[i + 1];
	}
	n--;
}

void Del_Negative_Num(int a[], int b[], int& n, int &count) {
	for (int i = 0; i < n; i++) {
		if (a[i] < 0) {
			b[count++] = a[i];
			Del(a, n, i);
			i--;
		}
	}
}
int main() {
    int a[100], b[100];
	int n = 0, count = 0;
	do {
		cout << "Enter elements in array: ";
		cin >> n;
	}while(n < 0 || n > 100);
	input(a, n);
	Del_Negative_Num(a,b,n,count);
	cout << "Array A after deleting negative number: " << endl;
	output(a, n);
	cout << "\nArray B: " << endl;
	output(b,count);
	return 0;
}
