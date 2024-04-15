#include <iostream>

int main() {

    int size;  //переменная для работы с размером массива


    std::cout << "input array size: " << std::endl;
    std::cin >> size;
    std::cout << std::endl;

    int *ptr = new int[size];   //создадим указатель на массив 

    /* теперь давайте заполним этот массив */
    for (int i = 0; i < size; i++) {
        ptr[i] = i + 1;     //заполним массив
        std::cout << ptr[i] << "\t" << ptr + i << std::endl;    //выведем каждый эллемент массива и его адреса
    }

    std::cout << std::endl  << ptr[2] << "\t" << &ptr[2] << std::endl;  //выведем какой нибудь элемент из этого массива


    delete [] ptr;  //обязательно удалим массив очистим память
}