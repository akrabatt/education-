#include <iostream>

struct tag_person   //создадим структуру
{
    int age;
    char name[20];
};


int main() {

    struct tag_person people [] = {     //создадим массив структур и заполним его
        {23, "Tom"},
        {24, "Jac"},
        {53, "Kit"},
        {73, "Dir"}
    };

    /* дальше для цикла с выводом чтоб не заводить новую переменную нам надо указать размер 
    массива ниже строка с выводом означает 96(общий размер массива) делим на 24(размер
    одного элемента) */
    std::cout << sizeof(people)/sizeof(people[0]) << std::endl;

    for(int i = 0; i < sizeof(people)/sizeof(people[0]); i++) {     //тут как раз мы зпкускаем цикл
        std::cout << "age: " << people[i].age << ", name: " << people[i].name << std::endl;
    }
    std::cout << std::endl;
    /* Далее создадим указатель на массив, запустим цикл и попробуем вывести все через него */
    struct tag_person *ptr = people;    //создадим указатель на массив структур
    
    
    std::cout << ptr++->age << std::endl;    //выведем второй элемент массива, первое значение структуры
    
    for(; ptr < people + sizeof(people)/sizeof(people[0]); ptr++) { 
        std::cout << "age: " << ptr->age << ", name:" << ptr->name << std::endl;
    }

    // for(; ptr < people + sizeof(people)/sizeof(people[0]); ptr++) { 
    //     std::cout << "age: " << ptr->age << ", name:" << ptr->name << std::endl;
    // }
}