#include <stdio.h>
#include <math.h>
#include <stdlib.h>
/**
 * @brief Вычисляет значение функции Y по заданной формуле
 * @param x значение переменной x
 * @param a значение переменной a
 * @return Расчитанное значение
 */
double Y(const double x, const double a);
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
    printf("Enter the x\n");
    double x = getDouble();
    const double a = 0.9;
    printf("Y = %lf", Y(x,a));
    return 0;
}
double Y(const double x, const double a)
{
    if (x>1)
    {
        return a*log10(x)+sqrt(fabs(x));
    }
    else
    {
        return 2*a*cos(x)+3*pow(x,2);
    }
}
double getDouble()
{
    double x = 0.0;
    if (scanf("%lf",&x) != 1)
    {
        printf("Error");
        exit(1);
    }
    return x;
}
