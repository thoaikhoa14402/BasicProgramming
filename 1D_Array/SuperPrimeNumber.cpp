// 6. Vi?t chương trình in ra các số siêu nguyên tố có trong mảng.
#include <iostream>
#include <cmath>
using namespace std;

void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\na[" << i << "]=";
        cin >> a[i];
    }
}
bool isPrime(int n)
{
    if (n <= 1)
    {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int Counting(int n)
{
    if (n < 0) n = -n;
    int dem = 0;
    while (n != 0)
    {
        dem++;
        n /= 10;
    }
    return dem;
}
bool isSuperPrime(int n, int &count)
{
    while (n != 0)
    {
        if (isPrime(n % 10) == false) {
            ++count;
            return false;
        }
        else n /= 10;
    }
    return true;
}


int main()
{
    int n, count = 0;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    int a[100];
    input(a, n);
    cout << "Cac so sieu nguyen to trong mang la: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (isSuperPrime(a[i], count) == true)
        {
            cout << a[i] << " ";
        }
    }
    if (count == 0) cout << "\nKhong co so sieu nguyen to trong mang";
    return 0;
}