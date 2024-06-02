// рассмотрим конструктор с делегирование переменных
class Point
{
public:
    // создадим конструктор по умолчанию
    Point() { std::cout << "object const: " << this << std::endl; }

    // теперь вызовем конструктор с делегирование перрменных
    // это работет так что вызывая конструктор мы сразу
    // инициализируем переменные x = px, y = py в прива-
    // тных полях
    Point(int px, int py) : x(px), y(py)
    {
        std::cout << "constr onject with 2 vars: " << this << std::endl;
    }

    ~Point() { std::cout << "destructor" << this << std::endl; }

    // создадим геттер
    void Get_x_y() { std::cout << "x = " << x << "\ty = " << y << "\n"; }


private:
    int x, y;

public:
    void SetCoord(int x, int y) { this->x = x, this->y = y; }
};