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

    // деструктор
    ~Mers() { std::cout << "Mers hasb been deleted: " << this << std::endl; }
};

#endif // CLASS_MERS_H