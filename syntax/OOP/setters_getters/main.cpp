#include <iostream>
#include "./class_point.h"

// функкция которая в качестве аргумента принимает объект
void foo(Point *xxx)
{
    std::cout << "this value from fun: " << xxx->getCoordX() << "\n";
}

int main()
{

    // создадим экземпляр класса
    Point *pt1 = new Point();

    // используем сеттер для занесения значения
    pt1->setCoord(2, 199);

    // используем геттер для получения значения
    pt1->getCoordX();
    pt1->getCoordY();

    // так же можем получить зачения и занести его в переменную
    int for_getter_x = pt1->getCoordX();
    int for_getter_y = pt1->getCoordY();

    // выведем значение
    std::cout << "it's x: " << for_getter_x << "\n";
    std::cout << "it's y: " << for_getter_y << "\n";

    // так же мы можем передавать объекты в качестве аргументов в сторонные функции
    foo(pt1);
}
