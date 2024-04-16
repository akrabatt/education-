#include <iostream>

int main() {

    int size = 5;   //создадим переменную которой будем задавать размер динамического массива
    int *ptr = new int[size];   //создадим указатель на динамический массив

    /* теперь здесь заполним динамический массив */
    for(int i = 0; i < 5; i++) {    
        ptr[i] = i + 1; //заплняем значениями 
        std::cout << ptr[i] << "\t" << &ptr[i] << std::endl;    //выводим значение и его адрес
    }

    std::cout << std::endl << ptr[3] << "\t" << &ptr[3] << std::endl;    //выведим значение одного из элементов
    delete [] ptr;
}