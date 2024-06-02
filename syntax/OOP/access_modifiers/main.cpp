// здесь мы поговорим про модификаторы доступа
#include <iostream>
#include "./class_point.h"

int main()
{

    Point *p1 = new Point();

    p1 -> x = 5;
    p1 -> y = 8;
    p1 -> b = 9;
}