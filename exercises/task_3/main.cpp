#include <iostream>
#include "studs.h"  //подключим хеддр со структурой

STUDENT student_[9];   //

int main() {

    STUDENT *ptr = student_;    //создадим указатель на массив структур

    /* заполним некоторые данные */
    // ptr->NAME = "dima";
    // ptr->GROUP = 1122;
    // ptr->SES[0] = 5;

    std::cout << sizeof(ptr->SES)/sizeof(ptr->SES[0]) << std::endl; //тестовая строчка, выводит количество элементов в массиве где надо будет проставить оценки 

    for(ptr = &student_[0]; ptr < student_ + sizeof(student_)/sizeof(student_[0]); ptr++) {     //начинаем цикл заполнения информации

        /* заполняем имя студента */
        std::cout << "input student's name: ";
        std::cin >> ptr->NAME;
        std::cout << std::endl;

        /* заполняем номер группы студента */
        std::cout << "input student's group number: ";
        std::cin >> ptr->GROUP;
        std::cout << std::endl;

        /* теперь нам необходимо запустить вложенный цикл для ввода успеваемости студента */
        for (int i = 0; i != sizeof(ptr->SES)/sizeof(ptr->SES[0]); i++) {
            std::cout << "введите оценку за " << i << "-й предмет: ";
            std::cin >> ptr->SES[i];
            std::cout << std::endl;
        }
        
        
    }
}