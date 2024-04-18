#include <iostream>
#include "str_stud.h"

extern void add_stud(struct STUD *std); // объявим внешнюю функцию по заполнению данных о студентах
extern void mid_range(struct STUD *std);

STUD student_g1[3]; // создадим переменную структуры
STUD student_g2[3];

int main()
{
    /* вызываем функции на заполнение массивов структу */
    add_stud(student_g1);
    // add_stud(student_g2);

    /* вызываем функции на вычисление среднего балла по группе */
    mid_range(student_g1);
    mid_range(student_g2);
}