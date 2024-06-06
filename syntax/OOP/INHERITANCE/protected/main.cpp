#include <iostream>
#include <string>
#include <memory>

// классы
#include "./class_Car.h"
#include "./class_Mers.h"
#include "./class_Toyota.h"

int main()
{
    std::shared_ptr<Mers> w140 = std::make_shared<Mers>("mercedes_benz", 1998);
}