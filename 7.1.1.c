/*Написать программу выводящую на экран первые N натуральных чисел.
Входные данные:
Одно  целое число N, N>0 N \gt 0 N>0
Выходные данные:
Первые N натуральных чисел, записанных через пробел. */

#include <stdio.h>

int main() {
    int n;
    scanf ("%d",&n);
    for (int i = 1; i!=n+1; i+=1){
        printf("%d ",i); 
    } 
    return 0;
}