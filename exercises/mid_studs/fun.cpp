#include <iostream>
#include "str_stud.h"

/* создаем функцию с указателем на структуру и заполняем в ней инормацию про студентов */
void add_stud(STUD *std) // будем передавать в функцию указатель на структуру
{
    /* ниже в цикле обязательно использовать -1 так как sizeof выдаст колличество элеменотов начиная с 1 */
    for (int i = 0; i < sizeof(std) - 1; i++) // тут мы запускаем цикл по заполнению структуры (обязательно -1 )
    {
        std::cout << "input students name: ";
        std::cin >> std->NAME; // заполняем имя студента

        /* далее запускаем цикл по заполнению массива с оценками студента в структуре */
        for (int j = 0; j < sizeof(std->MARK) / sizeof(std->MARK[0]); j++) // запускаем цикл заполнения (обязательно -1)
        {
            std::cout << "input " << j + 1 << "-th mark: ";
            std::cin >> std->MARK[j]; // тут вставляем оценку
            std::cout << std::endl;
            std->MID += std->MARK[j]; // прибавляем для расчета средней оценки студента
        }
        std->MID /= sizeof(std->MARK) / sizeof(std->MARK[0]); // расчитываем среднюю оценку студента
        std++;                                                // переходим к следующему студенту
    }
}

/* функция для расчета среднего балла по группе и выводе студентов которые имеют средний балл выше  */
void mid_range(STUD *std) // будем так же передавать в функцию уже заполненный массив со студентами
{
    STUD *start_position = std; // сохраняем в дополнительную переменную начальный адресс чтоб после цикла можно было откатиться
    float mid_range_groupe;     // переменная для среднего балла по группе
    /* начинаем заполнять переменнную средними оценками ученикоп группы */
    for (int i = 0; i < sizeof(std) - 1; i++) // запускаем цикл
    {
        mid_range_groupe += std->MID; // прибавляем к переменной
        std++;                        // переходим к следующему студенту
    }

    /* промежуточные вычисления */
    mid_range_groupe /= sizeof(std) - 1;                               // вычисляем среднее по группе
    std::cout << "groupe mid mark: " << mid_range_groupe << std::endl; // выведем
    std = start_position;                                              // откатываем наш указатель на начало массива

    /* цикл по выводу студентов у которых средняя оценка выше или равна средней оценке по группе */
    for (int i = 0; i < sizeof(std) - 1; i++) // запускаем цикл пребора студентов
    {
        if (std->MID >= mid_range_groupe) // сравниваем средний бал студента с средним баллом по группе
        {
            std::cout << "student: " << std->NAME << std::endl; // выводим студента который соответствует условию
            std::cout << "sudent's mid mark: " << std->MID << std::endl;
            std::cout << std::endl;
        }
        std++; // переходим к следующему студенту
    }
}