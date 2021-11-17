# include <iostream>
#include <ctime>

using namespace std;

int main()
{
	setlocale(LC_ALL, "RUS");
	srand(time(NULL));
	int ROW, COL;
	cout << "Введите количество строк n" << endl; cin >> ROW;
	cout << "Введите количество столбцов k" << endl; cin >> COL;
	int** a = new int* [ROW];
	for (int i = 0; i < ROW; i++)
	{
		a[i] = new int[COL];
	}
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			a[i][j] = rand() % 100;
		}
	}
	cout << "Матрица: " << endl;
	for (int i = 0; i < ROW; i++)
	{
		for (int j = 0; j < COL; j++)
		{
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	delete[]a;
}