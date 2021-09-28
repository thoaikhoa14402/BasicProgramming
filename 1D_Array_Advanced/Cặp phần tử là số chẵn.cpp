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
	for (int i  = 0; i < n; i++) {
		cout << a[i] << " ";
	}
}

void Process(int a[], int n, int &count)
{
	cout << "\nThe pairs of adjacent even number: \n";
	for (int i = 0; i < n-1; i++)
	{
		if (a[i] % 2 == 0 && a[i + 1] % 2 == 0)
		{
			cout << "(" << count++ << "): " <<  a[i] << "-" << a[i + 1]  << endl;
		}
	}
}

int main() {
	int a[100], n = 0, count = 0;
	do {
		cout << "Enter elements in array A: ";
		cin >> n;
	}while(n < 0 || n > 100);
	input(a,n);
	cout << "Array A is created: " << endl;
	output(a,n);
	Process(a,n,count);
	if(count == 0) cout << "\nCannot find any pairs of adjacent even number";
	return 0;
}
