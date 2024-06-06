#ifndef CLASS_LION_H
#define CLASS_LION_H
#include "./class_Animalz.h"

class Lion : private Animalz
{
private:
    std::string breed;
    int age;

public:
    // создадим обычный конструктор
    Lion(std::string name, int age) : Animalz(name), age(age) { std::cout << "The Lion has been created: " << this << std::endl; }

    // создадим обычный деструктор
    ~Lion() { std::cout << "Lion has been deleted: " << this << std::endl; }

    // метод присвоения возраста
    void SetBreed(std::string breed) { this->breed = breed; }

    // мето получения информации
    void GetInfo()
    {
        std::cout << GetName() << std::endl;
        std::cout << this->age << std::endl;
        std::cout << this->breed << std::endl;
    }
};

#endif