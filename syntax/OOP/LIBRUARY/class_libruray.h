#ifndef CLASS_LIBRURAY_H
#define CLASS_LIBRURAY_H

#include "./class_book.h"

class Libruray
{
private:
    // создадим хранилище с книгами
    std::vector<std::shared_ptr<Book>> lib;

public:
    // создадим конструкторы

    // конструктор по умолчанию
    Libruray() { std::cout << "lib constr is done ! : " << this << std::endl; }

    // деструктор
    ~Libruray() { std::cout << "lib destr is done ! : " << this << std::endl; }

    // создадим методы

    // метд добавления книги
    void Set_add_book(std::shared_ptr<Book> book)
    {
        lib.push_back(book);
        std::cout << "=========================== \n";
        std::cout << "book added to the libruary: \n";
        book->Get_books_info();
        std::cout << "=========================== \n";
    }

    // Метод удаления книги из библиотеки по названию
    void Set_remove_book(const std::string &title)
    {
        // Используем алгоритм std::remove_if для поиска книги по названию.
        // std::remove_if перемещает все элементы, не удовлетворяющие предикату, в начало контейнера,
        // возвращая итератор на первый элемент, который был "удален" (то есть, на элемент, который следует за последним "неудаленным" элементом).
        auto it = std::remove_if(lib.begin(), lib.end(),
                                 // Лямбда-функция используется в качестве предиката для std::remove_if.
                                 // Она принимает умный указатель на объект Book и возвращает true, если название книги совпадает с указанным.
                                 [&title](const std::shared_ptr<Book> &book)
                                 {
                                     // Сравниваем название книги с переданным названием.
                                     return book->Get_title() == title;
                                 });

        // Проверяем, найден ли элемент для удаления.
        if (it != lib.end())
        {
            // Если книга найдена, используем метод erase для удаления элементов.
            // Метод erase удаляет элементы в указанном диапазоне.
            lib.erase(it, lib.end());

            // Выводим сообщение о том, что книга удалена.
            std::cout << "Book with title '" << title << "' removed from the library." << std::endl;
        }
        else
        {
            // Если книга не найдена, выводим сообщение о том, что книга не найдена.
            std::cout << "Book with title '" << title << "' not found in the library." << std::endl;
        }
    }
};

#endif // CLASS_LIBRURAY_H