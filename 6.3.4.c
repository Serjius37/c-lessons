/*Даны две точки А(х1,у1) А(х_1, у_1) А(х1​,у1​) и В(х2,у2) В(х_2, у_2) В(х2​,у2​). Составить программу, определяющую, которая из точек находится ближе к началу координат.
Входные данные:
Четыре целых числа. Первые два числа -- координаты точки A A A, вторые два числа -- координаты точки B B B.
Выходные данные:
Вывести одно число, номер точки, которая находится ближе к началу координат.
Подсказки:
для определения расстояния от точки (x,y) (x,y) (x,y) до начала координат, можно использовать формулу
R=x2+y2 R = \sqrt{x^2 + y^2}
R=x2+y2*/
​
#include <stdio.h>

int main() {
    int a,b,c,d;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    int r1=(a*a+b*b)*0.5;
    int r2=(c*c+d*d)*0.5;
    if (r1<r2) {
      printf("1");
    } else
      printf("2");
    return 0;
}