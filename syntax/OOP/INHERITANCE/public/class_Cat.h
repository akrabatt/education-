#ifndef CLASS_CAT_H
#define CLASS_CAT_H
#include "./class_Animal.h"

// наследование для производного класса
class Cat : public Animal
{
private:
    std::string cats_murr = "Murrrrr!";

public:
    void GetMur() { std::cout << cats_murr << std::endl; }

    // конструктор только с именем
    Cat(const std::string &name) : Animal(name) { std::cout << "cat's construcrot has called for : " << this << std::endl; }
};

#endif // CLASS_CAT_H