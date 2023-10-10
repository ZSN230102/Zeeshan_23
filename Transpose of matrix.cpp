#include<iostream>
using namespace std;
int main()
{
	int a[10][10], transpose[10][10], row, column;
	cout << "Enter rows : ";
	cin >> row;
	cout << "Enter column : ";
	cin >> column;
	for (int i = 0; i < row;i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << "Enter a[" << i + 1 << "]" << "[" << j + 1 << "] : ";
			cin >> a[i][j];
			cout << "\n";
		}
	}
	cout << "Arrays Elements" << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << a[i][j]<<" ";
		}
		cout << endl << endl;
	}
	cout << "Transpose of matrix : " << endl;
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			transpose[j][i] = a[i][j];
		}
	}
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; j < column; j++)
		{
			cout << transpose[j][i] << " ";
		}
		cout << endl << endl;
	}


	system("pause");
	return 0;
}