class Point
{
private:
    int x, y;

public:
    // создаем конструктор
    Point(int ptx, int pty) : x(ptx), y(pty) { std::cout << "constructor done ! : " << this << std::endl; }

    // создаем десруктор
    ~Point() { std::cout << "destructor done !: " << this << std::endl; }

    // создадим геттер
    void GetVars() { std::cout << "x: " << x << "\ny: " << y << std::endl; }
};