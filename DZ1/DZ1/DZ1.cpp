// DZ1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.

#include <iostream>
#include <ctime>
using namespace std;
const int n = 3;
const int m = 3;

void Array( int A[n][m])
{
	

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "********Первоначальная матрица**********" << "\n";
	for (int k = 0; k < n; k++)
	{
		for (int z = 0; z < m; z++)
		{
			cout << A[k][z] << "\t";
			
		}
		cout << endl;
	}

	int max = A[0][0];
	for (int s = 1; s < n; s++)
		if (max < A[s][s]) max = A[s][s];

	int min = A[0][0];
	for (int t = 1; t < n; t++)
		if (min > A[t][t]) min = A[t][t];

	
	cout << "Максимальный элемент по диагонали в матрице = " << max << "\n";
	cout << "Минимальный элемент по диагонали в матрице = " << min << "\n";

	cout << "***********Отсортированная матрица**************" << "\n";

	for (int e = 0; e < n; e++)
	{
		for (int q = 0; q < m - 1; q++)
		{
			int index = q;
			int minElement = A[e][q];
			for (int p = q; p < m; p++)
			{
				if (minElement > A[e][p])
				{
					index = p;
					minElement = A[e][p];
				}
			}
			swap(A[e][q], A[e][index]);
		}
	}

	
	for (int l = 0; l < n; l++)
	{
		for (int v = 0; v < m; v++)
		{
			cout << A[l][v] << "\t";

		}
		cout << endl;
	}
}
void Array(double A[n][m])
{


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "********Первоначальная матрица**********" << "\n";
	for (int k = 0; k < n; k++)
	{
		for (int z = 0; z < m; z++)
		{
			cout << A[k][z] << "\t";

		}
		cout << endl;
	}

	double max = A[0][0];
	for (int s = 1; s < n; s++)
		if (max < A[s][s]) max = A[s][s];

	double min = A[0][0];
	for (int t = 1; t < n; t++)
		if (min > A[t][t]) min = A[t][t];


	cout << "Максимальный элемент по диагонали в матрице = " << max << "\n";
	cout << "Минимальный элемент по диагонали в матрице = " << min << "\n";

	cout << "***********Отсортированная матрица**************" << "\n";

	for (int e = 0; e < n; e++)
	{
		for (int q = 0; q < m - 1; q++)
		{
			int index = q;
			double minElement = A[e][q];
			for (int p = q; p < m; p++)
			{
				if (minElement > A[e][p])
				{
					index = p;
					minElement = A[e][p];
				}
			}
			swap(A[e][q], A[e][index]);
		}
	}


	for (int l = 0; l < n; l++)
	{
		for (int v = 0; v < m; v++)
		{
			cout << A[l][v] << "\t";

		}
		cout << endl;
	}
}

void Array(char A[n][m])
{


	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cin >> A[i][j];
		}
	}
	cout << "********Первоначальная матрица**********" << "\n";
	for (int k = 0; k < n; k++)
	{
		for (int z = 0; z < m; z++)
		{
			cout << A[k][z] << "\t";

		}
		cout << endl;
	}

	char max = A[0][0];
	for (int s = 1; s < n; s++)
		if (max < A[s][s]) max = A[s][s];

	char min = A[0][0];
	for (int t = 1; t < n; t++)
		if (min > A[t][t]) min = A[t][t];


	cout << "Максимальный элемент по диагонали в матрице = " << max << "\n";
	cout << "Минимальный элемент по диагонали в матрице = " << min << "\n";

	cout << "***********Отсортированная матрица**************" << "\n";

	for (int e = 0; e < n; e++)
	{
		for (int q = 0; q < m - 1; q++)
		{
			int index = q;
			char minElement = A[e][q];
			for (int p = q; p < m; p++)
			{
				if (minElement > A[e][p])
				{
					index = p;
					minElement = A[e][p];
				}
			}
			swap(A[e][q], A[e][index]);
		}
	}


	for (int l = 0; l < n; l++)
	{
		for (int v = 0; v < m; v++)
		{
			cout << A[l][v] << "\t";

		}
		cout << endl;
	}
}

int main()
{
	
	setlocale(0, "");
	
	/*int arrA[n][m];
	 Array(arrA);*/


	 /*double arrB[n][m];
	 Array(arrB);*/

	 char arrC[n][m];
	 Array(arrC);
}