#include <iostream>
#include "test_headder.h"   //

VECTOR tag_vector = {
    .x = 1.3,
    .y = 2.5
};

int main() {

    double ar [10]; //создадим массив 

    VECTOR *ptr;    //создаем указатель на тип
    ptr = &tag_vector;  //указываем на структуру
    ptr->y = ptr->y + 5;    //сделаем арифметическую операция для теста

    for(int i =0; i < sizeof())

    std::cout << ptr->x << std::endl;   //выводим 
    std::cout << ptr->y << std::endl;   //выводим 
}
