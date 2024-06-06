#ifndef CLASS_TOYOTA_H
#define CLASS_TOYOTA_H
#include "./class_Car.h"

class Toyota : protected Car
{
private:
    std::string name_of_factory_in_japan;

public:
    // конструктор
    Toyota(std::string brand, int date_out) : Car(brand)
    {
        this->date_out = date_out;
        std::cout << "Toyota has been added : " << this << std::endl;
    }

    // деструктор
    ~Toyota() { std::cout << "Toyota has ben deleted: " << this << std::endl; }

    // установить завод
    void SetNameFactoryToyota(std::string *name_of_factory_in_japan) { this->name_of_factory_in_japan = *name_of_factory_in_japan; }

    // получить завод
    std::string GetNameFactoryToyota() { return name_of_factory_in_japan; }
};

#endif // CLASS_TOYOTA_H