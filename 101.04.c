/*
Минимум-2.
Напишите программу, которая будет вычислять и возвращать минимальное из трёх чисел, переданных в неё, при помощи функции min.
Входные данные:
Три целых числа.
Выходные данные:
Одно целое число -- минимум из чисел, переданных в функцию.
*/

#include<stdio.h>
int min(int a, int b, int c)
{
    int min = b;
    if (a < b)
        min = a;
    if (c < min)
        min = c;

    return min;
}
int main(void)
{
    int x = 0, y = 0, z = 0;
    int  m = 0;

    scanf("%d %d %d", &x, &y, &z);

    m = min(x, y, z);

    printf("%d", m);

    return 0;
}