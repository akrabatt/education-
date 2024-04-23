#include <iostream>
#include "struct.h"
#include <vector>

VECT vect;

int main()
{
    /* создадим вектор структур, сама структура в другом файле */
    std::vector<VECT> vect;                                    // создали вектор
    vect.resize(3);                                            // дадим размер вектору
    std::cout << "size: " << vect.size() << std::endl;         // узнаем размер
    std::cout << "capacity: " << vect.capacity() << std::endl; // узнаем емкость
    vect.push_back({1, 2, 10});                                // дадим первой структуре значения
    vect.resize(4);                                            // изменим размер вектора
    std::cout << "size: " << vect.size() << std::endl;         // узнаем размер
    std::cout << "capacity: " << vect.capacity() << std::endl; // узнаем емкость
    vect.resize(20);                                           // дадим другое значение вектору
    /* поприсваиваем значения таким способом */
    vect[0].a = 10;
    vect[1].a = 20;
    vect[2].a = 20;
    vect[3].a = 20;
    vect[4].a = 20;
    vect[5].a = 20;
    vect[6].a = 20;
    vect[7].a = 25;
    vect[8].a = 20;

    /* выведем значения таким способом */
    // std::cout << vect[0].a << std::endl;
    // std::cout << vect[1].a << std::endl;
    // std::cout << vect[2].a << std::endl;

    /* узнаем емкость и размер вектора */
    std::cout << "size: " << vect.size() << std::endl;         // узнаем размер
    std::cout << "capacity: " << vect.capacity() << std::endl; // узнаем емкость

    /* назначим указатель вектору */
    VECT *ptr = &vect[0]; // соблюдаем именно такой синтаксис

    /* выведем все значения */
    for (int i = 0; i != vect.size(); ++i)
    {
        std::cout << ptr->a << std::endl;
        ptr++;
    }
}