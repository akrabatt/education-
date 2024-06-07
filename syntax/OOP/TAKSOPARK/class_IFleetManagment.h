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
    IFleetManager() : id(0) {}

    // конструктор с id;
    explicit IFleetManager(int id) : id(id) {}

    // метод назначения id
    void SetId(int id)
    {
        this->id = id;
        std::cout << "the id: " << id << " was assigned!\n";
    }

    // метод получения id
    int GetId() const { return this->id; }

    /* далее идет интерфейс методов */
    
};
#endif