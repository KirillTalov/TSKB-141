#include <stdio.h>
#include <stdlib.h>
/**
 * @brief Считывает значение с клавиатуры
 * @return Считанное значение
 */
int getInt();
/**
 * @brief Проверяет, что n - положительное
 * @param n - количество членов ряда
 */
void checkN(const int n);
/**
 * @brief Считает сумму первых n членов последовательности
 * @param n - количество членов ряда
 * @return Рассчитанное значение
 */
double sum_calculate(const int n);
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Введите n - количество членов ряда:\n");
    int n = getInt();
    checkN(n);
    double sum = sum_calculate(n);
    printf("Сумма = %.15f",sum);
    return 0;
}
double sum_calculate(const int n)
{
    double sum = 0.0;
    double element = 1.0;
    for (int k = 1; k <= n; k++)
    {
        sum += element;
        element = element * (-1.0) / ((2.0 * k + 1.0) * (2.0 * k));
    }
    return sum;
}
int getInt()
{
    int n = 0;
    if (scanf("%d",&n) != 1)
    {
        printf("Ошибка");
        exit(1);
    }
    return n;
}
void checkN(const int n)
{
    if (n <= 0)
    {
        printf("Ошибка");
        exit(1);
    }
}
