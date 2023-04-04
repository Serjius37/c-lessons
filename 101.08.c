/*
Квадрат.
Напишите функцию с именем square(n,c), которая выводит на экран квадрат размера n на n, заполненный символами c. Например:
square(4,'#');
выведет:
####
####
####
####
Входные данные:
Одно целое число и символ заполнитель.
Выходные данные:
Квадрат из символов, указанного формата.
*/

#include <stdio.h>
void square(int x, char c)
{
    for (int i = 1; i <= x; i++) {
        for (int r = 1; r <= x; r++) {
            printf("%c", c);
        }
        printf("\n");
    }
}
int main()
{
    int k;
    char m;
    scanf("%d %c", &k, &m);
    square(k, m);
    return 0;
}