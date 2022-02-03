/*Для заданного числа N N N проверить, является ли оно простым.
Входные данные:
Одно натуральное число N N N, отличное от 1.
Выходные данные:
1 -- если число простое
0 -- если число составное */

#include <stdio.h>

int main() {
    int k;
    int count=0;
    scanf ("%d",&k);
    for (int i = 1; i!=k+1; i+=1){
        if (k%i==0){
            count+=1;
        }
    } 
    if (count==2){
        printf("1",count);
    } else {
        printf("0");
    }        
    return 0;
}