#ifndef CLASS_CAR_H
#define CLASS_CAR_H
#include <string>

class Car
{
protected:
    // имя
    std::string brand;

    // виртуальный деструктор
    virtual ~Car() { std::cout << "Car has been deleted\n"; }

public:
    // установить марку машины
    void SetBrand(const std::string brand) { this->brand = brand; }

    // получить название марки машины
    std::string GetBrand() { return brand; }

    // конструктор
    Car(std::string brand) : brand(brand) {}
};

#endif // CLASS_CAR_H