#ifndef CLASS_ANIMAL_H
#define CLASS_ANIMAL_H

#include <iostream>
#include <string>

class Animal
{
protected:
    std::string name;

    // виртуальный деструктор
    virtual ~Animal() { std::cout << "Animal has been deleted: " << this << std::endl; }

public:
    // конструктор
    Animal(std::string &name) : name(name) { std::cout << "Anamal has been created: " << this << std::endl; }

    // метод возврата имени
    std::string GetName() { return this->name; }
};

#endif // CLASS_ANIMAL_H