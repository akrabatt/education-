// данный класс предназначен для машины
#ifndef CLASS_CAR
#define CLASS_CAR
#include <iostream>
#include <string>
#include "./class_IFleetManagment.h"
#include "./class_Engine.h"

class Car : public Engine, virtual public IFleetManager
{
private:
    // марка
    std::string brand;

    // категория (эконом - бизнес)
    std::string category;

    // номер машины
    int cars_gos_num;

public:
    // деструктор
    ~Car() { std::cout << "The car " << this->brand << "has been deleted\n"; }

    // конструктор по умолчанию
    Car(int id) : IFleetManager(id){};

    // конструктор параметризированный
    Car(int id, int num_eng, int pow_eng, int conc_eng) {}
};
#endif