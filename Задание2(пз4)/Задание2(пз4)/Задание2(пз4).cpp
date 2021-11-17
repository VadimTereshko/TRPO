#include <iostream>
#include <ctime>
using namespace std;
int main()
{
	srand(time(NULL));
	setlocale(LC_ALL, "RUS");
	int n, sum;
	cout << "Введите кол-во элементов массива " << endl; cin >> n;
	int* arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100 - 50;
	}
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
	sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum = sum + arr[i];
	}
	cout << "Сумма элементов массива равна = " << sum << endl;
	cout << "Среднее значение эл-ов массива равно = " << sum / n << endl;
	delete[]arr;
}