/*Усовершенствуйте программу, написанную на прошлом шаге. Теперь необходимо вывести все натуральные числа из промежутка [K,M],(K<M) [K, M], (K \lt M) [K,M],(K<M)
Входные данные:
Два целых числа K,M K, M K,M. При этом M M M больше K K K.
Выходные данные:
Натуральные числа в порядке возрастания принадлежащие промежутку [K,M] [K,M] [K,M]. Числа нужно разделять одним пробелом.
Подсказки:
Натуральные числа начинаются с 1 1 1
Целые числа могут быть и отрицательными. */

#include <stdio.h>

int main() {
    int k,m;
    scanf ("%d %d",&k,&m);
    if (m<=0) {
        printf("");  
    } else {
        if (k<0){
            for (int i = 1; i!=m+1; i+=1)
                printf("%d ",i); 
        } else {
            for (int i = k; i!=m+1; i+=1){
                printf("%d ",i);  
            }    
        }   
    }            
    return 0;
}