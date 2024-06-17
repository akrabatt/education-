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
    ~Fleet() { std::cout << "the fleet " << this << " has been deleted\n"; }

    // конструктор по умолчанию
    Fleet() { std::cout << "the Fleet " << this << " has been created!\n"; }

    // добавить свободного водителя
    void SetAddFreeDriver(std::shared_ptr<Driver> new_driver) { this->drivers_list.push_back(new_driver); }

    // добавить свободную машину
    void SetAddFreeCar(std::shared_ptr<Car> new_car) { this->cars_list.push_back(new_car); }

    // создать связку водитель - машина
    void SetPairDrCr()
    {
        if (drivers_list.empty())
        {
            std::cout << "NO DRIVERS FOR PAIR!\n";
            return;
        }
        else if (cars_list.empty())
        {
            std::cout << "NO CARS FOR PAIR\n";
            return;
        }
        // вставляем в мап конечные элементы списков
        this->drivers_cars_map.insert({this->drivers_list.back(), this->cars_list.back()});

        for (const auto &pair : drivers_cars_map)
        {
            std::cout << "The pair has been created - " << "Driver: " << pair.first->GetDrivName() << " " << pair.first->GetDrivFam() << " Car: " << pair.second->GetCarBrand() << std::endl;
        }

        // удаляем водителя и машину из свободных списков
        this->cars_list.erase(std::prev(this->cars_list.end()));
        this->drivers_list.erase(std::prev(this->drivers_list.end()));
    }

    // показать всех свободных водителей
    void GetShowDrivers()
    {
        if (drivers_list.empty()) // если список водителей пуст
        {
            std::cout << "No Drivers !\n";
        }
        else // если список не пуст
        {
            std::cout << "=========================================================================\nfree Drivers:\n";
            unsigned int num = 1;
            for (const auto &it : drivers_list)
            {
                std::cout << num << ": " << it->GetDrivName() << " " << it->GetDrivFam() << std::endl;
                num++;
            }
            num = 0;
            std::cout << "=========================================================================\n";
        }
    }

    // показать все свободные машины
    void GetShowCars()
    {
        if (cars_list.empty()) // если список машин пуст
        {
            std::cout << "No Cars !\n";
        }
        else // если список машин не пуст
        {
            std::cout << "=========================================================================\nfree Cars:\n";
            unsigned int num = 1;
            for (const auto &it : cars_list)
            {
                std::cout << num << ": " << it->GetCarBrand() << " " << it->GetCarGosNum() << std::endl;
                num++;
            }
            num = 0;
            std::cout << "=========================================================================\n";
        }
    }
};
#endif