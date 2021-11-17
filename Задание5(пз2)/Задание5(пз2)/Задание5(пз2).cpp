#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    int year;
    cout << "Введите год: ";
    cin >> year;
    if (year == 1900 || year == 1912 || year == 1924 || year == 1936 || year == 1948)
    {
        cout << "Год Крысы\n";
    }
    else if (year == 1901 || year == 1913 || year == 1925 || year == 1937 || year == 1949)
    {
        cout << "Год Быка\n";
    }
    else if (year == 1902 || year == 1914 || year == 1926 || year == 1938 || year == 1950)
    {
        cout << "Год Тигра\n";
    }
    else if (year == 1903 || year == 1915 || year == 1927 || year == 1939 || year == 1951)
    {
        cout << "Год Кота\n";
    }
    else if (year == 1904 || year == 1916 || year == 1928 || year == 1940 || year == 1952)
    {
        cout << "Год Дракона\n";
    }
    else if (year == 1905 || year == 1917 || year == 1929 || year == 1941 || year == 1953)
    {
        cout << "Год Змеи\n";
    }
    else if (year == 1906 || year == 1918 || year == 1930 || year == 1942 || year == 1954)
    {
        cout << "Год Лошади\n";
    }
    else if (year == 1907 || year == 1919 || year == 1931 || year == 1943 || year == 1955)
    {
        cout << "Год Козы\n";
    }
    else if (year == 1908 || year == 1920 || year == 1932 || year == 1944 || year == 1956)
    {
        cout << "Год Обезьяны\n";
    }
    else if (year == 1909 || year == 1921 || year == 1933 || year == 1945 || year == 1957)
    {
        cout << "Год Петуха\n";
    }
    else if (year == 1910 || year == 1922 || year == 1934 || year == 1946 || year == 1958)
    {
        cout << "Год Собаки\n";
    }
    else if (year == 1911 || year == 1923 || year == 1935 || year == 1947 || year == 1959)
    {
        cout << "Год Свиньи\n";
    }
    else
    {
        cout << "Неизвестно\n";
    }
    return 0;
}