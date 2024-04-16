#include <iostream>

int main()
{

    int size = 5;             // создадим переменную которой будем задавать размер динамического массива
    int *ptr = new int[size]; // создадим указатель на динамический массив

    // std::cout << "arr size: " << sizeof(ptr)/sizeof(ptr[0]) << std::endl;

    /* теперь здесь заполним динамический массив */
    for (int i = 0; i < size; i++)
    {
        ptr[i] = i + 1;                                      // заплняем значениями
        std::cout << ptr[i] << "\t" << &ptr[i] << std::endl; // выводим значение и его адрес
    }
    std::cout << std::endl;

    /* создадим новый динамический массив */
    int *ptr_new = new int[size];

    /* скопируем элементы из старого в новый */
    for (int i = 0; i < size; i++)
    {
        ptr_new[i] = ptr[i];                                         // копируем
        std::cout << ptr_new[i] << "\t" << &ptr_new[i] << std::endl; // выводим значение и его адрес
    }

    delete[] ptr;
    delete[] ptr_new;
}