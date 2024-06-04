#include <iostream>
#include <string>
#include <memory>
#include "./class_Animal.h"
#include "./class_Dog.h"
#include "./class_Cat.h"

int main()
{
    // вот так мы создаем просто животного родительского класса c одним именем
    // std::shared_ptr<Animal> bobik = std::make_shared<Animal>("bobik");
    // вот так мы создаем просто животного родительского класса с полным набором
    // данных для суперпользователя
    // std::shared_ptr<Animal> lobik = std::make_shared<Animal>("lobik", "brown", "ovcharka");

    //=CAT=
    // создадим кота только с именем
    std::shared_ptr<Cat> murka = std::make_shared<Cat>("Murka");
    // воспользуемся унаследованными методами
    // сеттеры
    murka->SetColorSelf("brown");
    murka->SetBreedSelf("persidskaya");
    // геттеры родительского класса
    std::cout << murka->GetBreed() << std::endl;
    std::cout << murka->GetColor() << std::endl;
    std::cout << murka->GetName() << std::endl;
    // метод производного класса
    murka->GetMur();

}