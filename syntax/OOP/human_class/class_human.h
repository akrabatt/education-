#include <string>

// создадим класс человек
class Human
{
    // создадим приватную структуру данных о классе
private:
    struct
    {
        int age;
        std::string sex;
        int height;
        int weight;
        std::string name;
    } tag_humans_data;

public:
    // создадим публичный метод, ввод данных о человекео
    void humans_data_input()
    {
        std::cout << "input your name: ";
        std::cin >> tag_humans_data.name;
        std::cout << std::endl;

        std::cout << "sex: ";
        std::cin >> tag_humans_data.sex;
        std::cout << std::endl;

        std::cout << "age: ";
        std::cin >> tag_humans_data.age;
        std::cout << std::endl;

        std::cout << "weight: ";
        std::cin >> tag_humans_data.weight;
        std::cout << std::endl;

        std::cout << "height: ";
        std::cin >> tag_humans_data.height;
        std::cout << std::endl;
    }

    // метод вывод даннх о человеке
    void humans_data_output()
    {
        humans_data_input(); // вызываем метод о вводе данных

        // а теперь выводим данные
        std::cout << tag_humans_data.name << "\n"
                  << tag_humans_data.sex << "\n"
                  << tag_humans_data.age << "\n"
                  << tag_humans_data.weight << "\n"
                  << tag_humans_data.height << "\n";
    }
};