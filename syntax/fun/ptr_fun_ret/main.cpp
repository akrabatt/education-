#include <iostream>

extern int incr(int *a, int *b, int *c);    //объявим внешнюю функцию

int main()
{
    int r = 1;  //создадим переменную
    int h = 20;
    int z= 8;

    incr(&r, &h, &z);   //передадим в функцию адресс на переменную

    std::cout << r << std::endl;    
    std::cout << h << std::endl;    
    std::cout << z << std::endl;    
}