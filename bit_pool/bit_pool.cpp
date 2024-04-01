#include <iostream>

struct date_time    //создадим структуру в виде битового поля
{   //на против каждого элемента указываем количество бит
    unsigned day : 5;
    unsigned month : 4;
    unsigned years : 12;
    unsigned sec : 6;
    unsigned min : 6;
    unsigned hour : 5;
};


int main() {
    struct date_time sze;

    sze = {     //заполняем битовове поле
        .day = 7,
        .month = 12,
        .years = 1,
        .sec = 60,
        .min = 60,
        .hour = 24
    };

    std::cout << sze.sec << std::endl;  //выводим какой нибудь элемент  
}
