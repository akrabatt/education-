// создадим класс точки для коориднат

#define MAX_COORD 100
#define UN_DEFINE -1000

class Point
{
private: // приватные поля
    int x, y;

public: // публичные поля
        // геттеры и сеттеры должны быть публичными методами
        // для взаимодействия с приватными полями
    /* сеттеры служат для защиты данных в классе когда мы хотим в них что нибудь записать */
    void setCoord(int x, int y) // создадим сеттер для установки и проверки условий
    {
        if (x >= -MAX_COORD && x <= MAX_COORD)
        {
            this->x = x;
        }

        if (y >= -MAX_COORD && y <= MAX_COORD)
        {
            this->y = y;
        }
    }
    /* геттеры служать для получения значений из приватных областей */
    // теперь создадим геттер
    int getCoordX() // получаем из приватного поля х
    {
        // тернарный оператор
        return (x >= -MAX_COORD && x <= MAX_COORD) ? x : UN_DEFINE;
    }
    int getCoordY() // получаем из приватного поля у
    {
        // тернарный оператор
        return (y >= -MAX_COORD && y <= MAX_COORD) ? y : UN_DEFINE;
    }
};