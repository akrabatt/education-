#include <iostream>

int main() {
    struct tag_vector   //создадим структуру
    {
        double x;
        double y;
    };

    struct tag_vector v = {     //создадим переменную структуры
        .x = 1.0,
        .y = 2.0
    };
    
    struct tag_vector *prt_v;   //создадим указатель
    prt_v = &v;      //присвоем указателю адрес структуры

    

}