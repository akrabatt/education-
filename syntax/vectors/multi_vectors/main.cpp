/* тут мы рассмотрим как использовать многомерные вектора */
#include <iostream>
#include <vector>

int main()
{
    /* для начала создадим многомерный вектор, это будет выглядить как вектор в векторе */
    /* вектор<вектор<int>> */
    std::vector<std::vector<int>> column(5, std::vector<int>(5));

    for (size_t i = 0; i != 5; ++i)
    {
        for (size_t j = 0; j != 5; ++j)
        {
            std::cout << column[i][j];
        }
        std::cout << std::endl;
    }
}