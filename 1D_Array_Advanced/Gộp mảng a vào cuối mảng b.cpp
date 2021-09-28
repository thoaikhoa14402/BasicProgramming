#include<iostream>

using namespace std;

void input(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << "[" << i << "] = ";
		cin >> a[i];
	}
}
void output(int a[], int n) {
	for (int i = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void process(int a[], int b[], int n, int &m) {
	for (int i = 0; i < n; i++) {
		b[m++] = a[i];
	}
}
int main() {
	int a[100], b[100], n, m;
	do {
		cout << "Enter elements in Array A: ";
	    cin >> n;
	}while(n < 0 || n > 100);
	input(a,n);
	do {
      	cout << "\nEnter elemenets in Array B: ";
	    cin >> m;
	}while(m < 0 || m > 100);
	input(b,m);
	cout << "\nAfter adding elements in Array A to tail of Array B: ";
	process(a,b,n,m);
	output(b,m);
	return 0;
} 