// начинаем рассматривать синтаксис ООП
#include <iostream>

// создадим класс
class Point
{
private: // приватная зона
    int x, y;

public: // публичная зона
        // функция по установки значений в приватные данные
    void setCord(int pt_x, int pt_y)
    {
        x = pt_x;
        y = pt_y;
        std::cout << "now x = " << x << "\nnow y = " << y << "\n\n";
    }
};

int main()
{
    // создадим объект
    Point pnt;
    // воспользуемся публичным методом объекта
    pnt.setCord(10, 18);

    // создадим экземпляр класса
    Point *pt = new Point();
    // воспользуемся публичным методом через указатель
    pt->setCord(9, 10);

    // удаляем экземпляр класса
    delete (pt);
}