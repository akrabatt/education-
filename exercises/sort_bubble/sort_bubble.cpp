#include <iostream>

int main() {
    int arr[5];    //создаем массив
    int *ptr = arr;     //создаем указатель на массив

    /* выведем начальный адресс указателя на первый элемент массива и конечный адресс массива */
    std::cout << "its ptr " << ptr << std::endl;        //вывыедем начальный адресс массива с помощью указателя 
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
    
    /* тут в цикле начинаем сортировку */
    for (int i = 0; i < sizeof(arr)/sizeof(arr[0]); i++) {      //тело основного цикла
        for (; ptr < arr + sizeof(arr)/sizeof(arr[0]); ptr++) {
            /* code */
        }
        
    }
    
}