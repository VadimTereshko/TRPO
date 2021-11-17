#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int x, y = 2;
    cout << "Введите трехзначное число = ";
    cin >> x;
    if (x % y == 1)
    {
        cout << "Число нечетное";
    }
    if (x % y == 0)
    {
        cout << "Число четное";
    }
    return 0;
}