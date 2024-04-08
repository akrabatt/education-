#include <iostream>

int main() {
    int arr[10];    //создаем массив
    int *ptr = arr;     //создаем указатель на массив


    std::cout << "arr size: " << sizeof(arr)/sizeof(arr[0]);    //выведем размер массива
    std::cout << std::endl;

    for (int i = 0; i != sizeof(arr)/sizeof(arr[0]); i++)   
    {
        // std::cin >> arr[i];
        std::cin >> ptr;
        std::cout << std::endl;
        if(i == sizeof(arr)/sizeof(arr[0])) {

        }
    }
    
}