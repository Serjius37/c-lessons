/* Факториал.
Для целого числа k(0≤k≤12) k ( 0 \le k \le 12) k(0≤k≤12) посчитать k! k! k!.
Входные данные:
Одно целое число k k k, (0≤k≤12) (0 \le k \le 12) (0≤k≤12).
Выходные данные:
Значение факториала числа k k k. */

#include <stdio.h>

int main() {
    int k;
    int d=1;
    scanf ("%d",&k);
    for (int i = 1; i!=k+1; i+=1){
        d*=i;  
    } 
    printf("%d ",d);           
    return 0;
}