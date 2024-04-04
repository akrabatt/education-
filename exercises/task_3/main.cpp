#include <iostream>
#include "studs.h"  //подключим хеддр со структурой

STUDENT student_[9];   //

int main() {

    STUDENT *ptr = student_;    //создадим указатель на массив структур

    ptr->NAME = "dima";
}