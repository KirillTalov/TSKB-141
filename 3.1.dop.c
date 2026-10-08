#include <stdio.h>
#include <stdlib.h>
#define MAX_DIGITS 40000
/**
 * @brief Считает факториал числа n
 * @param n - число, чей факториал считается
 * @return Расчитанное значение
 */
int factorial_calculate(int n, int res[]);
/**
 * @brief Проверяет, что n - положительное число
 * @param n - число, чей факториал считается
 */
void checkN(const int n);
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
    printf("Введите значение n:\n");
    int num = getInt();
    checkN(num);
    int res[MAX_DIGITS];
    int result = factorial_calculate(num, res);
    printf("%d! = ",num);
    for (int i = result - 1; i >=0; i--)
    {
        printf("%d", res[i]);
    }
    return 0;
}
int factorial_calculate(int n, int res[])
{
    int size = 1;
    res[0] = 1;
    for (int x = 2; x <= n; x++)
    {
        int carry = 0;
        for (int i = 0; i < size; i++)
        {
            int prod = res[i] * x + carry;
            res[i] = prod % 10;
            carry = prod / 10;
        }
        while (carry > 0)
        {
            res[size] = carry % 10;
            carry /= 10;
            size++;
        }
    }
    return size;
}
void checkN(const int n)
{
    if (n<0)
    {
        printf("Ошибка");
        exit(1);
    }
    if (n>10000)
    {
        printf("Ошибка");
        exit(1);
    }
}
int getInt()
{
    int num = 0;
    if (scanf("%d",&num) != 1)
    {
        printf("Ошибка");
        exit(1);
    }
    return num;
}
