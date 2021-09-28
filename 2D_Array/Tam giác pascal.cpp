/* Viết chương trình C++ để nhập và hiển thị tam giác Pascal. */
#include<iostream>
using namespace std;
int combination(int n, int k) {
    int C[100][100];
    for (int i = 0; i <= n; i++) {
        C[i][0] = 1;
        C[i][i] = 1;
        for (int j = 1; j < i; j++) {
            C[i][j] = C[i - 1][j] + C[i - 1][j - 1];
        }
    }
    return C[n][k];
}
void drawPascalTriangle() {
    for (int i = 0; i <= 5; i++) {
        for (int j = 0; j <= i; j++) {
            cout << combination(i, j) << " ";
        }
        cout << endl;
    }
}
int main()
{
    drawPascalTriangle();
    return 0;
}