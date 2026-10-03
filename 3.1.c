#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет значение функции по заданной формуле
 * @param x - значение переменной x
 * @return Расчитанное значение
 */
double Y(double x);
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
    double x;
    printf("Введите начало интервала (1):\n");
    double beginning = getDouble();
    printf("Введите конец интервала (2):\n");
    double end = getDouble();
    printf("Введите шаг интервала (0.1):\n");
    double step = getDouble();
    printf("x\t\t\tY\n");
    for (x = beginning; x <= end + 1e-9; x += step)
    {
        if (x <= 0)
        {
            printf("%.2f\t\tОтсутствует решение\n", x);
        }
        else
        {
            printf("%.2f\t\t%lf\n", x, Y(x));
        }
    }
    return 0;
}
double Y(double x)
{
    return 0.1*pow(x,2)-x*log(x);
}
double getDouble()
{
    double val = 0.0;
    scanf("%lf",&val);
    return val;
}
