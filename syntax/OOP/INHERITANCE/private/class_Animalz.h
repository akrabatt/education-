#ifndef CLASS_ANIMALZ_H
#define CLASS_ANIMALZ_H

#include <iostream>
#include <string>

class Animalz
{
protected:
    std::string name;

    // виртуальный деструктор
    virtual ~Animalz() { std::cout << "Animal has been deleted: " << this << std::endl; }

public:
    // конструктор
    Animalz(std::string name) : name(name) { std::cout << "Anamal has been created: " << this << std::endl; }

    // метод возврата имени
    std::string GetName() { return this->name; }
};

#endif // CLASS_ANIMAL_H