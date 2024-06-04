#ifndef CLASS_CAT_H
#define CLASS_CAT_H
#include "./class_Animal.h"

// наследование для производного класса
class Cat : public Animal
{
private:
    std::string cats_murr = "Murrrrr!";
    int lives;

public:
    // методы класса
    void GetMur() { std::cout << cats_murr << std::endl; }
    void SetLivesSelf(const int &lives) { this->lives = lives; }

    // конструктор только с именем
    Cat(const std::string &name) : Animal(name) { std::cout << "cat's construcrot has called for : " << this << std::endl; }

    // конструктор с полным набором
    Cat(const std::string &name, const std::string &color, const std::string &breed, const int &lives) : Animal(name, color, breed), lives(lives) {}
    ~Cat() { std::cout << "cat's destructor has been called: " << this << std::endl; }
};

#endif // CLASS_CAT_H