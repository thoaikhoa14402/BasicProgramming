
#include <iostream>
using namespace std;

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
void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\na[" << i << "]=";
        cin >> a[i];
    }
}
int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    int a[100];
    cout << "Nhap cac phan tu cua mang: ";
    input(a, n);
    cout << "Cac so nguyen to co trong mang la: " << endl;
    for (int i = 0; i < n; i++)
    {
        if (isPrime(a[i]) == true)
        {
            cout << a[i] << " ";
        }
    }
    return 0;
}

