#include <iostream>
#include <string>
#include <memory>
#include <vector>
#include <algorithm>

#include "./class_book.h"
#include "./class_libruray.h"

int main()
{
    // объект книга созданная просто из конструктора
    auto voina_i_mir = std::make_shared<Book>();

    // объект книга созданная по парметрезированному конструктору
    auto master_i_margarita = std::make_shared<Book>("master_i_margarita", "lev", 1999, "romance");

    // создание по делегирующему конструктору
    auto taras_bulba = std::make_shared<Book>("taras_bul", "gogol", 2343, "vars", 1);

    // осздаем библиотеку
    Libruray *lib1 = new Libruray();

    // вызовем метод библиотеки чтоб добавить объект книги в библиотеку
    lib1->Set_add_book(voina_i_mir);
    lib1->Set_add_book(master_i_margarita);
    lib1->Set_add_book(taras_bulba);

    lib1->Set_remove_book("master_i_margarita");

    // удаляем объекты
    delete (lib1);
}