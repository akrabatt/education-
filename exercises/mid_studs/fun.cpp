#include <iostream>
#include "str_stud.h"

/* создаем функцию с указателем на структуру и заполняем в ней инормацию про студентов */
void add_stud(struct STUD *std) // будем передавать в функцию указатель на структуру
{
    for (int i = 0; i < sizeof(std) / sizeof(std[0]) - 1; i++) // тут мы запускаем цикл по заполнению структуры (обязательно -1)
    {
        std::cout << "input students name" << std::endl;
        std::cin >> std->NAME; // заполняем имя студента

        /* далее запускаем цикл по заполнению массива с оценками студента в структуре */
        for (size_t i = 0; i < count; i++)
        {
            /* code */
        }
        
    }
}