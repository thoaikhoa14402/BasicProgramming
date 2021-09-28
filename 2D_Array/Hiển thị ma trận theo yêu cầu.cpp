/*Nhập và hiển thị một ma trận có kích thước là 5x5, trong đó: các phần tử trên đường chéo được 
điền giá trị 0, các phần tử của tam giác dưới đường chéo được điền các giá trị -1, và ở tam giác trên là được điền với các giá trị 1.*/
#include<iostream>
using namespace std;
#define MAX 5
int a[MAX][MAX];

void process() {
    for (int i = 0; i < 5; i++)
        for (int j = 0; j < 5; j++) {
            if (i == j) a[i][j] = 0; 
            else if (i > j) a[i][j] = -1;
            else a[i][j] = 1; 
        }
}

void output() {
    for (int i = 0; i < 5; i++) { 
        for (int j = 0; j < 5; j++) {
            if (a[i][j] >= 0) cout << " "; // lệnh này để canh cho thẳng hàng :D
            cout << a[i][j] << "\t";
        }
        cout << "\n";
    }
}
int main()
{
    process();
    output();
    return 0;
}