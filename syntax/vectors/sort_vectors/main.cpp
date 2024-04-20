/* тут мы рассмотрим функцию по сортировке векторов */
#include <iostream>
#include <vector>
#include <algorithm> //обязательно для сортировки подключаем библиотеку

int main()
{
    /* создадим вектор наполненный числами  */

    /* чисто для тренировки не просто создадим, а для начала зарезервируем под него значения */
    std::vector<int> vec;
    vec.reserve(10);

    /* теперь выведем размер и емкость вектора */
    std::cout << "vec's size: " << vec.size() << std::endl;
    std::cout << "vec's capacity: " << vec.capacity() << std::endl;

    /* вот теперь зададим в векторе с числа в случайном порядке */
    vec = {5, 5, 6, 8, 2, 9, 15, 3, 94, 15};

    /* отсортируем числа в случайном порядке */
    std::sort(vec.begin(), vec.end());
    /* а теперь выводим их */
    std::cout << "from min to max:" << std::endl; 
    for (int i : vec)
    {
        std::cout << i << std::endl;
    }
    std::cout << std::endl;
    
    /* так же можно отсортировать хи в обратном порядке */
    std::sort(vec.rbegin(), vec.rend()); // сортируем в обратном порядке от большего к меньшему
    std::cout << "from max to min:" << std::endl;  
    /* тперь выведем новым массив на экран */
    for (int i : vec)
    {
        std::cout << i << std::endl;
    }

    /* так же мы можем свапнуть пару элементов командой которую мы уже знаем*/
    std::swap(vec.front(), vec.back()); //делаем свап
    std::cout << "swaped" << std::endl;
    /* выведем элементы */
    for (int i : vec)
    {
        std::cout << i << std::endl;
    }
}