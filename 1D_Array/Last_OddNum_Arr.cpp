#include <iostream>
using namespace std;

void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\na[" << i << "]=";
        cin >> a[i];
    }
}
void lastOddNum(int a[], int n)
{
    int count = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] % 2 != 0)
        {
            cout << "Phan tu le cuoi cung la: " << a[i];
            ++count;
            break;
        }
    }
    if (count == 0) cout << "Khong co phan tu le";
}
int main()
{
    int a[100], n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    cout << "Nhap mang: ";
    input(a, n);
    lastOddNum(a, n);
    return 0;
}