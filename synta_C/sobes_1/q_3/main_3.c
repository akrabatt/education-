#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Функция для реверса строки
char *reverse(const char *str) // принимаем указатель
{
    // Получаем длину строки
    size_t len = strlen(str);

    // Выделяем память для новой строки, включая место для нулевого символа
    char *res = malloc(len + 1); //+1 добавляем место для нулевого символа

    // Указатель для записи символов в результирующую строку
    char *p = res;

    // Копируем символы в обратном порядке
    for (size_t i = 0; i < len; ++i)
    {
        p[i] = str[len - i - 1]; // вычитаем из длинны
    }

    // Добавляем нулевой символ в конец новой строки
    p[len] = '\0';

    // Возвращаем указатель на результирующую строку
    return res;
}

int main()
{
    const char *original = "abc";
    char *reversed = reverse(original);
    if (reversed != NULL)
    {
        printf("Original: %s\n", original);
        printf("Reversed: %s\n", reversed);
        free(reversed); // освободим память после malloc
    }
    return 0;
}
