#include <iostream>
#include "studs.h"  //подключим хеддр со структурой

STUDENT student_[3];   //создадим массив структур

int main() {

    STUDENT *ptr_1 = student_;    //создадим указатель на массив структур

    /* заполним некоторые данные */
    // ptr_1->NAME = "dima";
    // ptr_1->GROUP = 1122;
    // ptr_1->SES[0] = 5;
    // ptr_1->mid = 10;
    // std::cout << ptr_1->mid << std::endl;
    std::cout << sizeof(student_)/sizeof(student_[0]) << std::endl;


    std::cout << sizeof(ptr_1->SES)/sizeof(ptr_1->SES[0]) << std::endl; //тестовая строчка, выводит количество элементов в массиве где надо будет проставить оценки 

    /* НАЧИНАЕМ ЗАПОЛНЕНИЕ ИНФОРМАЦИИ О СТУДЕНТАХ */
    for(ptr_1 = &student_[0]; ptr_1 < student_ + sizeof(student_)/sizeof(student_[0]); ptr_1++) {     //начинаем цикл заполнения информации

        /* ИМЯ СТУДЕНТА */
        std::cout << "input student's name: ";
        std::cin >> ptr_1->NAME;
        std::cout << std::endl;

        /* НОМЕР ГРУППЫ СТУДЕНТА */
        std::cout << "input student's group number: ";
        std::cin >> ptr_1->GROUP;
        std::cout << std::endl;

        /* теперь нам необходимо запустить вложенный цикл для ввода успеваемости студента */
        for (int i = 0; i != sizeof(ptr_1->SES)/sizeof(ptr_1->SES[0]); i++) {
            std::cout << "input " << i+1 << "-th subject's mark: ";
            std::cin >> ptr_1->SES[i];
            std::cout << std::endl;
            ptr_1->mid += ptr_1->SES[i];
        }
        ptr_1->mid /= sizeof(ptr_1->SES)/sizeof(ptr_1->SES[0]);   //здесь вычисляем срдний бал студента 
        std::cout << "mid mark: " << ptr_1->mid << std::endl << std::endl;
    }

    /* ТЕПЕРЬ ВЫПОЛНИМ ПУЗЫРЬКОВУЮ СОРТИРОВКУ С ПОМОЩЬЮ SWAP*/
     for (int i = 0; i < sizeof(student_)/sizeof(student_[0]) - 1; i++) {      //тело основного цикла  обязательно -1 
        for (int j = 0; j < sizeof(student_)/sizeof(student_[0]) - 1; j++) {     //тело подцикла    обязательно -1
            if (student_[j].GROUP > student_[j+1].GROUP) {    //если элемент массива больше чем справа стоящий от него, то...
                std::swap (student_[j], student_[j+1]);     //применяем комманду swap которая менят местами 
            }
        }
    }
    
    ptr_1 = &student_[0];   //ставим на начало
    for (ptr_1 = &student_[0]; ptr_1 < student_ + sizeof(student_)/sizeof(student_[0]); ptr_1++) {      //выведем все 
        if(ptr_1->mid >= 4.0) {
            std::cout << "name: " << ptr_1->NAME << std::endl;
            std::cout << "group: " << ptr_1->GROUP << std::endl;
            std::cout << "mid mark: " << ptr_1->mid << std::endl;
            std::cout << std::endl;
        }
    }
}