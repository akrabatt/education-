// здесь мы поговорим про модификаторы доступа
#include <iostream>
#include "./class_point.h"

int main()
{

    Point *p1 = new Point();
    p1->print_out();

    delete(p1);
}