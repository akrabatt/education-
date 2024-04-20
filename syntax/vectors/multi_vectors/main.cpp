/* тут мы рассмотрим как использовать многомерные вектора */
#include <iostream>
#include <vector>

int main()
{
    /* для начала создадим многомерный вектор, это будет выглядить как вектор в векторе */
    /* синтаксис создания матрици ниже означает матрицу 5 на 5*/
    // std::vector<std::vector<int>> column(5, std::vector<int>(5));
    /* так же можем колличество колон и столбцов задать в ручную */

    int rows, columns = 0;  //переменные для колонок и строк
    std::cout << "input rows: ";    
    std::cin >> rows;   //строки
    std::cout << std::endl;
    std::cout << "input columns: ";
    std::cin >> columns;    //колонки
    std::cout << std::endl;

    /* создадим вектор векторов и передадим в него значение строк и колонок */
    std::vector<std::vector<int>> column(rows, std::vector<int>(columns));


    /* тут мы просто заполним матрицу числами по порядку */
    for (size_t i = 0; i != rows; ++i)
    {
        for (size_t j = 0; j != columns; j++)
        {
            column[i][j] = j + 1;
        }
    }

    /* тут мы выводим нашу матрицу */
    for (size_t i = 0; i != rows; ++i)
    {
        std::cout << i + 1 << " row: ";
        for (size_t j = 0; j != columns; ++j)
        {
            std::cout << column[i][j];
        }
        std::cout << std::endl;
    }
}