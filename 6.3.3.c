/*Написать программу проверяющую, является ли правильной дробь AB \frac{A}{B} BA​.
Входные данные:
Два натуральных числа A,B A, B A,B.
Выходные данные:
Строка yes, если дробь правильная, строка no в противном случае.*/

#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    if (a<b) {
      printf("yes");
    } else
      printf("no");
    return 0;
}