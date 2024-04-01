#include <iostream>

union tag_var   //создадим объединение
    {
        char var_ch;
        int var_i;
        double var_d;
    };

int main() {

    union tag_var var;  //создадим переменную на объединение

    var.var_ch = 'c';    //запишем туда какое нибудь значение

}