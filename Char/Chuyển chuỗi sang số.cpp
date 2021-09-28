#include<iostream>
#include<string.h>
using namespace std;

int convert(char s[]) {
    int val = 0;
    for (int  i = 0; i < strlen(s); i++) {
        val = val * 10 + (s[i] - '0');
    }
    return val;
}
int main() {
    char s[100];
    cin >> s;
    cout << "Convert string to integer number: " << endl;
    cout << convert(s);
    return 0;
}