#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * @brief Считывает значения с плавающей точкой с клавиатуры
 * @return Считанное значение
 */
double getDouble();
/**
 * @brief Рассчитывает значение функции по формуле
 * @param x - значение переменной x
 * @return Рассчитанное значение
 */
double Y(const double x);
/**
 * @brief Точка входа в программу 
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите начало интервала:\n");
    double begin = getDouble();
    printf("Введите конец интервала:\n");
    double end  = getDouble();
    printf("Введите шаг интервала:\n");
    double step = getDouble();
    if (begin > end)
    {
        printf("Ошибка");
        exit(1);
    }
    const double E = pow(20, -4);
    printf("x\t\t\t\t\tY\t\t\t\t\tS\n");
    for (double x = begin; x <= end + 1e-9; x += step)
    {
        double S = 1.0;
        double a = 1.0;
        int n = 1;
        while(fabs(a) > E)
        {
            a = a * (2 * x) / n;
            S += a;
            n++;
        }
        printf("%lf\t\t\t%lf\t\t\t%lf\n", x, Y(x), S);
    }
    return 0;
}
double getDouble()
{
    double val = 0.0;
    if (scanf("%lf",&val) != 1)
    {
        printf("Ошибка");
        exit(1);
    }
    return val;
}
double Y(const double x)
{
    return exp(x*2);
}
