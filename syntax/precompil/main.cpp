#include <iostream>

#define TUGGLE_DEBUG_ON     // определяем так сказать константу, которая будет определяться компилятором в виде такого переключателя
#define TUGGLE_DEBUG_NUM 10 // определим еще оду константу для #if

/* ifdef == else == endif */
int main()
{
#ifdef TUGGLE_DEBUG_ON // если константа определена
    std::cout << "start cycle debug" << std::endl;
#else
    std::cout << "start cycle release" << std::endl;
#endif
    for (int i = 0; i < 4; i++)
    {
        std::cout << i << std::endl;
    }
#ifdef TUGGLE_DEBUG_ON
    std::cout << "start cycle debug" << std::endl;
#else
    std::cout << "start cycle release" << std::endl;
#endif

    /* ifndef */ // это тоже самое но только наоборот

#ifndef TUGGLE_DEBUG_ON
    std::cout << "start cycle release" << std::endl;
#else
    std::cout << "start cycle debug" << std::endl;
#endif

/* if */
#if TUGGLE_DEBUG_NUM == 10
    std::cout << "true" << std::endl;
#else if (TUGGLE_DEBUG_NUM > 20)
    std::cout << "false" << std::endl;
#endif
}