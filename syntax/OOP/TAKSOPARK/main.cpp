#include <iostream>
#include <memory>
#include <map>
#include <memory>
#include <list>

// функции
#include "./funks.h"

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

    // вызов функции создания водителя
    yandex_taxi->CreateDriver();

    // выведем водителя
    yandex_taxi->ShowDrFreeList();
}