typedef struct      //создадим объединение где будут храниться две структуры
{
    struct tag_struct_1     //создадим структуру 1
    {
        int data_1_1;
        double data_1_2;
    }struct_1;
    
    struct tag_struct_2     //создадим структуру 2
    {
        int data_2_1;
        double data_2_2;
    }struct_2;
    
}st_structs;    //создадим сразу переменную объединения