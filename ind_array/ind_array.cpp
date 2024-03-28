#include <iostream>

int main() {

    int ar[10] {};  //создали массив

    int *ind;   //создали указатель
    ind = ar;   //указываем на массив

    for(int i = 0; i < sizeof(ar) / sizeof(*ar); i++) {     //запускаем цикл в котором делаем подсчет по колличеству элементов в массиве
        ind += 1;   
        *ind = i+1;
        std::cout << *ind << std::endl;
    }
}
