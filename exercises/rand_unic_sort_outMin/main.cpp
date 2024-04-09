#include <iostream>
#include <ctime>    //библиотека для работы со временем, она нам понадобится для генерации случайных числе

int main() {

    int arr[10]; //создаем массив который будем заполнять рандомными числами
    srand(time(NULL));  //конструкция для генерации случайных чисел
    bool already_there; //переменная которая будет контролировать есть ли такое чило в массиве или нет

    int *ptr_1, *ptr_2 = arr; //создадим указатели на первый эллемент массива
    int smallest;   //сюда будем заносить наименьшее значение
    
    /* ЗАПОЛНЕНИЕ БЕЗ ПОВТОРЕНИЙ */
    /* начинаем основной цикл, логика такая что сначала мы будем заносить новое рандомное значение в переменную и
    проверять есть ли такое значение в нашем массиве */
    for(ptr_1 = &arr[0]; ptr_1 < arr + sizeof(arr)/sizeof(arr[0]); ) {  //запускаем основной цикл
        
        already_there = 0;  //обнулим контроллера
        int new_rand_val = rand() % 10; //создадим переменную которая будет только в цикле и занесем в нее сразу рандомное значение

        /* начнем выполнять проверку есть ли new_rand_val уже в массиве */
        for(ptr_2 = &arr[0]; ptr_2 <= ptr_1; ptr_2++) {     //запускаем проверочный цикл
            if(new_rand_val == *ptr_2) {    //делаем проверку если новое значение уже есть в массиве
                already_there = 1;  //взводим контроллера
                break;  //покидаем операцию
            }
            /* здесь идет обработка наименьшего элемента */
            if(!already_there && new_rand_val <= *ptr_2) {  //проверяем если условие верное, 
                if(smallest < new_rand_val) {   //сразу же выполняем еще одну проверку 
                    continue;  //выходим из нашего цикла чтоб переменная не поменялось с меношего значения на большее
                }
                smallest = new_rand_val;    //присваиваем наименьшее значение
            }
        }
        if(!already_there) {    //если значения небыло в массиве, то...
            *ptr_1 = new_rand_val;  //присваиваем элементу массива это значение
            ptr_1++;    //переходим на следующий элемент
        }
    }

    std::cout << std::endl << "the smallest: " << smallest << std::endl << std::endl;
    /* выведем все перед сортировкой*/
    std::cout << "arr before sorting: " << std::endl;
    for(ptr_1 = &arr[0]; ptr_1 < arr + sizeof(arr)/sizeof(arr[0]); ptr_1++) {
        std::cout << *ptr_1 << std::endl;
    }

    ptr_1 = &arr[0];
    ptr_2 = &arr[0];

    /* Далее начинаем выполнять пузырьковую сортировку */
     for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {      //тело основного цикла
        for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++) {     //тело подцикла
            if (ptr_1[j] > ptr_1[j+1]) {    //если элемент массива больше чем справа стоящий от него, то...
                int buf = ptr_1[j];   //то закидываем в "буфер" первый элемент(левый), который больше 
                ptr_1[j] = ptr_1[j+1];  //вместо него ставим элемент который стоит справа(меньше)
                ptr_1[j+1] = buf; //достаем из буфера и ставим на место правого элеменат - элемент который стоял слева
            }
        }
    }
    for(ptr_1 = &arr[0]; ptr_1 < arr + sizeof(arr)/sizeof(arr[0]); ptr_1++) { //цикл выведем отсортированный массив
        std::cout << "sorted elem.: " << *ptr_1 << std::endl;
    }
}

