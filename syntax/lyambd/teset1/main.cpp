#include <iostream>

struct name_greate
{
    std::string name;
    void operator()() { std::cout << "hello " << this->name << std::endl; }
} oleg;

int plus(int a, int b) { return a + b; }

auto plus_ten([=](int x)
              { return plus(x, 10); });

int main()
{

    name_greate john{"john"};
    oleg.name = "poshol";
    john();
    oleg();

    std::cout << plus_ten(2);
}
