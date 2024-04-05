#include <iostream>

int main() {
    int arr[10];
    int *ptr = arr;


    std::cout << "arr size: " << sizeof(arr)/sizeof(arr[0]);
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