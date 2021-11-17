#include <iostream>
#include "math.h"

using namespace std;

int main() {
	setlocale(LC_ALL, "RUS");
	int a, b, c, d;
	cout << "Введите высоту: ";
	cin >> a;
	cout << "Введите ширину: ";
	cin >> b;
	if (a > 0 && b > 0)
	{
		c = (a * 2) + (b * 2);
		cout << "Периметр равен = " << c << endl;
		d = a * b;
		cout << "Площадь равна = " << d << endl;
	}
	else if (a < 0 || b < 0)
	{
		cout << "Ошибка! ";
	}

	return 0;
}