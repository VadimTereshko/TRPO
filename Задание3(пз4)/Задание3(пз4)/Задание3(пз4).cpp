#include <iostream>
#include <ctime>
using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int ROW1, COL1, ROW2, COL2;
	cout << "Введите количество строк первой матрицы" << endl; cin >> ROW1;
	cout << "Введите количество столбцов первой матрицы" << endl; cin >> COL1;
	cout << "Введите количество строк второй  матрицы" << endl; cin >> ROW2;
	cout << "Введите количество столбцов второй матрицы" << endl; cin >> COL2;
	if (COL1 != ROW2)
	{
		cout << "Невозможно перемножить матрицу ";
		return 0;
	}
	cout << "Первая матрица: " << endl;
	int** a = new int* [ROW1];
	for (int i = 0; i < ROW1; i++)
	{
		a[i] = new int[COL1];
	}
	for (int i = 0; i < ROW1; i++)
	{
		for (int j = 0; j < COL1; j++)
		{
			a[i][j] = rand() % 5;
		}
	}
	for (int i = 0; i < ROW1; i++)
	{
		for (int j = 0; j < COL1; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	cout << endl;
	cout << "Вторая матрица: " << endl;
	int** b = new int* [ROW2];
	for (int i = 0; i < ROW2; i++)
	{
		b[i] = new int[COL2];
	}
	for (int i = 0; i < ROW2; i++)
	{
		for (int j = 0; j < COL2; j++)
		{
			b[i][j] = rand() % 5;
		}
	}
	for (int i = 0; i < ROW2; i++)
	{
		for (int j = 0; j < COL2; j++)
		{
			cout << b[i][j] << "\t";
		}
		cout << endl;
	}
	cout << "Результирующая матрица: " << endl;
	int** c = new int* [ROW1];
	for (int i = 0; i < ROW1; i++)
	{
		c[i] = new int[COL2];
		for (int j = 0; j < COL2; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < COL1; k++)
				c[i][j] += a[i][k] * b[k][j];
		}
	}
	for (int i = 0; i < ROW1; i++)
	{
		for (int j = 0; j < COL2; j++)
		{
			cout << c[i][j] << " \t";
		}
		cout << endl;
	}
	delete[]a, b, c;
}