/* тут мы рассмотрим тернарный оператор */
#include <iostream>

int main()
{
    /* переменные для теста */
    int a = 1;
    int b = 2;

    int result = a > b ? a : b;       // сам тернарный оператор
    std::cout << result << std::endl; // вывод
}