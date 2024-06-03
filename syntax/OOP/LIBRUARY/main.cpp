#include <iostream>
#include <string>
#include <memory>
#include <vector>

#include "./class_book.h"
#include "./class_libruray.h"

int main()
{
    // объект книга созданная просто из конструктора
    Book *voina_i_mir = new Book();

    // объект книга созданная по парметрезированному конструктору
    Book *master_i_margarita = new Book("master_i_margarita", "lev", 1999, "romance");

    // создание по делегирующему конструктору
    Book *taras_bulba = new Book("taras_bul", "gogol", 2343, "vars", 1);

    delete (voina_i_mir);
    delete (master_i_margarita);
    delete (taras_bulba);
}