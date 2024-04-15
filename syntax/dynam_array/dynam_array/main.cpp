#include <iostream>
using namespace std;

int main() {
    int *arr = new int[5]; // Создаем массив из 5 элементов

    /* заполним массив просто цифрами */
    for (int i = 0; i < 5; i++) {
        arr[i] = i + 1;
    }

    /* выведем все элементы массива */
    cout << "started array: " << endl;
        for (int i = 0; i < 5; i++) {
        cout << arr[i] << "\t" << &arr[i];
        cout << endl;
    }
    cout << endl;

    // Увеличиваем размер массива до 10 элементов
    int *temp = new int[10]; // Выделяем память под новый массив

    /* теперь перенесем все данные из старого массива в новый */
    for (int i = 0; i < 5; i++) { // Копируем данные из старого массива в новый
        temp[i] = arr[i];
    }

    delete arr; // Удаляем старый массив
    arr = temp; // Переназначаем указатель на новый массив

    /* добавим новые элементы в массив сохранив старые */
    for (int i = 5; i < 10; i++) {
        arr[i] = i + 1;
    }

    /* выведем все что получилось */
    cout << "ext array: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << arr[i] << "\t" << &arr[i];
        cout << endl;
    }
    cout << endl;

    delete arr; // Удаляем увеличенный массив
    return 0;
}