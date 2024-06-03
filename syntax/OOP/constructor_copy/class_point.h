class Point
{
private:
    int x, y;

public:
    // создадим конструктор по умолчанию инициализирующий поля нулями
    Point() : x(0), y(0) { std::cout << "constructor default done! : " << this << std::endl; }

    // созадим контруктор который позволят передавать значения
    Point(int ptx, int pty) : x(ptx), y(pty) { std::cout << "construct init x and y done! : " << this << std::endl; }

    // копирующий конструктор принимающий константную ссылку на другой объект который принимает ссылку
    // Point(const Point &other) : x(other.x), y(other.y) { std::cout << "coppy constructor called ! : " << std::endl; }

    // копирующий конструктор который принимает умный указатель
    Point(std::unique_ptr<Point> &other) : x(other->x), y(other->y) { std::cout << "coppy constructor called ! : " << std::endl; }

    ~Point() { std::cout << "destructor done ! : " << this << std::endl; }

    // создадим геттер
    void GetVars() { std::cout << "x: " << x << "\ny: " << y << std::endl; }
};