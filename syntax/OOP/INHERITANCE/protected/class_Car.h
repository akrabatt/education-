#ifndef CLASS_CAR_H
#define CLASS_CAR_H
#include <string>

class Car
{
protected:
    // имя
    std::string brand;
    int date_out;

    // виртуальный деструктор
    virtual ~Car() { std::cout << "virtual Car has been deleted" << this << std::endl; }

public:
    // установить информацию
    void SetBrand(const std::string brand) { this->brand = brand; }
    void SetDate(const int date_out) { this->date_out = date_out; }

    // получить информацию
    std::string GetBrand() { return brand; }
    int GetDate() { return date_out; }

    // конструктор
    Car(std::string brand) : brand(brand) { std::cout << "virtual car has beeb added : " << this << std::endl; }
};

#endif // CLASS_CAR_H