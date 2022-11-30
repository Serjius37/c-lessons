/* Делители
Для заданного числа n вывести все его делители и их количество на экран.
Входные данные:
Одно натуральное число N N N.
Выходные данные:
Делители числа N N N, записанные через один пробел в порядке возрастания .
Количество делителей на отдельной строке. */

#include <stdio.h>

int main() {
    int k;
    int count=0;
    scanf ("%d",&k);
        for (int i = 1; i!=k+1; i+=1){
            if (k%i==0){
                printf("%d ",i);
                count+=1;
            }
        } 
    printf("\n%d",count);           
    return 0;
}