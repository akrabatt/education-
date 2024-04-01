#include <iostream>
#include "test_headder.h"   //
VECTOR tag_vector = {
    .x = 1.3,
    .y = 2.5
};

int main() {

    double ar [10]; //создадим массив 


/* можно присвоить так указателю адрес структуры */
    // VECTOR *ptr;    //создаем указатель на тип
    // ptr = &tag_vector;  //указываем на структуру


/* а можно это сделать так короче */
    VECTOR *ptr = &tag_vector;  //присваиваем указателю адрес структуры в более коротком виде
    
    ptr->y = ptr->y + 5;    //сделаем арифметическую операция для теста

    std::cout << ptr->x << std::endl;   //выводим 
    std::cout << ptr->y << std::endl;   //выводим 

    ptr->y = ptr->y + ptr->x;   //сделаем еще одну арифметическую операцию
    
    std::cout << ptr->y << std::endl;   //выводим 
}
