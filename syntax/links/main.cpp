#include <iostream>
#include "struct.h"

INTS var;

int main()
{
    int a = 5;    // создадим переменную
    int &ref = a; // создадим ссылку на переменную

    /* а теперь выведем переменную и ссылку */
    std::cout << "int: " << a << std::endl;
    std::cout << "ref: " << ref << std::endl;

    ++ref; // выполним арифметическую операцию с сылкой

    std::cout << "int: " << a << std::endl; // выведем переменную

    /*  пример использования ссылки*/
    int &v = var.c; // присвоем ссылку одно из значений структуры

    v = 10; // присвоим этому значению число через ссылку

    std::cout << "ref v: " << v << std::endl;            // выведем ссылку
    std::cout << "struct var.c: " << var.c << std::endl; // выведем поле структуры

    INTS *ptr = &var;
    std::cout << "ptr: " << ptr -> c << std::endl;
}