// данный класс предназначен для гаража - таксопарка
#ifndef CLASS_FLEET
#define CLASS_FLEET
// #include <map>
// #include <memory>

#include "class_Driver.h"

#include "class_Car.h"

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
     */
    void CreateDriver()
    {
        int driver_id = getSafeIntInput("input drivers id: ");

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

        // введите возраст
        int driver_age = getSafeIntInput("input drivers age: ");

        // введите категорию
        char driver_category = getSafeCharInput("input drivers category: ");

        // создаем объект
        std::shared_ptr<Driver> driver_object = std::make_shared<Driver>(driver_id, driver_name, driver_familyname, driver_age, driver_category);

        // добавим его в мап свободных водителей
        this->free_drivers_map.insert({driver_name, driver_object});
        std::cout << "\n the new driver " << driver_name << " has been added to the free drivers list!\n";

        // выведем полную информацию о водителе
        driver_object->GetShowDriversInfo();
    }

    /**
     * @brief данная функция созадем экземпляр класса автомобиль и добавляет его в список свободных машин
     *
     */
    void CreateCar()
    {
        int car_id = getSafeCharInput("input cars id: ");
        int car_num_eng = getSafeCharInput("input cars eng num: ");
        int car_eng_pow = getSafeCharInput("input eng power: ");
        int car_eng_conc = getSafeCharInput("input eng conc: ");

        // марка автомобиля
        std::cout << "input car's brand: ";
        std::string cars_brand;
        std::getline(std::cin, cars_brand);
        std::cout << std::endl;

        // категория (эконом - бизнес)
        std::cout << "input car's category: ";
        std::string cars_category;
        std::getline(std::cin, cars_category);
        std::cout << std::endl;

        // вводим гос номер
        int cars_gos_num = getSafeCharInput("input gos_num: ");

        // создадим объект
        std::shared_ptr<Car> car_object = std::make_shared<Car>(car_id, car_num_eng, car_eng_pow, car_eng_conc, cars_brand, cars_category, cars_gos_num);

        // добавим в свободный список
        this->free_cars_map.insert({cars_brand, car_object});
        std::cout << "\n the new car " << cars_brand << " has been added to the free cars list!\n";
    }

    /**
     * @brief данная функция будет выводить список свободных водителей
     *
     */
    void ShowDrFreeList()
    {
        std::cout << "\nAll free drivers:\n";
        for (const auto &pair : this->free_drivers_map)
        {
            pair.second->GetShowDriversInfo();
        }
    }

    /**
     * @brief данная функция будет выводить список незадействованных машин
     *
     */
    void ShowCrFreeList()
    {
        std::cout << "\nAll free cars:\n";
        for (const auto &pair : this->free_cars_map)
        {
            pair.second->GetShowCarInfo();
        }
    }
};
#endif