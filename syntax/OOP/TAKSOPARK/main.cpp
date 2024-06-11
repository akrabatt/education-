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
    std::shared_ptr<Fleet> yandex_taxi = std::make_shared<Fleet>();
    std::shared_ptr<Driver> aslanbek = std::make_shared<Driver>(1, "Aslanbek", "Eblanov", 38, "B");

    yandex_taxi->SetAddFreeDriver(aslanbek);

    yandex_taxi->GetShowDrivers();
}