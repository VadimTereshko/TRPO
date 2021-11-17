#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int x, a, b, c;
    float y;
    cout << "Введите трехзначное число = ";
    cin >> x;
    a = x / 100;
    b = (x - a * 100) / 10;
    c = x - a * 100 - b * 10;
    y = (a + b + c) / 3.;
    cout << "Среднее арифметическое чисел равно = " << y << endl;
    return 0;
}
