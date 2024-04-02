#include <iostream>
#include "global.h"   

// tag_employee emplo;

tag_employee emplo = {  //создадим переменную структуры
    .age = 24,
    .salary = 64000,
    "Dima"
};


int main() {

    /* выведем просто как структуры */
    std::cout << "name: " << emplo.name << ", age: " << emplo.age << ", salary: " << emplo.salary << std::endl;

    tag_employee *ptr = &emplo;   // создадим указатель на структуру
    /* а теперь выведем через указатель */
    std::cout << "name: " << ptr->name << ", age: " << ptr->age << ", salary: " << ptr->salary << std::endl;

    /* далее дадим ввод новых данных в структуру через указатель */
    std::cout << "input name: ";
    std::cin >> ptr->name;  //в этом моменте даем ввод через указатель
    std::cout << std::endl;

    std::cout << "input age: ";
    std::cin >> ptr->age;
    std::cout << std::endl;

    std::cout << "input salary: ";
    std::cin >> ptr->salary;
    std::cout << std::endl;

    /* выдаем новые данные через указатель */
    std::cout << "name: " << ptr->name << ", age: " << ptr->age << ", salary: " << ptr->salary << std::endl;
}
