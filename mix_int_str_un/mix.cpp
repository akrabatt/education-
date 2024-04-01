#include <iostream>

struct tag_union     //создадим объединение где будут храниться две структуры
{
    struct tag_struct_1     //создадим структуру 1
    {
        int data_1_1;
        double data_1_2;
    }struct_1;
    
    struct tag_struct_2     //создадим структуру 2
    {
        int data_2_1;
        double data_2_2;
    }struct_2;
    
}st_structs;    //создадим сразу переменную объединения



int main() {

    st_structs.struct_1 = {     //заполним первую структуру объединения
        .data_1_1 = 10,
        .data_1_2 = 2.2,
    };
    
    st_structs.struct_2 = {   //заполним вторую структуру объединения   
        .data_2_1 = 15,
        .data_2_2 = 5.7,
    };

    struct tag_union *ptr;  //создадим указатель на структуру
    ptr = &st_structs;  //присвоим указателю адрес структуры

    std::cout << ptr->struct_1.data_1_1 << std::endl;   //выведем значения для теста

    
}