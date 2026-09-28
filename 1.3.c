#include <stdio.h>
/**
 * @brief Считает сопротивление последовательного соединения
 * @param R значение сопротивления 
 * @return Расчитанное значение
 */
double resistance(const double R1,const double R2,const double R3);
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
    double R1 = getDouble();
    double R2 = getDouble();
    double R3 = getDouble();
    printf("Total resistance is %lf\n",resistance(R1,R2,R3));
    return 0;
}
double resistance(const double R1,const double R2,const double R3)
{
    return R1+R2+R3;
}
double getDouble()
{
    double val = 0.0;
    scanf("%lf",&val);
    return val;
}
