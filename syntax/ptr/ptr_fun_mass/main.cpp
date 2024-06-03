// здесь мы рассмотрим указатель на массив фукнций
#include <iostream>

// для начала создадим фукнции с выполнение различных операций
// суммирование
int add(int a, int b)
{
    return a + b;
}

// вычитание
int sub(int a, int b)
{
    return a - b;
}

// умножение
int mul(int a, int b)
{
    return a * b;
}

// массив указателей на функции
int (*ptr_on_fun[])(int a, int b) = {add, sub, mul};

int main()
{
    // переменны для передачи их в функцию
    int x = 8;
    int y = 9;

    // создадим переменную для передачи в нее резульата функции
    int result = ptr_on_fun[2](x, y); // выбираем функцию от 0 до 2
    std::cout << result;              // выведем результат
}