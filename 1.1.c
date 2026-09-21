#include <stdio.h>
#include <math.h>
/**
 * @brief Вычисляет значение функции A по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитанное значение
 */
double A(const double x, const double y, const double z);

/**
 * @brief Вычисляет значение функции B по заданной формуле
 * @param x значение параметра x
 * @param y значение параметра y
 * @param z значение параметра z
 * @return рассчитанное значение
 */
double B(const double x, const double y, const double z);

/**
 * @brief точка входа в программму
 * @return возвращает 0, если программа выполнена корректно
 */
int main()
{
    const double x = 2;
    const double y = 0.7;
    const double z = -1;
    printf("a = %.3f\n", A(x, y, z));
    printf("b = %.3f", B(x, y, z));
    return 0;
}

double A(const double x, const double y, const double z)
{
    return cbrt(x*y*z+fabs(z*sin(y)));
}

double B(const double x, const double y, const double z)
{
    return y*cos(x*z*sin(y))+3;
}
