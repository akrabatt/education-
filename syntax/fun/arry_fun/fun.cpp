#include <iostream>

/* в этой функции мы будем заполнять массив */
void fillArray(int arry[], const int size)
{
    for (int i = 0; i < size; i++) // запускаем цикл заполнения
    {
        arry[i] = i + 1;
    }
}

/* теперь вторая функция будет нам выводить в консоль элементы массива */
void outArray(int arry[], const int size)
{
    for (int i = 0; i < size; i++) // запускаем цикл вывода
    {
        std::cout << arry[i] << std::endl;
    }
}