#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/**
 * @brief Считывает значение с плавающей точкой с клавиатуры
 * @return Считанное значение
 */
double getDouble();
/**
 * @brief Проверяет, что e - положительное
 * @param e - заданное число
 */
void checkE(const double e);
/**
 * @brief Считает сумму всех членов последовательности, по модулю не меньших заданного числа e
 * @param e - заданное число
 * @return Рассчитанное значение
 */
double sum_calculate(const double e);
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите e - заданное число:\n");
    double e = getDouble();
    checkE(e);
    double sum = sum_calculate(e);
    printf("Сумма = %.15f",sum);
    return 0;
}
double sum_calculate(const double e)
{
    double sum = 0.0;
    double element = 1.0;
    int k = 1;
    while (fabs(element) >= e)
    {
        sum += element;
        element = element * (-1.0) / ((2.0 * k + 1.0) * (2.0 * k));
        k++;
    }
    return sum;
}
double getDouble()
{
    double e = 0;
    if (scanf("%lf",&e) != 1)
    {
        printf("Ошибка");
        exit(1);
    }
    return e;
}
void checkE(const double e)
{
    if (e <= 0)
    {
        printf("Ошибка");
        exit(1);
    }
}
