#include <iostream>
#include <stdio.h>
#include <string>
#include <clocale>

using namespace std;



void convertNumToString(double fractionalNumber) {
    //system("cls");
    cout << "Введите дробное число для конвертации в строку." << endl;
    cin >> fractionalNumber;
    string s = to_string(fractionalNumber);
    cout << "Конечная строка = " << "'" << s << "'" << endl;
}

void convertNumToString(int num) {
    //system("cls");
    cout << "Введите целое число для конвертации в строку." << endl;
    cin >> num;
    cout << "Конечная строка = " << "'" << scientific << num << "'" << endl;
}

void findSameArrayValues(int a[3][3]) {
    //system("cls");
    a[3][3];
    int searchNumber = 0, count = 0, n = 0, m = 0, i = 0, j = 0;
    cout << "Введите размеры массива - [n] строк, [m] столбцов." << endl;
    cin >> n >> m;

    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            cout << "Введите значения массива. Значение[" << i + 1 << "],[" << j + 1 << "] = ";
            cin >> a[i][j];
        }
    }

    cout << "Введите число, количество совпадений которого вы хотите найти." << endl;
    cin >> searchNumber;

    cout << "Ваш массив:" << endl;
    for (i = 0; i < n; ++i) {
        for (j = 0; j < m; ++j) {
            cout << a[i][j] << " ";
            if (searchNumber == a[i][j]) {
                count++;
            }
        }
        cout << "\n";
    }

    cout << "Число повторений числа " << searchNumber << " = " << count << endl;
}

void findSameArrayValues(string b) {
    char x;
    int count = 0;
    cout << "Введите строку." << endl;
    cin >> b;
    cout << "Введите искомый символ." << endl;
    cin >> x;

    for (int i = 0; b[i] != '\0'; ++i) {
        if (x == b[i]) {
            ++count;
        }
    }
    cout << "Количество буквы " << x << " в строке = " << count;
}

int main()
{
    setlocale(LC_ALL, "ru");
    int defineFunction, defineReload, defineConvertation, num = 0, a[3][3];
    string b;
    double fractionalNumber = 0;
    cout << "Какой функцией вы хотите воспользоваться?" << endl;
    cout << "Функция перевода числа в строку - введите 1." << endl;
    cout << "Функция поиска встреч в массиве заданного числа - введите 2." << endl;
    cin >> defineFunction;
    switch (defineFunction)
    {
    case 1:
        cout << "Для дробных чисел или целых?" << endl;
        cout << "Функция конвертации целых чисел - введите 1." << endl;
        cout << "Функция конвертации дробных чисел - введите 2." << endl;
        cin >> defineConvertation;
        switch (defineConvertation) {
        case 1:
            convertNumToString(num);
            break;
        case 2:
            convertNumToString(fractionalNumber);
            break;
        default:
            cout << "Вы не выбрали нужное действие функции. Введите еще раз." << endl;
            main();
            break;
        }
        break;
    case 2:
        cout << "Для строк или чисел?" << endl;
        cout << "Функция поиска встреч в массиве заданной буквы - введите 1." << endl;
        cout << "Функция поиска встреч в массиве заданного числа - введите 2." << endl;
        cin >> defineReload;
        switch (defineReload) {
        case 1:
            findSameArrayValues(b);
            break;
        case 2:
            findSameArrayValues(a);
            break;
        default:
            cout << "Вы не выбрали нужное действие функции. Введите еще раз." << endl;
            main();
            break;
        }
        break;
    default:
        cout << "Вы не выбрали функцию. Введите еще раз." << endl;
        main();
        break;
    }
    return 0;
}