#include <iostream>
#include "str_stud.h"

/* создаем функцию с указателем на структуру и заполняем в ней инормацию про студентов */
void add_stud(STUD *std) // будем передавать в функцию указатель на структуру
{
    for (int i = 0; i < sizeof(std) - 1; i++) // тут мы запускаем цикл по заполнению структуры (обязательно -1)
    {
        std::cout << "input students name: ";
        std::cin >> std->NAME; // заполняем имя студента

        /* далее запускаем цикл по заполнению массива с оценками студента в структуре */
        for (int j = 0; j < sizeof(std->MARK) / sizeof(std->MARK[0]); j++) // запускаем цикл заполнения (обязательно -1)
        {
            std::cout << "input " << j + 1 << "-th mark: ";
            std::cin >> std->MARK[j]; // тут вставляем оценку
            std::cout << std::endl;
        }
        std++;
    }
}