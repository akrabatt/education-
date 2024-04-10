#include <iostream>

int main() {
    int arr[4];    //создаем массив
    int *ptr = arr;     //создаем указатель на массив

    /* выведем начальный адресс указателя на первый элемент массива и конечный адресс массива */
    std::cout << "its ptr " << *ptr << std::endl;        //вывыедем начальный адресс массива с помощью указателя 
    std::cout << "its arr: " << arr + sizeof(arr)/sizeof(arr[0]) << std::endl;      //выведем конечный адресс массива с помощью вычисления адрессов


    std::cout << "arr size: " << sizeof(arr)/sizeof(arr[0]);    //выведем размер массива
    std::cout << std::endl;


    /* тут в цикле заполним массив */
    /* указателю присваиваем адр. 1-го элем. массива; пока адресс не достигнет конечного адресса; увеличиваем адресс на один элемент */
    for (ptr = &arr[0]; ptr < arr + sizeof(arr)/sizeof(arr[0]); ptr++) {    //запускаем цикл 
        std::cout << "input arr's elem: ";
        std::cin >> *ptr;   
        std::cout << std::endl;
    }
    
    /* тестовая проверка первого и второго элементов массива */
    ptr = &arr[0];  //возвравщем указтелю адрес первого элемента значения   
    std::cout << *ptr << std::endl;
    std::cout << *++ptr << std::endl;
    ptr = &arr[0];  //возвравщем указтелю адрес первого элемента значения 

    /* тут в цикле начинаем сортировку */
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {      //тело основного цикла
        for (int j = 0; j < sizeof(arr)/sizeof(arr[0]); j++) {     //тело подцикла
            if (ptr[j] > ptr[j+1]) {    //если элемент массива больше чем справа стоящий от него, то...
                int buf = ptr[j];   //то закидываем в "буфер" первый элемент(левый), который больше 
                ptr[j] = ptr[j+1];  //вместо него ставим элемент который стоит справа(меньше)
                ptr[j+1] = buf; //достаем из буфера и ставим на место правого элеменат - элемент который стоял слева
            }
        }
    }
    for(ptr = &arr[0]; ptr < arr + sizeof(arr)/sizeof(arr[0]); ptr++) { //цикл выведем отсортированный массив
        std::cout << "arr: " << *ptr << std::endl;
    }
}