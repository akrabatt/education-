/* здесь поосмотрим синтаксис контейнера map */

#include <iostream>
#include <map>
#include <string>

int main()
{
    /* сначала рассмотрим такую легкую стркутуру как пара - pair */
    std::pair<int, std::string> test_pair; // вот объявили пару
    /* можно так ей назначать значения в эту структуру */
    test_pair.first = 10;       // назначаем первому элементу
    test_pair.second = "Hello"; // назначаем второму элементу

    /* выведем */
    std::cout << test_pair.first << " " << test_pair.second << std::endl;

    /* а можно так назначать создадим новую для теста */
    std::pair<int, std::string> test_pair2(20, "Again Hello");
    /* выведем */
    std::cout << test_pair2.first << " " << test_pair2.second << std::endl;

    /* теперь рассмотрим контейнер map */
    std::map<int, std::string> test_map; // объявили контейнер map

    /* вот так можно добавлять значения */
    test_map[1] = "a";
    test_map[2] = "b";
    test_map[3] = "c";
    test_map[4] = "d";

    int key = 2;
    /* вот так можно циклически вывести значения */
    for (const auto &i : test_map)
    {
        std::cout << i.first << " " << i.second << std::endl;
        /* вот так можно реализовать триггер по ключу */
        if (key == i.first)
        {
            std::cout << "find !" << std::endl;
        }
    }

    /* вот так еще можно найти значение по лкючу */
    auto it = test_map.find(key); // поиск значения по ключу

    /* можно проверить найдено ли значение */
    if (it != test_map.end())
    {
        std::cout << "find !" << std::endl;
        //ниже можем вывести значения
    }
    else
    {
        std::cout << "not find !" << std::endl;
    }

    /* можно сразу вывести значение */
    std::cout << "here: " << it->first << " " << it->second << std::endl;
}