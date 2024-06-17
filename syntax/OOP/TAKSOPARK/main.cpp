#include <iostream>
#include <memory>
#include <map>
#include <memory>
#include <list>

// классы
#include "./class_IFleetManagment.h"
#include "./class_Engine.h"
#include "./class_Car.h"
#include "./class_Driver.h"
#include "./class_Fleet.h"

int main()
{
    // создадим таксопарк
    std::shared_ptr<Fleet> yandex_taxi = std::make_shared<Fleet>();

    // создадим таксиста
    std::shared_ptr<Driver> aslanbek = std::make_shared<Driver>(1, "Aslanbek", "Eblanov", 38, "B");
    std::shared_ptr<Driver> huelbek = std::make_shared<Driver>(2, "huelbek", "huelbekov", 43, "B");

    // создадим машину
    std::shared_ptr<Car> toyota1 = std::make_shared<Car>(1, 2342, 240, 10, "Toyota Camry", "B", 12345);
    std::shared_ptr<Car> ford = std::make_shared<Car>(2, 5235, 115, 10, "ford_modeo", "B", 242234);

    // добавим таксиста в список свободных таксистов
    yandex_taxi->SetAddFreeDriver(aslanbek);
    yandex_taxi->SetAddFreeDriver(huelbek);

    // добавим машину в список свободных машин
    yandex_taxi->SetAddFreeCar(toyota1);
    yandex_taxi->SetAddFreeCar(ford);

    // выведем водителей
    yandex_taxi->GetShowDrivers();

    // выведем машины
    yandex_taxi->GetShowCars();

    // создадим связку водитель - машина
    yandex_taxi->SetPairDrCr();
    yandex_taxi->SetPairDrCr();

    // помсмотрим всесвязки
    yandex_taxi->GetShowDrCr();
}