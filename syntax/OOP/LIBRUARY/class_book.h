#ifndef CLASS_BOOK_H
#define CLASS_BOOK_H

class Book
{
private:
    // создадим приватную структуру с данными книгами
    struct
    {
        std::string title;
        std::string author;
        int year;
        std::string genre;
        bool nalich;
    } books_info;

public:
    // конструкторы

    // конструктор по умолчанию
    Book() { std::cout << "empty constructor book is created: " << this << std::endl; }

    // параметризированный конструктор
    Book(std::string title, std::string author, int year, std::string genre) : books_info{title, author, year, genre, false}

    {
        std::cout << "full constructor book is created ! : " << this << std::endl;
    }

    // делегирующий конструктор
    Book(std::string title, std::string author, int year, std::string genre, bool nalich) : Book(title, author, year, genre)
    {
        this->books_info.nalich = nalich;
        std::cout << "delg constr is done ! : " << this << std::endl;
    }

    // копирующий конструктор просто по ссылке
    Book(const Book &other) : books_info{other.books_info.title, other.books_info.author, other.books_info.year, other.books_info.genre, other.books_info.nalich}
    {
        std::cout << "copy constructor is done ! : " << this << std::endl;
    }

    // деструктор
    ~Book() { std::cout << "destructor ! : " << this << std::endl; }

    // сеттер
    void Set_books_info(std::string title, std::string author, int year, std::string genre, bool nalich)
    {
        this->books_info.title = title;
        this->books_info.author = author;
        this->books_info.year = year;
        this->books_info.genre = genre;
        this->books_info.nalich = nalich;
    }

    // геттер
    void Get_books_info()
        const
    {
        std::cout << "title: " << books_info.title << std::endl;
        std::cout << "author: " << books_info.author << std::endl;
        std::cout << "year: " << books_info.year << std::endl;
        std::cout << "genre: " << books_info.genre << std::endl;
        std::cout << "nalich: " << books_info.nalich << std::endl;
    }
};

#endif // CLASS_BOOK_H