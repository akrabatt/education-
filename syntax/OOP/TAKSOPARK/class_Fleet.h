// данный класс предназначен для гаража - таксопарка
#ifndef CLASS_FLEET
#define CLASS_FLEET
// #include <map>
// #include <memory>

class Fleet
{
private:
    // контейнер со свободными водителями(имя - объект)
    std::map<std::string, std::shared_ptr<Driver>> free_drivers_map;

    // контейнер со свободными машинами(имя - объект)
    std::map<std::string, std::shared_ptr<Car>> free_cars_map;

    // мап связка: мап водитель - мап машина
    std::map<std::map<std::string, std::shared_ptr<Driver>>, std::map<std::string, std::shared_ptr<Car>>> drivers_cars_map;

public:
    // деструктор
    ~Fleet() { std::cout << "the fleet " << this << " has been deleted\n"; }

    // конструктор по умолчанию
    Fleet() { std::cout << "the Fleet " << this << " has been created!\n"; }

    /**
     * @brief метод по созданию водителя
     * данный метод создает водителя и добавляет его в контейнер со свободными водителями
     *
     *
     */
    void CreateDriver(const std::string &name_)
    {
        int id = getSafeCharInput("input drivers id: ");

        // вводим имя
        std::cout << "input driver name: ";
        std::string driver_name;
        std::getline(std::cin, driver_name);
        std::cout << std::endl;

        // вводим фамилию
        std::cout << "input familyname: ";
        std::string driver_familyname;
        std::getline(std::cin, driver_familyname);
        std::cout << std::endl;
    }
};
#endif