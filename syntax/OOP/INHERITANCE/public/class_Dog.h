#ifndef CLASS_DOG_H
#define CLASS_DOG_H
#include "./class_Animal.h"
class Dog : public Animal
{
private:
    std::string dogs_gav = "gav gav gav!\n";
    int age;

public:
    // методы подкласса
    void GetGav() { std::cout << dogs_gav; }
    void SetAgeSelf(const int &age) { this->age = age; }

    // конструктор только с именем
    Dog(const std::string &name) : Animal(name) { std::cout << "dogs constr has called for : " << this << std::endl; }

    // конструктор полный
    Dog(const std::string &name, const std::string &color, const std::string &breed, const int &age) : Animal(name, color, breed), age(age) {}

    //  деструктор
    ~Dog() { std::cout << "dogs destrucrot has been called: " << this << std::endl; }
};
#endif // CLASS_DOG_H