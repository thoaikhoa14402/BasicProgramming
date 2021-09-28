#include <iostream>
using namespace std;
int main() {
	int n;
	cin >> n;
	int k = 1;
	int temp;
	while (k <= n / 2) {
		int temp2 = n;
		if (temp2 % k == 0) {
			temp = temp2 / k;
		}
		else {
			temp = (temp2 / k) + 1;
		}
		int temp3 = temp;
		while (temp3 > 1) {
			while (temp > 1) {
				cout << k << "+";
				temp2 -= k;
				temp--;
			}
			cout << temp2 << endl;
			temp2 = n;
			temp3 -= 1;
			temp = temp3;
		}
		k++;
	}
	cout << n << endl;
	return 0;
}