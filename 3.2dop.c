#include <stdlib.h>
#include <stdio.h>
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Числа, у которых сумма крайних цифр равна сумме средних цифр и которые делятся на 6 и 27:\n");
    int x;
    int beginning = 1000;
    int end = 9999;
    int step = 1;
    for (x = beginning; x<= end; x+= step)
    {
        if ((x / 1000) + (x % 10) == ((x / 100) % 10) + ((x / 10) % 10) && x % 6 == 0 && x % 27 ==0)
        {
           printf("%d\n", x);
        }
    }
    return 0;
}
