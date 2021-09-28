#include <iostream>
using namespace std;

void input(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "\nNhap phan tu a[" << i << "]=";
        cin >> a[i];
    }
}
int maxElement(int a[], int n)
{
    int max = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    return max;
}

int minElement(int a[], int n)
{
    int min = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
        }
    }
    return min;
}
int main()
{
    int a[100], n;
    cout << "Nhap so phan tu mang: ";
    cin >> n;
    input(a, n);
    cout << "Doan [a,b] tat ca cac phan tu mang la: " << "[" << minElement(a, n) << ";" << maxElement(a, n) << "]";
    return 0;
}