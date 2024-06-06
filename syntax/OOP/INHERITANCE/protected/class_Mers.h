#ifndef CLASS_MERS_H
#define CLASS_MERS_H
#include "./class_Car.h"

// производный класс, который наследует приватно
class Mers : protected Car
{
    // приватное поле
private:
    std::string name_of_factory_in_germany;

public:
    // конструктор
    Mers(std::string brand, int date_out) : Car(brand)
    {
        SetDate(date_out);
        std::cout << "Mers has been added : " << this << std::endl;
    }

    // установка завода
    void SetNameFactoryMers(std::string *name_of_factory_in_germany) { this->name_of_factory_in_germany = *name_of_factory_in_germany; }

    // получить завод
    std::string GetNameFactoryMers() { return name_of_factory_in_germany; }

    // получить защищенный метод первый вариант
    void SetB(std::string brnd)
    {
        // можно использовать свой метод
        this->brand = brnd;
        // можно испоьзовать метод из базового класса
        // SetBrand(brnd);
    };
    // получить защищенный метод вторым способом
    void SetB2(std::string brnd)
    {
        // можно использовать свой метод
        // this->brand = brand;
        // можно испоьзовать метод из базового класса
        SetBrand(brnd);
    };

    // получаем бренд из производного класса
    std::string GetBrad_in() { return brand; }

    // деструктор
    ~Mers() { std::cout << "Mers has been deleted : " << this << std::endl; }
};

#endif // CLASS_MERS_H