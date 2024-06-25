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
    Car(int id, int num_eng, int pow_eng, int conc_eng, std::string brand, std::string category, int cars_gos_num) : IFleetManager(id), Engine(num_eng, pow_eng, conc_eng)
    {
        this->brand = brand;
        this->category = category;
        this->cars_gos_num = cars_gos_num;
    }

    /* ======== сеттеры ======== */

    // метод установки марки
    void SetBrand(std::string brand) { this->brand = brand; }

    // категория класса
    void SetCategory(std::string category) { this->category = category; }

    // госномер
    void SetCarGosNum(int cars_gos_num) { this->cars_gos_num = cars_gos_num; }

    // метод полной локальной установки
    void SetAllLocal(std::string brand, std::string category, int cars_gos_num)
    {
        this->brand = brand;
        this->category = category;
        this->cars_gos_num = cars_gos_num;
    }

    // метод полной установки в других классах
    void SetAllExtern(int num_eng, int pow_eng, int conc_eng)
    {
        SetNumEng(num_eng);
        SetPowEng(pow_eng);
        SetConcEng(conc_eng);
    }

    // метод полной установки и локальной и глобальной
    void SetAllForCar(std::string brand, std::string category, int cars_gos_num, int num_eng, int pow_eng, int conc_eng)
    {
        this->brand = brand;
        this->category = category;
        this->cars_gos_num = cars_gos_num;
        SetNumEng(num_eng);
        SetPowEng(pow_eng);
        SetConcEng(conc_eng);
    }

    /* ======== геттеры ======== */

    // марка машины
    std::string GetCarBrand() const { return this->brand; }

    // статус машины
    std::string GetCarCatergor() const { return this->category; }

    // госномер машины
    int GetCarGosNum() const { return this->cars_gos_num; }

    // мощность машины
    int GetCarPow() const { GetPowEng(); }

    // номер двигателя
    int GetCarNumEng() const { GetNumEng(); }

    // получить расход машины
    int GetCarConc() const { GetConcEng(); }

    // вывести всю информацию о машине
    void GetShowCarInfo()
    {
        std::cout << "\nCars info:\nbrand: " << this->brand << "\ncategory: " << this->category << "\ncars gos num: " << this->cars_gos_num << "\nnum eng: " << this->num_eng << "\npow eng: " << this->pow_eng << "\nconc eng: " << this->conc_eng << "\n";
    }
};
#endif
