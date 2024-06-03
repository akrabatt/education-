#ifndef CLASS_LIBRURAY_H
#define CLASS_LIBRURAY_H

#include "./class_book.h"

class Libruray
{
private:
    // создадим хранилище с книгами
    std::vector<Book> lib;

public:
    // создадим конструкторы

    // конструктор по умолчанию
    Libruray() { std::cout << "lib constr is done ! : " << this << std::endl; }

    ~Libruray() { std::cout << "lib destr is done ! : " << this << std::endl; }

    // создадим методы

    // метд добавления книги
    void Set_add_book(const Book &book)
    {
        lib.push_back(book);
        std::cout << "book added to the libruary: \n";
        book.Get_books_info();
    }
};

#endif // CLASS_LIBRURAY_H