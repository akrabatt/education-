#include <iostream>
#include <string>
#include <memory>

//  классы
#include "./class_Animalz.h"
#include "./class_Lion.h"

int main()
{
    // создаем экземпляр класса
    std::unique_ptr<Lion> super = std::make_unique<Lion>("super", 8);
    super->SetBreed("nonebreed");
    super->GetInfo();
}