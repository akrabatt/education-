#include <iostream>
#include <string>
#include "./class_human.h"

int main()
{
    // вызов делегирующего конструктора
    Human *dima = new Human("Dimon", 24);

    // вызов просто контсруктора 
    Human *oleg = new Human("Oleg");

    delete (dima);
    delete (oleg);
}