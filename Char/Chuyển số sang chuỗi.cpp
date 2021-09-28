#include<iostream>
#include<string.h>
#include<math.h>
using namespace std;

int Count(int n) {
    int count = 0;
    while(n != 0) {
        n/=10;
        count++;
    }
    return count;
}

char *convert(int n) {
    char *s = new char;
    if (n == 0) {
        s[0] = '0';
        return nullptr;
    }
    
    int rem = 0;
    int i = 0;
    int temp = 0;
    temp = Count(n);
    while(temp != 0) {
        temp--;
        rem = n / pow(10,temp);
        s[i] = rem + '0';
        i++;
        n = n % int(pow(10,temp));
    }
    s[i+1] = n;
    s[i+2] = '\0';
    return s;
}
int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;
    cout << "Convert integer number to string: " << endl;
    char *s = convert(n);
    if (s == nullptr) cout << '0';
    else {
        for (int i = 0; i < strlen(s); i++) {
         cout << s[i];
        }
    }
    return 0;
}