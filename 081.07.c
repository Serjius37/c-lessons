/*Найти среднее арифметическое элементов массива.
Входные данные:
Первая строка число N,(N>0)N,(N>0) -- длина массива. Длина массива не более 100 элементов. Вторая строка NN  натуральных чисел, записанных через пробел

Одно вещественное число MM -- среднее арифметическое элементов массива. Формат вывода -- два знака после запятой.
Подсказки:
Среднее арифметическое равняется сумме всех элементов массива, делённой на количество элементов. 
*/

#include <stdio.h>

int main(void){
    int N, i;
    double f = 0;
    scanf("%d", &N);
    int array[N + 1];
    for (i=0; i < N ; i++){
        scanf("%d", &array[i]);
    }
    for(i=0; i < N ; i++){
        f += array[i];
    }
    f /= N;
    
     printf("%.2f",f);
      return 0;