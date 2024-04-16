#include <iostream>

/* здесь мы объявим наши внешние функции из другого файла */
extern void fillArray(int arry[], const int size);
extern void outArray(int arry[], const int size);

int main()
{
    const int RAZM = 10; // создадим константу, которая будет определять размер массива
    int mass[RAZM];      // создадим массив

    fillArray(mass, RAZM); // запускаем функцию заполнения массива
    outArray(mass, RAZM);  // запускаем функцию вывода в консоль элементов массива
}