#include <iostream>

int main()
{

    int size = 5;             // создадим переменную которой будем задавать размер динамического массива
    int size_ext;             // переменная для расширения массива
    int *ptr = new int[size]; // создадим указатель на динамический массив

    /* теперь здесь заполним динамический массив */
    for (int i = 0; i < size; i++) // пускаем цикл на заполнение
    {
        ptr[i] = i + 1;                                      // заплняем значениями
        std::cout << ptr[i] << "\t" << &ptr[i] << std::endl; // выводим значение и его адрес
    }
    std::cout << std::endl;

    size_ext = 5;     // на сколько увеличить массив
    size += size_ext; // увеличили число для размера массива
    /* создадим новый динамический массив */
    int *ptr_new = new int[size]; // создали новый массив в который будем все копировать

    /* скопируем элементы из старого в новый */
    for (int i = 0; i < size; i++) // запускаем цикл копироваия
    {
        ptr_new[i] = ptr[i]; // копируем
    }

    delete[] ptr;
    ptr = ptr_new; // передаем старому указателю новое значение

    std::cout << std::endl;
    /* дополним наш массив новыми значениями */
    for (int i = size - size_ext + 1; i < size; i++)
    {
        ptr[i] = i + 1;
        // if (i == size - 1)
        if (i == size - 1)
        {
            for (int j = 0; j < size; j++)
            {
                std::cout << ptr[j] << "\t" << &ptr[j] << std::endl;
            }
        }
    }

    delete[] ptr_new;
}