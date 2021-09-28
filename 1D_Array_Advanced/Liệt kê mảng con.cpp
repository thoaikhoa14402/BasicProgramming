// Liệt kê mảng con trong mảng cha
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

void subArray(int a[], int n) {
// vtbd là vị trí ban đầu, slpt: số lượng phần tử  
    for (int vtbd = 0; vtbd < n; vtbd++) {
        for (int slpt = 1; vtbd + slpt <= n; slpt++) {
            // 1 dòng for tương ứng với 1 mảng con
            for (int i = vtbd; i < slpt + vtbd; i++) {
                cout << a[i] << " ";
            }
            cout << endl; 
        }
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
	cout << "\nSub Array of A: " << endl;
    subArray(a,n);
	return 0;
}
;