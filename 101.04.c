/*
Минимум-2.
Напишите программу, которая будет вычислять и возвращать минимальное из трёх чисел, переданных в неё, при помощи функции min.
Входные данные:
Три целых числа.
Выходные данные:
Одно целое число -- минимум из чисел, переданных в функцию.
*/

#include<stdio.h>

int min(int a, int b)
{
    return a < b ? a : b;
}

int min3(int a, int b, int c)
{
    return min(a, min(b, c));
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