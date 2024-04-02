#include <iostream>
#include "var_test.h"

tag_employes employes[4];  //создадим массив стурктур

int main() {

    // employes[2].age = 25;   //добавим в массив какое нибудь значение    
    // std::cout << employes[2].age << std::endl;  //добавим что нибудь в элемент поля структуры во второе значение массива

    tag_employes *ptr = &employes[0];   //создадим указатель на массив структур

    std::cout << sizeof(employes) << std::endl; //размер всего массива
    std::cout << sizeof(employes[0]) << std::endl; //размер одного элемента массива
    std::cout << employes << std::endl; //выведет адресс первого элемента массива  
    std::cout << ptr << std::endl;  //указатель выведет адрес первого элемента массива

    /* далее создадим цикл ввода данных в массив структур */
    for(ptr = &employes[0]; ptr < employes + sizeof(employes)/sizeof(employes[0]); ptr++) {
        std::cout << "input age: " << std::endl;
        std::cin >> ptr->age;
        std::cout << std::endl;
    }

}