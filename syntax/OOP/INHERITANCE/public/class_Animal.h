#ifndef CLASS_ANIMAL_H
#define CLASS_ANIMAL_H

// создадим родительский класс животных
class Animal
{
protected:
    // создадим данные которые есть у всех животных
    std::string name;
    std::string color;
    std::string breed;

public:
    // методы предложения установки 
    void SetName()
    {
        std::cout << "Input name: ";
        std::cin >> this->name;
        std::cout << "\nname added !\n";
    }
    void SetColor()
    {
        std::cout << "Input color: ";
        std::cin >> this->color;
        std::cout << "\ncolor added !\n";
    }
    void SetBreed()
    {
        std::cout << "Input breed: ";
        std::cin >> this->breed;
        std::cout << "\nbreed added !\n";
    }

    // методы самоустановки
    void SetNameSelf(const std::string name) { this->name = name; }
    void SetColorSelf(const std::string color) { this->color = color; }
    void SetBreedSelf(const std::string breed) { this->breed = breed; }

    std::string GetName() { return name; }
    std::string GetColor() { return color; }
    std::string GetBreed() { return breed; }

    // конструктор только с именем
    Animal(const std::string &name) : name(name){};

    // конструктор полный
    Animal(const std::string &name, const std::string &color, const std::string &breed) { std::cout << "animal is created: " << this << std::endl; }

    // деструктор
    ~Animal() { std::cout << "animal is deleted: " << this << std::endl; }
};

#endif // CLASS_ANIMAL_H