/*Tính tổng các phần tử lẻ nằm trên đường chéo chính và đường chéo phụ của mảng 2 chiều a[dong][cot].*/
#include<iostream>
#define MAX 50
using namespace std;
void input(int a[MAX][MAX], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << "a[" << i << "][" << j << "]: "; cin >> a[i][j];
		}
	}
}
void output(int a[MAX][MAX], int rows, int cols)
{
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
}

int sumOddElements(int a[MAX][MAX], int rows, int cols) {
	int sum = 0;
	// tổng số lẻ trên đường chéo chính
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i == j)
			{
				if (a[i][j] % 2 != 0) sum += a[i][j];
			}

		}
	}
	// tổng số lẻ trên đường chéo phụ
	for (int i = 0; i < rows; i++)
	{
		for (int j = 0; j < cols; j++)
		{
			if (i + j + 1 == rows)
			{
				if (a[i][j] % 2 != 0) sum += a[i][j];
			}
		}
	}
	return sum;
}

int main()
{
	int a[MAX][MAX], cols = 0, rows = 0;
	do {
		cout << "Enter rows (rows > 0): ";
		cin >> rows;
	} while (rows <= 0);
	do {
		cout << "Enter cols (cols > 0): ";
		cin >> cols;
	} while (cols <= 0);
	cout << "INPUT MATRIX: \n";
	input(a, rows, cols);
	cout << "OUTPUT MATRIX: \n";
	output(a, rows, cols);
	int count = 0, sum = 0;
	cout << "Sum is: "<< sumOddElements(a, rows, cols);
	return 0;
}
