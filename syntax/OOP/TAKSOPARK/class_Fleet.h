// данный класс предназначен для гаража - таксопарка
#ifndef CLASS_FLEET
#define CLASS_FLEET
// #include <map>
// #include <memory>

class Fleet
{
private:
    // контейнер со свободными водителями
    std::list<std::shared_ptr<Driver>> drivers_list;

    // контейнер со свободными машинами
    std::list<std::shared_ptr<Car>> cars_list;

    // мап связка водитель - машина
    std::map<std::shared_ptr<Driver>, std::shared_ptr<Car>> drivers_cars_map;

public:
    // деструктор
    ~Fleet(){};

    // конструктор по умолчанию
    Fleet() { std::cout << "the Fleet " << this << " has been created!\n"; }

    // добавить свободного водителя
    void SetAddFreeDriver(std::shared_ptr<Driver> new_driver) { this->drivers_list.push_back(new_driver); }

    // добавить свободную машину
    void SetAddFreeCar(std::shared_ptr<Car> new_car) { this->cars_list.push_back(new_car); }

    // показать всех водителей
    void GetShowDrivers()
    {
        std::size_t size;
        if (drivers_list.size()) // если список водителей пуст
        {
            std::cout << "No Drivers !\n";
        }
        else // если список не пуст
        {
            for (const auto &it : drivers_list)
            {
                unsigned int num = 1;
                std::cout << num << ": " << it << std::endl;
                num++;
            }
        }
    }
};

#endif