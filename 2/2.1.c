#include <stdio.h>
#include <stdlib.h>
enum Formula
{
    Volume = 1,
    Square
};
/**
 * @brief Вычисляет объем параллелепипеда с заданными сторонами
 * @param side сторона параллелепипеда
 * @return Расчитанное значение
 */
double volume(const double length, const double width, const double height);
/**
 * @brief Вычисляет площадь поверхности параллелепипеда с заданными сторонами
 * @param side сторона параллелепипеда
 * @return Расчитанное значение
 */
double square(const double length, const double width, const double height);
/**
 * @brief Считывает с клавиатуры значение с плавающей точкой
 * @return Считанное значение
 */
double getDouble();
/**
 * @brief Считывает число с клавиатуры
 * @return value, если программа выполнена корректно, иначе Error
 */
int getInt();
/**
 * @brief Проверяет, что сторона - положительное число
 * @param side - считанное значение стороны параллелепипеда
 */
void checkSide(const double side);
/**
 * @brief Точка входа в программу
 * @return 0, если программа выполнена корректно, иначе не 0
 */
int main()
{
    printf("Enter the length, width, height\n");
    double length = getDouble();
    checkSide(length);
    double width = getDouble();
    checkSide(width);
    double height = getDouble();
    checkSide(height);
    printf("Enter formula %d - Volume, %d - Square:", Volume, Square);
    int formula = getInt();
    switch (formula)
    {
        case Volume:
            printf("Volume is %lf", volume(length, width, height));
            break;
        case Square:
            printf("Square is %lf", square(length, width, height));
            break;
        default:
            printf("Unknown formula");
            break;
    }
    return 0;
}
double volume(const double length, const double width, const double height)
{
    return length*width*height;
}
double square(const double length, const double width, const double height)
{
    return 2*(length*width+width*height+length*height);
}
double getDouble()
{
    double val = 0.0;
    if (scanf("%lf",&val) !=1)
        {
            printf("Error");
            exit(1);
        }
    return val;
}
int getInt()
{
    int value = 0;
    if (scanf("%d",&value) != 1)
        {
            printf("Error");
            exit(1);
        }
    return value;
}
void checkSide(const double side)
{
    if (side <= 0)
    {
        printf("Error");
        exit(1);
    }
}
