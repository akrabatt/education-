#include <iostream>
#include <string>
#include <limits>

/**
 * @brief функция для проверки то что введено число
 *
 *
 * @param prompt текст приглашения
 * @return int
 */
int getSafeIntInput(const std::string &prompt)
{
    int value;

    while (true)
    {
        std::cout << prompt; // Печатает приглашение к вводу
        std::cin >> value;

        // Проверка на ошибку ввода
        if (std::cin.fail())
        {
            std::cin.clear();                                                   // Сбрасывает флаг ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорирует некорректный ввод
            std::cout << "Invalid input. Please enter a valid integer.\n";
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищает буфер ввода
            return value;                                                       // Возвращает корректное значение
        }
    }
}

/**
 * @brief функция проверяет что введен единичный символ
 *
 * @param prompt приглашение на ввод
 * @return char
 */
char getSafeCharInput(const std::string &prompt)
{
    char value;

    while (true)
    {
        std::cout << prompt; // Печатает приглашение к вводу
        std::cin >> value;

        // Проверка на ошибку ввода
        if (std::cin.fail() || std::cin.peek() != '\n')
        {
            std::cin.clear();                                                   // Сбрасывает флаг ошибки
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Игнорирует некорректный ввод
            std::cout << "Invalid input. Please enter a single character.\n";
        }
        else
        {
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Очищает буфер ввода
            return value;                                                       // Возвращает корректное значение
        }
    }
}

// /**
//  * @brief функция по созданию объекта водитель
//  *
//  * @param none
//  *
//  * @return none
//  */
// void CreateDriver()
// {
//     // перменные для конструктора класса

//     // id
//     int id = getSafeIntInput("input ID: ");

//     // имя
//     std::cout << "input drivers name: ";
//     std::string name;
//     std::cin >> name;
//     std::cout << std::endl;

//     // фамилия
//     std::string familyname;
//     std::cout << "input drivers familyname: ";
//     std::cin >> familyname;
//     std::cout << std::endl;

//     // возраст
//     int age = getSafeIntInput("input drivers age: ");

//     // катгория вождения
//     char category = getSafeCharInput("input drivers category: ");

//     // создаем водителя

// }