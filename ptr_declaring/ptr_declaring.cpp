#include <iostream>

int main() {

    int a = 10;     //создадим переменную
    int *a_ = &a;   //создадим указатель и присвоем ему адресс переменной

    std::cout << "current adr: " << a_ << std::endl;   //выведем 
    std::cout << "current val: " << *a_ << std::endl;

    a_++;   //увеличим значение даресса на 1

    std::cout << "current adr: " << a_ << std::endl;   //выведем 
    std::cout << "current val: " << *a_ << std::endl;

}