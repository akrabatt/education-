#include <iostream>

struct tag_vector       //создадим структуру
{
    double x;
    double y;
};

/* объявем функцию, которая будет формировать структуру struct tag_vector по
переданным ей данным */
struct tag_vector create_vector(double x, double y) {        
    struct tag_vector v = {                                 
        x,
        y
    };
    return v;
}

int main() {

    struct tag_vector bais = create_vector(2.56, -7.88);    //вызовим эту структуру 
    std::cout << bais.x << std::endl;

}