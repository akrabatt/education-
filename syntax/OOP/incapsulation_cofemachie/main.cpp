// пример использования инкапсуляции
#include <iostream>
#include "./class_coffegrinder.h"

int main()
{
    // создадим экземпляр объекта
    Сoffegrinder *machin1 = new Сoffegrinder();

    machin1 -> Start();


    delete(machin1);
}