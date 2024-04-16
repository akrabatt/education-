#include <iostream>
// #include "fun.h"

extern int fun_sum(int a, int b); // определяем внешнюю функцию

int main()
{
    /* вариан использования функции */
    std::cout << fun_sum(5, 6) << std::endl;

    /* еще вариант использования суммы */
    int b = fun_sum(8, 11);
    std::cout << b << std::endl;


    /* еще вариант использования функции */
    int z = 20;
    int g = 84;

    int k = fun_sum(z, g);
    std::cout << k << std::endl;
}