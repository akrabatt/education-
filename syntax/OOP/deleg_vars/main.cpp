#include <iostream>
#include "./class_point.h"

int main()
{
    // создадим конструктор кторый может делегировать перменные
    Point *p1 = new Point(19, 23);
    // теперь выведем их 
    p1 -> Get_x_y();

    // а теперь изменим значения через интерфейс
    p1 -> SetCoord(91, 32);
    // а теперь выведем их еще раз
    p1 -> Get_x_y();

    delete(p1);
}