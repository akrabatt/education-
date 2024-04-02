#include <iostream>
#include "var_test.h"

tag_employes employes[4];  //создадим массив стурктур

int main() {

    // employes[2].age = 25;   //добавим в массив какое нибудь значение    
    // std::cout << employes[2].age << std::endl;  //добавим что нибудь в элемент поля структуры во второе значение массива

    tag_employes *ptr = &employes[0];   //создадим указатель на массив структур


    /* размер массива */
    std::cout << "array size: " << sizeof(employes) << std::endl; //размер всего массива
    std::cout << "element of array size: " << sizeof(employes[0]) << std::endl << std::endl; //размер одного элемента массива

    /* вывести элемент массива */
    std::cout << "employes: " << employes << std::endl; //выведет адресс первого элемента массива  
    std::cout << "employes[0] addr: " << &employes[1] << std::endl;  //выведет тоже адресс первого элемента массива
    std::cout << "pointer: " << ptr << std::endl;  //указатель выведет адрес первого элемента массива
    std::cout << "mass adr size: " << sizeof(employes)/sizeof(employes[0]) << std::endl;    //выведем количество элементов массива
    std::cout << "mass adr : " << employes + sizeof(employes)/sizeof(employes[0]) << std::endl << std::endl;    //выведем размер последнего элемента для цикла

    /* далее создадим цикл ввода данных в массив структур */
    for(ptr = &employes[0]; ptr < employes + sizeof(employes)/sizeof(employes[0]); ptr++) {
        std::cout << "input age: " << std::endl;
        std::cin >> ptr->age;
        std::cout << std::endl;
    }
    std::cout << std::endl;
    /* далее выведем все что мы вбили */
    for(ptr = &employes[0]; ptr < employes + sizeof(employes)/sizeof(employes[0]); ptr++) {
        std::cout << "output age: " << ptr->age << std::endl;
    }
    int a = 0;
    std::cin >>a;
}