typedef struct //объявим структуру
{
    std::string NAME;  //std::string вызываем строку и делаем переменную с ней 
    int GROUP;
    int SES[5];
    float mid;    //сделаем теневую переменную которая будет вычислять среднюю успеваемость студента
}STUDENT;