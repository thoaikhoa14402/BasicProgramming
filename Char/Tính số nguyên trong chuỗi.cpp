#include<iostream>
#include<string.h>
using namespace std;

void input(char* s) {
	cout << "Enter string: ";
	cin.getline(s, 100);
}

int tongSoNguyen(char* s) {
	int sum = 0, num = 0;
	for (int i = 0; i <= strlen(s); i++) {
		if (*(s + i) >= '0' && *(s + i) <= '9') {
			num = num * 10 + (*(s + i) - '0');
		}
		else sum += num, num = 0;
	}
	return sum;
}
int main() {
	char* s = new char[100];
	input(s);
	cout << "Sum is: " << tongSoNguyen(s);
	return 0;
}