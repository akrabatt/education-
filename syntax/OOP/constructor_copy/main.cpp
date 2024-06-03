#include <iostream>
#include <memory>
#include "./class_point.h"

int main()
{
    // создаем конструктор по умолчанию
    std::unique_ptr<Point> p1 = std::make_unique<Point>();

    // создадим конструктор с инициализацией переменных
    std::unique_ptr<Point> p2 = std::make_unique<Point>(3, 18);

    // воспользуемся геттером объекта
    p2->GetVars();

    // копируем конструктор
    std::unique_ptr<Point> p3 = std::make_unique<Point>(p2);

    // воспользуемся геттером для скопированного конструктора
    p3 -> GetVars();
}