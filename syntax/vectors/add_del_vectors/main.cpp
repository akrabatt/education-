/* здесь мы рассмотрим добавление и удаление элементов векторов */
#include <iostream>
#include <vector>

int main()
{
    /* создадим вектор и выведем его для начала */
    std::vector<int> data = {1, 2, 3, 4, 5}; // создадим вектор
    for (int i : data)                       // запустим цикл и выведем элементы массива
    {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    /* так добавляется элемент в конец списка */
    data.push_back(6); // добавляем элемент в конец списка
    for (int i : data) // выведем элементы заново
    {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    /* теперь удалим последний элемент */
    data.pop_back();   // удаляем последний элемент
    for (int i : data) // выведем элементы заново
    {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;

    std::cout << "size: " << data.size() << std::endl;         // так мы узнаем размер вектора
    std::cout << "capacity: " << data.capacity() << std::endl; // так мы узнаем его емкость, то есть полный размер с резервом

    /* поглядим некоторые числа как будет меняться размер и емкость */
    for (int i = 0; i < 15; ++i) // запускаем цикл
    {
        data.push_back(i); // добавляем элемент в конец
        /* выводим размер и емкость */
        std::cout << data[i] << " ";
        std::cout << "size: " << data.size() << std::endl;
        std::cout << "capacity: " << data.capacity() << std::endl;
        std::cout << std::endl;
    }

    /* !очищаем элементы! */
    // data.clear(); // очищаем элемент

    /* посмотрим как меняется размер и емкость вектор в придобавлении элементов */
    std::vector<int> data_ = {1, 2};
    std::cout << data_.size() << "\t" << data_.capacity() << "\n";

    data_.push_back(3);
    std::cout << data_.size() << "\t" << data_.capacity() << "\n";

    data_.push_back(4);
    std::cout << data_.size() << "\t" << data_.capacity() << "\n";

    data_.push_back(5);
    std::cout << data_.size() << "\t" << data_.capacity() << "\n";

    /* резервирование элементов для вектора */
    std::vector<int> numers; // создадим вектор
    /* выведем его размер и емкость */
    std::cout << "numers size: " << numers.size() << std::endl;
    std::cout << "numers no reserved capacity: " << numers.capacity() << std::endl;
    /* после того как увидели нули, зарезервируем новых данным место */
    numers.reserve(5); // резервируем место
    std::cout << "numers size: " << numers.size() << std::endl;
    std::cout << "numers reserved capacity: " << numers.capacity() << std::endl;

    numers = {1, 2, 3, 4, 5};
    /* изменение размера массива */
    numers.resize(7); // так мы добавляем нашему массиву 2 элемента так как предыдущий размер 5, а новый 7
    std::cout << "resized(7) numers capacity: " << numers.capacity() << std::endl;
    std::cout << "resized(7) numers size: " << numers.size() << std::endl;
    numers.resize(3);   //теперь убираем элементы в нашем векторе
    std::cout << "resized(3) numers capacity: " << numers.capacity() << std::endl;
    std::cout << "resized(3) numers size : " << numers.size() << std::endl;
    /* после этого мы увидем что емкость не изменилась после урезания массива, а вот количество элементов - убавилось */
}