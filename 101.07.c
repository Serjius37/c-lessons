/*
Последовательные множители.
Напишите функцию с именем sequence_multipliers, принимающую один аргумент xx, которая определяет можно ли представить xx в виде произведения трех последовательных натуральных чисел. Например, 120=4⋅5⋅6120=4⋅5⋅6
Входные данные
Одно натуральное число N,(N<1000000)N,(N<1000000).
Выходные данные:
kk -- первое число последовательности трёх натуральных чисел такое, что k(k+1)(k+2)=xk(k+1)(k+2)=x, либо -1, если число xx нельзя представить в таком виде.
*/

#include<stdio.h>
int sequence_multipliers(int w)
{
    int k = 1, d = -1;
    while (k <= 99) {
        if ((k * (k + 1) * (k + 2) == w)) {
            return k;
            break;
        }
        k += 1;
    }
    return d;

}
int main(void)
{
    int n = 0;
    scanf("%d", &n);
    printf("%d", sequence_multipliers(n));
    return 0;
}