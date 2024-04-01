#include <iostream>

enum variables {    //создадинм объединение
    add,   
    sub,
    mul
};

enum variables cal;     //создадим переменную перечисления  

/* создадим функцию калькулятор в корорую будем передавать две переменныи и значение перечисления */
int fun_cul(int x, int y, enum variables cal) {
    switch (cal)
        {
        case add:
            return x + y;
            break;
        case sub:
            return x - y;
            break;
        case mul:
            return x * y;
            break;
        }

}

int main () {

    enum variables cal = add;   //передадим в переменную перечисления нулевой элемент 

    int result = fun_cul(2, 5, cal);    //передадим значения в функцию
    std::cout << result << std::endl;   //выведем

    result = fun_cul(2, 5, sub);    //передадим значения в функцию
    std::cout << result << std::endl;   //выведем

    result = fun_cul(2, 5, mul);    //передадим значения в функцию
    std::cout << result << std::endl;   //выведем

}