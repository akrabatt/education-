typedef struct {    //структура с битывими полями
    unsigned x:5;   //0-31
    unsigned y:3;   //0-31
} POINT;

typedef union {     //объединение 
    POINT p;    //добавим переменную структуры созданную выше  
    struct {    //создадим структурю с битовыми полями
        unsigned a0 : 1;
        unsigned a1 : 1;
        unsigned a2 : 1;
        unsigned a3 : 1;
        unsigned a4 : 1;
        unsigned a5 : 1;
        unsigned a6 : 1;
        unsigned a7 : 1;
    } byte;
} CODE;



