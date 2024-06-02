class Point
{
public:
    // для начала создадим конструктор по умолчанию
    Point() { std::cout << "constructor done! " << this << std::endl; }

    // сделаем перегрузку конструтора
    Point(int x, int y)
    {
        std::cout << "objects constructor with 2 args " << this << std::endl;
        this->x = x;
        this->y = y;
    }
    // создадим деструктор
    ~Point() { std::cout << "destructor done! " << this << std::endl; }

private:
    int x, y;

public:
    void SetCoord(int x, int y) // создадим сеттер
    {
        this->x = x;
        this->y = y;
    }
};