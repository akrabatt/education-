#include <iostream>

extern void incr(int *a);    //объявим внешнюю функцию

int main()
{
    int a = 1;  //создадим переменную

    incr(&a);   //передадим в функцию адресс на переменную

    std::cout << a << std::endl;    
}