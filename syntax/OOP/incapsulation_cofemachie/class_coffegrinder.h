// пример созадм класс  кофемашины
class Сoffegrinder
{
private:
    // создадим метод проверки напряжения в сети прежде чем запустить машинку
    bool CheckVolage()
    {
        return true;
    }

public:
    // создадим метод начала перемолки кофемашины
    void Start()
    {
        CheckVolage() ? std::cout << "Vzzjuhhh!\n" : std::cout << "beep beep\n";
    }
};