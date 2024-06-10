// данный класс предназначен для водителя
#ifndef CLASS_DRIVER
#define CLASS_DRIVER
class Driver : virtual public IFleetManager
{
private:
    std::string name;
    std::string family_name;
    int age;
    std::string category;

public:
    // деструктор
    ~Driver() { std::cout << "the driver" << this->name << " has been deleted\n"; }

    // конструктор по умолчанию
    Driver() : IFleetManager(0), name("noname") {}

    // конструктор параметризированный
    Driver(int id, std::string name, std::string family_name, int age, std::string category) : IFleetManager(id)
    {
        this->name = name;
        this->family_name = family_name;
        this->age = age;
        this->category = category;
    }

    /* ======== сеттеры ======== */

    // id
    void SetDrivId(int id)
    {
        SetId(id);
    }

    // имя
    void SetDrivName(std::string name) { this->name = name; }

    // фамилия
    void SetDrivFam(std::string family_name) { this->family_name = family_name; }

    // возраст
    void SetDrivAge(int age) { this->age = age; }

    // категория
    void SetDrivCat(std::string category) { this->category = category; }

    // установить полностью
    void SetDrivAll(int id, std::string name, std::string family_name, int age, std::string category)
    {
        SetId(id);
        this->name = name;
        this->family_name = family_name;
        this->age = age;
        this->category = category;
    }

    /* ======== геттеры ======== */

    // получить id
    int GetDrivId() { return GetId(); }

    // получить имя
    std::string GetDrivName() const { return this->name; }

    // получить фамилию
    std::string GetDrivFam() const { return this->family_name; }

    // получить возрасть
    int GetDriveAge() const { return this->age; }

    // получить категорию
    std::string GetDrivCat() const { return this->category; }
};
#endif