/*
Напишите программу, выводящую на экран все элементы массива, которые меньше последнего.
Входные данные:
Первая строка число N,(N>0)N,(N>0) -- длина массива. Длина массива -- не более 100 элементов. Вторая строка -- NN  натуральных чисел, записанных через пробел
Выходные данные:
Элементы массива, которые меньше его последнего элемента в том порядке, как они встречаются в массиве, через пробел, или же число 0, если таких элементов не существует. 
*/

#include <stdio.h>

int main(void){
    int N, i;
    int f = 0;
    scanf("%d", &N);
    int array[N + 1];
    for (i=0; i < N ; i++){
        scanf("%d",&array[i]);
    }

    for(i=0; i < N ; i++){
        if (array[N-1] > array[i] ) {
            printf("%d ", array[i]);
            f += 1;
        }
    } 
    if (!f)
        printf("0");
      return 0;
}