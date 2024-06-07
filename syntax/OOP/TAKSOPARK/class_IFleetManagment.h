// данный клас предназначен для интерфейса взаимодействия между гаражом и
// машиной и водителем
#ifndef CLASS_IFLEETMANAGMENT
#define CLASS_IFLEETMANAGMENT
class IFleetManager
{
private:
    // ID
    int id;

protected:
    // деструктор
    virtual ~IFleetManager() {}

public:
    // конструктор по умолчанию
    IFleetManager() {}

    // конструктор с id
    IFleetManager(int id) : id(id) {}
};
#endif