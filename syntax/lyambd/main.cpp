#include <iostream>
#include <functional>

int main()
{
    /* создадим лямбду-функцию */
    std::function<int(int, int)> sum = [](int a, int b) -> int
    {
        return a + b;
    };

    /* создадим переменные */
    int x = 5;
    int y = 10;

    int z = 15;
    int w = 24;

    /* вызовим лямбда функцию */
    int result = sum(x, y);

    int result2 = sum(z, w);
    /* выведем результаты */
    std::cout << result << std::endl;
    std::cout << result2 << std::endl;

    /* создадим лямбду с захватом */
    std::function<int(int)> sum_lambda = [&x, &y](int s) -> int { // передаем в нее два захваченных значения и одно которое надо будет ввести
        return x + y + s;               // возвращаемое выражение
    };

    std::cout << sum_lambda(50) << std::endl; // выводим значение

    return 0;
}
