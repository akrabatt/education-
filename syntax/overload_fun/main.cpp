#include <iostream>

int add(int a, int b) // создадим первую перегруженную функцию
{
    return a + b;
}

double add(double a, double b) // создадим вторую функцию которая будет принимать параметры уже другие
{
    return a + b;
}

int main()
{
    // а теперь вызываем эту функцию и видим какая вызывается функция в зависимости от типа данных параметров
    add(2, 5);
    add(2.8, 3.7);
}