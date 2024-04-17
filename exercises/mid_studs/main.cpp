#include <iostream>
#include "str_stud.h"

extern void add_stud(struct STUD *std); // объявим внешнюю функцию по заполнению данных о студентах

STUD student_g1[3]; // создадим переменную структуры
STUD student_g2[3];

int main()
{
    add_stud(student_g1);
    add_stud(student_g2);
}