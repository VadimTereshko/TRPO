#include <iostream>
#include <ctime>
#include <stdlib.h>
#include <algorithm>
using namespace std;
int main()
{
    setlocale(LC_ALL, "RUS");
    srand(time(0));
    int n;
    cout << "Введите кол-во элементов " << endl;
    cin >> n;
    int* Mas = new int[n];
    cout << "исходный Массив: " << endl;;
    for (int i = 0; i < n; i++)
    {
        Mas[i] = rand() % 10 - 5;
        cout << Mas[i] << "\t";
    }
    cout << endl;
    sort(Mas, Mas + n);
    cout << "Медиана массива: " << Mas[n / 2] << endl;
    int k = 0;
    cout << "Преобразованный массив:" << endl;
    for (int i = 0; i < n - k; i++)
    {
        for (int c = i + 1; c < k - n; c++)
        {
            while (Mas[i] == Mas[c])
            {
                for (int f = c; f < n - k; f++)
                {
                    Mas[f] = Mas[f + 1];
                }
                k += 1;
            }
        }
        cout << Mas[i] << "\t";
    }
    return 0;
}