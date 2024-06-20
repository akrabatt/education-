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

    /**
     * @brief метод по созданию водителя
     * данный метод создает водителя и добавляет его в контейнер со свободными водителями
     *
     *
     */
    void CreateDriver()
    {
        
    }
};
#endif