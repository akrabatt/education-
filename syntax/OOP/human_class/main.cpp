#include <iostream>
#include <string>
#include "./class_human.h"

int main()
{
    // создадим объект класса человек
    Human *dima = new Human();

    Human *dana = new Human();


    dima -> humans_data_output();
}