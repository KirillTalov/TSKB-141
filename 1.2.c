#include <stdio.h>
/**
 * @brief Переводит объем информации из байт в мегабайты
 * @param volume объем информации в байтах
 * @return Расчитанное значение
 */
double megabyte(const double volume);
/**
 * @brief Переводит объем информации из байт в гигабайты
 * @param volume объем информации в байтах
 * @return Расчитанное значение
 */
double gigabyte(const double volume);
/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter the value\n");
    double volume = getDouble();
    printf("Megabyte is %lf\n",megabyte(volume));
    printf("Gigabyte is %lf",gigabyte(volume));
    return 0;
}
double megabyte(const double volume)
{
    return volume/(1024*1024);
}
double gigabyte(const double volume)
{
    return volume/(1024*1024*1024);
}
double getDouble()
{
    double volume = 0.0;
    scanf("%lf",&volume);
    return volume;
}
