#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Считывает значение с клавиатуры
 * @return Считанное значение
 */
int getInt();
/** 
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите часы:\n");
    int hours = getInt();
    if (hours < 0 || hours >23)
    {
        printf("Ошибка");
        exit(1);
    }
    if (hours >= 5 && hours < 12)
    {
        printf("Доброе утро");
    }
    if (hours >= 12 && hours < 18)
    {
        printf("Добрый день");
    }
    if (hours >= 18 && hours < 23)
    {
        printf("Добрый вечер");
    }
    if (hours >= 23 || hours < 5 || hours == 0)
    {
        printf("Спокойной ночи");
    }
    return 0;
}
int getInt()
{
    int hours = 0;
    if (scanf("%d", &hours) != 1)
    {
        printf("Ошибка");
        exit(1);
    }
    return hours;
}
