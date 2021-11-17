#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int month;
    cout << "Введите номер месяца: ";
    cin >> month;
    switch (month)
    {
    case 1:
        cout << "Зима\n";
        break;
    case 2:
        cout << "Зима\n";
        break;
    case 3:
        cout << "Весна\n";
        break;
    case 4:
        cout << "Весна\n";
        break;
    case 5:
        cout << "Весна\n";
        break;
    case 6:
        cout << "Лето\n";
        break;
    case 7:
        cout << "Лето\n";
        break;
    case 8:
        cout << "Лето\n";
        break;
    case 9:
        cout << "Осень\n";
        break;
    case 10:
        cout << "Осень\n";
        break;
    case 11:
        cout << "Осень\n";
        break;
    case 12:
        cout << "Зима\n";
        break;
    default:
        cout << "Ошибка\n";
    }
    return 0;
}