// шаблонная фукнция
#include <iostream>

// функция объявляется словом template
template <typename T>
T add(T a, T b)
{
    return a + b;
}

template <typename B1, typename B2>
void outt(B1 c, B2 b)
{
    std::cout << c << " " << b << std::endl;
}

// можем объявить параметры как захотим
template <typename word, typename word_2, typename integer, typename integer_2> //
void outtt(word a, word_2 b, integer c, integer_2 d)
{
    std::cout << a << " " << b << "\n";
    std::cout << c + d;
}

int main()
{
    // используем наши функции
    std::cout << add(2, 3);
    outt(2, "hello");
    outtt("hi", "pidor", 8, 2);
}