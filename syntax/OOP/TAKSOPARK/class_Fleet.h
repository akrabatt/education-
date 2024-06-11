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
    void SetAddFreeDriver(std::shared_ptr<Driver> new_driver)
    {
        this->drivers_list.push_back(new_driver);
    }
};

#endif