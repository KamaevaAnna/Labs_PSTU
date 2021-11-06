#include <iostream>
using namespace std;
int main()
{
    setlocale(LC_ALL, "rus");
    int x, a, b, c;
    do
    {
        cout << "Введите трехзначное число: ";
        cin >> x;
        while ((x < 100) || (x > 999))
        {
            cout << "Введено не трехзначное число. Введите трехзначное число: ";
            cin >> x;
        }
        a = x / 100;
        b = (x / 10) % 10;
        c = x - a * 100 - b * 10;
        if ((a == b) || (a == c) || (b == c))
            cout << "Введено неправильное число. ";
    } while ((a == b) || (a == c) || (b == c));
    cout << "\nВсе возможные последовательности цифр: ";
    cout << a << b << c << " " << a << c << b << " " << b << a << c << " " << b << c << a << " " << c << a << b << " " << c << b << a << " ";
    if ((a > b) && (a > c))
    {
        if (b > c)
            cout << "\nНаибольшее число: " << a << b << c;
        else
            cout << "\nНаибольшее число: " << a << c << b;
    }
    if ((b > a) && (b > c))
    {
        if (a > c)
            cout << "\nНаибольшее число: " << b << a << c;
        else
            cout << "\nНаибольшее число: " << b << c << a;
    }
    if ((c > a) && (c > b))
    {
        if (a > b)
            cout << "\nНаибольшее число: " << c << a << b;
        else
            cout << "\nНаибольшее число: " << c << b << a;
    }
    return 0;
}