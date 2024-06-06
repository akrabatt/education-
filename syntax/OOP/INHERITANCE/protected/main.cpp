#include <iostream>
#include <string>
#include <memory>

// классы
#include "./class_Car.h"
#include "./class_Mers.h"

int main()
{
    // создадим объект
    std::shared_ptr<Mers> w140 = std::make_shared<Mers>("mercedes_benz", 1998);

    // w140->GetBrad();

    // воспользуемся защищеннымb методами производного класса
    w140->SetB("mershers");
    std::cout << w140->GetBrad_in() << std::endl;
    w140->SetB2("mersbers");

    std::cout << w140->GetBrad_in() << std::endl;
}