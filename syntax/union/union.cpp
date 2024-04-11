/* функция возвращающая значение */

#include <iostream>

typedef enum {      //создадим перечисления сосотояний объединения через typedef
    union_var_ch,
    union_var_i,
    union_var_d,
} type_var;

union tag_var   //создадим само объединение
    {
        char var_ch;
        int var_i;
        double var_d;
    };

/* создадим функцию которая будет выводить значение объединения */
void show_var(union tag_var v, type_var type) {     //передаем значения из объединения и перечисление 
    switch (type)
    {
    case union_var_ch:
        std::cout << v.var_ch << std::endl;
        break;
    case union_var_i:
        std::cout << v.var_i << std::endl;
        break;
    case union_var_d:
        std::cout << v.var_d << std::endl;
    }
}

int main() {

    union tag_var var;  //создадим переменную на объединение
    var.var_ch = 'c';    //запишем туда какое нибудь значение
    var.var_i = 45;     //изменим значение для теста

    show_var(var, union_var_i);     //должен вывести 45
    
}