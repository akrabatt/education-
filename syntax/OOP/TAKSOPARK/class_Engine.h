#ifndef CLASS_ENGINE
#define CLASS_ENGINE
class Engine
{
protected:
    // номер двигателя
    int num_eng;

    // мощьность
    int pow_eng;

    // расход
    int conc_eng;

    // виртуальный деструктор
    virtual ~Engine() {}

public:
    // конструктор по умолчанию
    Engine() : num_eng(0), pow_eng(0), conc_eng(0){};

    // конструктор параметризированный
    explicit Engine(int num_eng, int pow_eng, int conc_eng)
    {
        this->num_eng = num_eng;
        this->pow_eng = pow_eng;
        this->conc_eng = conc_eng;
    }

    /* методы */

    // установить номер двигателя
    void SetNumEng(int num_eng) { this->num_eng = num_eng; }

    // установить мощность
    void SetPowEng(int pow_eng) { this->pow_eng = pow_eng; }

    // установить расход двигателя
    void SetConcEng(int conc_eng) { this->conc_eng = conc_eng; }

    // установить полную инф.
    void SetNumPowConc_eng(int num_eng, int pow_eng, int conc_eng)
    {
        this->num_eng = num_eng;
        this->pow_eng = pow_eng;
        this->conc_eng = conc_eng;
    }

    // получить номер двигателя
    int GetNumEng() const { return this->num_eng; }

    // получить мощность
    int GetPowEng() const { return this->pow_eng; }

    // получить расход двигателя
    int GetConcEng() const { return this->conc_eng; }
};
#endif