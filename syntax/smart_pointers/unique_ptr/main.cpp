#include <iostream>
#include <memory> //для умного указателя
#include "./class_point.h"

int main()
{
    // ниже приведено обычное осздание объекта
    // Point p1(3, 7);

    // а тут приведено создание объекта через умный указатель
    std::unique_ptr<Point> pt = std::make_unique<Point>(3, 4);

    pt -> GetVars();
}